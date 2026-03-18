/*
 * XREFs of XmEmulateStream @ 0x1403A32AC
 * Callers:
 *     XmEmulateInterrupt @ 0x1403A24DC (XmEmulateInterrupt.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x14024DA70 (MmGetMinWsPagePriority.c)
 *     XmOpcodeEscape @ 0x140372D20 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140372D40 (XmClcOp.c)
 *     XmCldOp @ 0x140372D50 (XmCldOp.c)
 *     XmCliOp @ 0x140372D60 (XmCliOp.c)
 *     XmCmcOp @ 0x140372D70 (XmCmcOp.c)
 *     XmSahfOp @ 0x140372D90 (XmSahfOp.c)
 *     XmStcOp @ 0x140372DB0 (XmStcOp.c)
 *     XmStdOp @ 0x140372DC0 (XmStdOp.c)
 *     XmStiOp @ 0x140372DD0 (XmStiOp.c)
 *     XmBtOp @ 0x140372DE0 (XmBtOp.c)
 *     XmIretOp @ 0x1403A2580 (XmIretOp.c)
 *     XmDecOp @ 0x1403A25F0 (XmDecOp.c)
 *     XmOrOp @ 0x1403A2610 (XmOrOp.c)
 *     XmXchgOp @ 0x1403A2630 (XmXchgOp.c)
 *     XmInOp @ 0x1403A2670 (XmInOp.c)
 *     XmOutOp @ 0x1403A26C0 (XmOutOp.c)
 *     XmIncOp @ 0x1403A2700 (XmIncOp.c)
 *     XmPortDX @ 0x1403A2720 (XmPortDX.c)
 *     XmTestOp @ 0x1403A2750 (XmTestOp.c)
 *     XmGroup3General @ 0x1403A2770 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403A2810 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403A2850 (XmCallOp.c)
 *     XmRetOp @ 0x1403A28B0 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x1403A2920 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403A2980 (XmMoveGeneral.c)
 *     XmPushOp @ 0x1403A29F0 (XmPushOp.c)
 *     XmPopOp @ 0x1403A2A10 (XmPopOp.c)
 *     XmSubOp @ 0x1403A2C30 (XmSubOp.c)
 *     XmMovOp @ 0x1403A2DF0 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x1403A2E90 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403A2EE0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403A2FD0 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x1403A340C (XmGetCodeByte.c)
 *     XmLongJump @ 0x1403A34A0 (XmLongJump.c)
 *     XmJxxOp @ 0x1403A36B0 (XmJxxOp.c)
 *     XmShortJump @ 0x1403A3710 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403A4B40 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403A5570 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403B7EC0 (XmShlOp.c)
 *     XmShrOp @ 0x1403B7FE0 (XmShrOp.c)
 *     XmRolOp @ 0x1403CBEE0 (XmRolOp.c)
 *     XmLoopOp @ 0x1403CC080 (XmLoopOp.c)
 *     XmStosOp @ 0x1403CC230 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403CC4C0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403CCF30 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403CF380 (XmAddOp.c)
 *     XmPopaOp @ 0x1403CFB60 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403CFBE0 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403D05B0 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403D0D90 (XmGroup2ByCL.c)
 *     XmPushPopSegment @ 0x1403D0DF0 (XmPushPopSegment.c)
 *     XmGroup45General @ 0x1403D0E30 (XmGroup45General.c)
 *     XmPushaOp @ 0x1403D0EC0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403D2130 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403D5C90 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403D7560 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403D8160 (XmDivOp.c)
 *     XmStringOperands @ 0x1403D81F0 (XmStringOperands.c)
 *     XmMoveSegment @ 0x1403D88E0 (XmMoveSegment.c)
 *     XmNotOp @ 0x1403D90D0 (XmNotOp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x14042B890 (_setjmp.c)
 *     XmBitScanGeneral @ 0x140534F20 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x140534F80 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x140534FB0 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x140535030 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x140535070 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140535110 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140535190 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405351F0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1405352A0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1405352F0 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x140535340 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405353C0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x140535490 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1405354E0 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x140535530 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x140535570 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1405355B0 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1405355F0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140535670 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1405356D0 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1405356F0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x140535760 (XmNegOp.c)
 *     XmSbbOp @ 0x140535790 (XmSbbOp.c)
 *     XmXaddOp @ 0x1405357B0 (XmXaddOp.c)
 *     XmAaaOp @ 0x1405357F0 (XmAaaOp.c)
 *     XmAadOp @ 0x140535840 (XmAadOp.c)
 *     XmAamOp @ 0x1405358D0 (XmAamOp.c)
 *     XmAasOp @ 0x140535960 (XmAasOp.c)
 *     XmDaaOp @ 0x1405359C0 (XmDaaOp.c)
 *     XmDasOp @ 0x140535A10 (XmDasOp.c)
 *     XmRclOp @ 0x140535A60 (XmRclOp.c)
 *     XmRcrOp @ 0x140535B30 (XmRcrOp.c)
 *     XmRorOp @ 0x140535BD0 (XmRorOp.c)
 *     XmSarOp @ 0x140535C50 (XmSarOp.c)
 *     XmShldOp @ 0x140535D30 (XmShldOp.c)
 *     XmShrdOp @ 0x140535E70 (XmShrdOp.c)
 *     XmLahfOp @ 0x140535FD0 (XmLahfOp.c)
 *     XmInsOp @ 0x140536000 (XmInsOp.c)
 *     XmOutsOp @ 0x140536090 (XmOutsOp.c)
 *     XmEnterOp @ 0x140536120 (XmEnterOp.c)
 *     XmHltOp @ 0x1405361D0 (XmHltOp.c)
 *     XmIntOp @ 0x1405361F0 (XmIntOp.c)
 *     XmLeaveOp @ 0x1405362A0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1405362F0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140536510 (XmLodsOp.c)
 *     XmMovsOp @ 0x140536590 (XmMovsOp.c)
 *     XmScasOp @ 0x140536620 (XmScasOp.c)
 *     XmBsfOp @ 0x1405366C0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140536700 (XmBsrOp.c)
 *     XmBtcOp @ 0x140536750 (XmBtcOp.c)
 *     XmBtrOp @ 0x140536790 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405367E0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140536820 (XmCbwOp.c)
 *     XmCwdOp @ 0x140536860 (XmCwdOp.c)
 *     XmBoundOp @ 0x1405368B0 (XmBoundOp.c)
 *     XmBswapOp @ 0x140536960 (XmBswapOp.c)
 *     XmIllOp @ 0x140536980 (XmIllOp.c)
 *     XmRdtscOp @ 0x1405369A0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1405369D0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405369F0 (XmImulOp.c)
 *     XmImulxOp @ 0x140536AA0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x140536B70 (XmJcxzOp.c)
 *     XmIdivOp @ 0x140536BA0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140536CB0 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CF7118 = *(_DWORD *)a4;
  dword_140CF711C = *(_DWORD *)(a4 + 4);
  dword_140CF7120 = *(_DWORD *)(a4 + 8);
  dword_140CF7124 = *(_DWORD *)(a4 + 12);
  dword_140CF712C = *(_DWORD *)(a4 + 16);
  dword_140CF7130 = *(_DWORD *)(a4 + 20);
  dword_140CF7134 = *(_DWORD *)(a4 + 24);
  word_140CF713E = *(_WORD *)(a4 + 28);
  word_140CF7138 = *(_WORD *)(a4 + 30);
  word_140CF713A = a2;
  dword_140CF7114 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      CodeByte = XmGetCodeByte(&XmContext);
      *((_DWORD *)&XmContext + 28) = CodeByte;
      v6 = *(_WORD *)(XmContext + 2LL * CodeByte);
      *((_WORD *)&XmContext + 40) = v6;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v6;
    }
    while ( !((unsigned int (__fastcall *)(void *))XmOperandDecodeTable[*((unsigned __int8 *)&XmContext + 81)])(&XmContext) );
    ((void (__fastcall *)(void *))XmOpcodeFunctionTable[*((unsigned int *)&XmContext + 31)])(&XmContext);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
