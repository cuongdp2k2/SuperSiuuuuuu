// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+73,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+28,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,"loadsave_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+90,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+7,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+13,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brcomp1 ");
    tracep->declBus(c+11,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl_unit1 ");
    tracep->declBus(c+91,"OPCODE_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+92,"OPCODE_ALU_I",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+93,"OPCODE_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+94,"OPCODE_STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+95,"OPCODE_BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+96,"OPCODE_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+97,"OPCODE_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+98,"OPCODE_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+99,"OPCODE_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+100,"FUNCT3_BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+101,"FUNCT3_BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+102,"FUNCT3_BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+103,"FUNCT3_BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+104,"FUNCT3_BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+105,"FUNCT3_BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+10,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"loadsave_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+33,"OPCODE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,"FUNCT3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen1 ");
    tracep->declBus(c+10,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"imm_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,"I_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+1,"S_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+2,"B_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 12,0);
    tracep->declBus(c+3,"J_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 20,0);
    tracep->declBus(c+36,"U_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins_mem1 ");
    tracep->declBus(c+106,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"loadsave_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+88,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxOpA ");
    tracep->declBus(c+90,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxOpB ");
    tracep->declBus(c+90,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+12,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxPC ");
    tracep->declBus(c+90,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+15,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcAdd4 ");
    tracep->declBus(c+90,"SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile1 ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+18,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+19,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+89,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+24,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+41+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback ");
    tracep->declBus(c+8,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"mem_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"WBSel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+89,"wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__S_imm),12);
    bufp->fullSData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__B_imm),13);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT__J_imm),21);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+7,(((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                              ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                              : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))),32);
    bufp->fullIData(oldp+8,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc)),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__pc),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__br_sel));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__br_unsigned));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__br_less));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__br_equal));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__alu_op),4);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__loadsave_op),3);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__alu1__DOT__temp),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__brcomp1__DOT__temp),32);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 2U))),5);
    bufp->fullCData(oldp+34,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+35,((vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+36,((0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr)),32);
    bufp->fullBit(oldp+37,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__pc))));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2),32);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask),4);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[2]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[3]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[4]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[5]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[6]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[7]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[8]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[9]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[10]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[11]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[12]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[13]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[14]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[15]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[16]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[17]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[18]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[19]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[20]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[21]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[22]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[23]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[24]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[25]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[26]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[27]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[28]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[29]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[30]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__register[31]),32);
    bufp->fullIData(oldp+73,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+74,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+75,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+76,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+77,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+78,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+79,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+80,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+81,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+82,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+83,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+84,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+85,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+86,(vlSelf->clk_i));
    bufp->fullBit(oldp+87,(vlSelf->rst_ni));
    bufp->fullIData(oldp+88,(((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op) 
                                         >> 2U)) & 
                                     (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
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
                               : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->fullIData(oldp+89,(((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                               ? ((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op) 
                                             >> 2U)) 
                                         & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                                   ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__loadsave_op))
                                       ? ((((0x80U 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
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
    bufp->fullIData(oldp+90,(0x20U),32);
    bufp->fullCData(oldp+91,(0xcU),5);
    bufp->fullCData(oldp+92,(4U),5);
    bufp->fullCData(oldp+93,(0U),5);
    bufp->fullCData(oldp+94,(8U),5);
    bufp->fullCData(oldp+95,(0x18U),5);
    bufp->fullCData(oldp+96,(0x1bU),5);
    bufp->fullCData(oldp+97,(0x19U),5);
    bufp->fullCData(oldp+98,(0xdU),5);
    bufp->fullCData(oldp+99,(5U),5);
    bufp->fullCData(oldp+100,(0U),3);
    bufp->fullCData(oldp+101,(1U),3);
    bufp->fullCData(oldp+102,(4U),3);
    bufp->fullCData(oldp+103,(5U),3);
    bufp->fullCData(oldp+104,(6U),3);
    bufp->fullCData(oldp+105,(7U),3);
    bufp->fullIData(oldp+106,(0x20U),32);
    bufp->fullIData(oldp+107,(4U),32);
}
