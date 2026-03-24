/*
 * XREFs of XmEmulateStream @ 0x140397208
 * Callers:
 *     XmEmulateInterrupt @ 0x14039643C (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x1402C0BD0 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x140365410 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140365430 (XmClcOp.c)
 *     XmCldOp @ 0x140365440 (XmCldOp.c)
 *     XmCliOp @ 0x140365450 (XmCliOp.c)
 *     XmCmcOp @ 0x140365460 (XmCmcOp.c)
 *     XmSahfOp @ 0x140365480 (XmSahfOp.c)
 *     XmStcOp @ 0x1403654A0 (XmStcOp.c)
 *     XmStdOp @ 0x1403654B0 (XmStdOp.c)
 *     XmStiOp @ 0x1403654C0 (XmStiOp.c)
 *     XmBtOp @ 0x1403654D0 (XmBtOp.c)
 *     XmIretOp @ 0x1403964E0 (XmIretOp.c)
 *     XmDecOp @ 0x140396550 (XmDecOp.c)
 *     XmOrOp @ 0x140396570 (XmOrOp.c)
 *     XmXchgOp @ 0x140396590 (XmXchgOp.c)
 *     XmInOp @ 0x1403965D0 (XmInOp.c)
 *     XmOutOp @ 0x140396620 (XmOutOp.c)
 *     XmIncOp @ 0x140396660 (XmIncOp.c)
 *     XmPortDX @ 0x140396680 (XmPortDX.c)
 *     XmTestOp @ 0x1403966B0 (XmTestOp.c)
 *     XmGroup3General @ 0x1403966D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396770 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403967B0 (XmCallOp.c)
 *     XmRetOp @ 0x140396810 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x140396880 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403968E0 (XmMoveGeneral.c)
 *     XmPushOp @ 0x140396950 (XmPushOp.c)
 *     XmPopOp @ 0x140396970 (XmPopOp.c)
 *     XmSubOp @ 0x140396B90 (XmSubOp.c)
 *     XmMovOp @ 0x140396D50 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x140396DF0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396E40 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396F30 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x140397368 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140397400 (XmLongJump.c)
 *     XmJxxOp @ 0x1403980B0 (XmJxxOp.c)
 *     XmShortJump @ 0x140398110 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403985F0 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403997B0 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x14039A9F0 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403B15F0 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1710 (XmShrOp.c)
 *     XmRolOp @ 0x1403C0230 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C0550 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C0D10 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403C0FA0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C11C0 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403C3620 (XmAddOp.c)
 *     XmPopaOp @ 0x1403C3640 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403C36C0 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403C37A0 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403C3840 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C38A0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4060 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C40A0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C4F10 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C6F90 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C91A0 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C9420 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C9500 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C9810 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C99F0 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x140409800 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404E5240 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404E52A0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404E52D0 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404E5350 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E5390 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5430 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E54B0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5510 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E55C0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E5610 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404E5660 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E56E0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E57B0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E5800 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E5850 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E5890 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E58D0 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E5910 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E5990 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E59F0 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E5A10 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E5A80 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E5AB0 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E5AD0 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E5B10 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E5B60 (XmAadOp.c)
 *     XmAamOp @ 0x1404E5BF0 (XmAamOp.c)
 *     XmAasOp @ 0x1404E5C80 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E5CE0 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E5D30 (XmDasOp.c)
 *     XmRclOp @ 0x1404E5D80 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E5E50 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E5EF0 (XmRorOp.c)
 *     XmSarOp @ 0x1404E5F70 (XmSarOp.c)
 *     XmShldOp @ 0x1404E6050 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E6190 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E62F0 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6320 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E63B0 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E6440 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E64F0 (XmHltOp.c)
 *     XmIntOp @ 0x1404E6510 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E65C0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E6610 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6830 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E68B0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6940 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E69E0 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6A20 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E6A70 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E6AB0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6B00 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6B40 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6B80 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E6BD0 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E6C80 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E6CA0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E6CC0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E6CF0 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6D10 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E6DC0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E6E90 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E6EC0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E6FD0 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v6; // cx

  dword_140CED5A8 = *(_DWORD *)a4;
  dword_140CED5AC = *(_DWORD *)(a4 + 4);
  dword_140CED5B0 = *(_DWORD *)(a4 + 8);
  dword_140CED5B4 = *(_DWORD *)(a4 + 12);
  dword_140CED5BC = *(_DWORD *)(a4 + 16);
  dword_140CED5C0 = *(_DWORD *)(a4 + 20);
  dword_140CED5C4 = *(_DWORD *)(a4 + 24);
  word_140CED5CE = *(_WORD *)(a4 + 28);
  word_140CED5C8 = *(_WORD *)(a4 + 30);
  word_140CED5CA = a2;
  dword_140CED5A4 = a3;
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
