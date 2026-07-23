/*
 * XREFs of XmEmulateStream @ 0x140397358
 * Callers:
 *     XmEmulateInterrupt @ 0x14039658C (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x1403655C0 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x1403655E0 (XmClcOp.c)
 *     XmCldOp @ 0x1403655F0 (XmCldOp.c)
 *     XmCliOp @ 0x140365600 (XmCliOp.c)
 *     XmCmcOp @ 0x140365610 (XmCmcOp.c)
 *     XmSahfOp @ 0x140365630 (XmSahfOp.c)
 *     XmStcOp @ 0x140365650 (XmStcOp.c)
 *     XmStdOp @ 0x140365660 (XmStdOp.c)
 *     XmStiOp @ 0x140365670 (XmStiOp.c)
 *     XmBtOp @ 0x140365680 (XmBtOp.c)
 *     XmIretOp @ 0x140396630 (XmIretOp.c)
 *     XmDecOp @ 0x1403966A0 (XmDecOp.c)
 *     XmOrOp @ 0x1403966C0 (XmOrOp.c)
 *     XmXchgOp @ 0x1403966E0 (XmXchgOp.c)
 *     XmInOp @ 0x140396720 (XmInOp.c)
 *     XmOutOp @ 0x140396770 (XmOutOp.c)
 *     XmIncOp @ 0x1403967B0 (XmIncOp.c)
 *     XmPortDX @ 0x1403967D0 (XmPortDX.c)
 *     XmTestOp @ 0x140396800 (XmTestOp.c)
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403968C0 (XmAccumImmediate.c)
 *     XmCallOp @ 0x140396900 (XmCallOp.c)
 *     XmRetOp @ 0x140396960 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x1403969D0 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x140396A30 (XmMoveGeneral.c)
 *     XmPushOp @ 0x140396AA0 (XmPushOp.c)
 *     XmPopOp @ 0x140396AC0 (XmPopOp.c)
 *     XmSubOp @ 0x140396CE0 (XmSubOp.c)
 *     XmMovOp @ 0x140396EA0 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x140396F40 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396F90 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140397080 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140397550 (XmLongJump.c)
 *     XmJxxOp @ 0x140398200 (XmJxxOp.c)
 *     XmShortJump @ 0x140398260 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x140398740 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x140399900 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403B1760 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1880 (XmShrOp.c)
 *     XmRolOp @ 0x1403C0660 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C0980 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C1140 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403C13D0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C15F0 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403C3A50 (XmAddOp.c)
 *     XmPopaOp @ 0x1403C3A70 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403C3AF0 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403C3BD0 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403C3C70 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4490 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C44D0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C5340 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C7130 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C95C0 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C96A0 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C99B0 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C9B90 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x1404099E0 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404E5480 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404E54E0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404E5510 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404E5590 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E55D0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5670 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E56F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5750 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E5800 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E5850 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404E58A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E59F0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E5A40 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E5A90 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E5AD0 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E5B10 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E5B50 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E5BD0 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E5C30 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E5C50 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E5CC0 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E5CF0 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E5D10 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E5D50 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E5DA0 (XmAadOp.c)
 *     XmAamOp @ 0x1404E5E30 (XmAamOp.c)
 *     XmAasOp @ 0x1404E5EC0 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E5F20 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E5F70 (XmDasOp.c)
 *     XmRclOp @ 0x1404E5FC0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E6090 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E6130 (XmRorOp.c)
 *     XmSarOp @ 0x1404E61B0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E6290 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E63D0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E6530 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6560 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E65F0 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E6680 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E6730 (XmHltOp.c)
 *     XmIntOp @ 0x1404E6750 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E6800 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E6850 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6A70 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E6AF0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6B80 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E6C20 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6C60 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E6CB0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E6CF0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6D40 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6D80 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6DC0 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E6E10 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E6EC0 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E6EE0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E6F00 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E6F30 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6F50 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E7000 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E70D0 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E7100 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E7210 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CED5E8 = *(_DWORD *)a4;
  dword_140CED5EC = *(_DWORD *)(a4 + 4);
  dword_140CED5F0 = *(_DWORD *)(a4 + 8);
  dword_140CED5F4 = *(_DWORD *)(a4 + 12);
  dword_140CED5FC = *(_DWORD *)(a4 + 16);
  dword_140CED600 = *(_DWORD *)(a4 + 20);
  dword_140CED604 = *(_DWORD *)(a4 + 24);
  word_140CED60E = *(_WORD *)(a4 + 28);
  word_140CED608 = *(_WORD *)(a4 + 30);
  word_140CED60A = a2;
  dword_140CED5E4 = a3;
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
