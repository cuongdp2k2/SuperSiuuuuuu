// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__S_imm),12);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__B_imm),13);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__J_imm),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+6,(((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                 ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                 : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))),32);
        bufp->chgIData(oldp+7,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc)),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__pc),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
        bufp->chgCData(oldp+16,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 7U))),5);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__br_sel));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__br_unsigned));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__br_less));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__br_equal));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__alu_op),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__loadsave_op),3);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__alu1__DOT__temp),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__brcomp1__DOT__temp),32);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 2U))),5);
        bufp->chgCData(oldp+33,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+34,((vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+35,((0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr)),32);
        bufp->chgBit(oldp+36,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__pc))));
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2),32);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask),4);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[0]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[1]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[2]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[3]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[4]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[5]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[6]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[7]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[8]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[9]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[10]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[11]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[12]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[13]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[14]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[15]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[16]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[17]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[18]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[19]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[20]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[21]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[22]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[23]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[24]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[25]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[26]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[27]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[28]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[29]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[30]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[31]),32);
    }
    bufp->chgIData(oldp+72,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+73,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+74,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+75,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+76,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+77,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+78,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+79,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+80,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+81,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+82,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+83,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+84,(vlSelf->pc_debug_o),32);
    bufp->chgBit(oldp+85,(vlSelf->clk_i));
    bufp->chgBit(oldp+86,(vlSelf->rst_ni));
    bufp->chgIData(oldp+87,(((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op) 
                                        >> 2U)) & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                              ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op))
                                  ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                        ? 0xffffffU
                                        : 0U) << 8U) 
                                     | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                  : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op))
                                      ? ((((0x8000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                            ? 0xffffU
                                            : 0U) << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                      : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                              : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->chgIData(oldp+88,(((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                              ? ((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op) 
                                            >> 2U)) 
                                        & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                                  ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op))
                                      ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                            ? 0xffffffU
                                            : 0U) << 8U) 
                                         | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                      : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op))
                                          ? ((((0x8000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                ? 0xffffU
                                                : 0U) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                          : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                  : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                              : ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                  ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                  : ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                      ? ((IData)(4U) 
                                         + vlSelf->top__DOT__singleCycle__DOT__pc)
                                      : 0U)))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
