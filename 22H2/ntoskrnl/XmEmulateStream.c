/*
 * XREFs of XmEmulateStream @ 0x140396B08
 * Callers:
 *     XmEmulateInterrupt @ 0x140395D3C (XmEmulateInterrupt.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x140299B00 (MiCreateSystemWsles.c)
 *     XmOpcodeEscape @ 0x140364D60 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140364D80 (XmClcOp.c)
 *     XmCldOp @ 0x140364D90 (XmCldOp.c)
 *     XmCliOp @ 0x140364DA0 (XmCliOp.c)
 *     XmCmcOp @ 0x140364DB0 (XmCmcOp.c)
 *     XmSahfOp @ 0x140364DD0 (XmSahfOp.c)
 *     XmStcOp @ 0x140364DF0 (XmStcOp.c)
 *     XmStdOp @ 0x140364E00 (XmStdOp.c)
 *     XmStiOp @ 0x140364E10 (XmStiOp.c)
 *     XmBtOp @ 0x140364E20 (XmBtOp.c)
 *     XmIretOp @ 0x140395DE0 (XmIretOp.c)
 *     XmDecOp @ 0x140395E50 (XmDecOp.c)
 *     XmOrOp @ 0x140395E70 (XmOrOp.c)
 *     XmXchgOp @ 0x140395E90 (XmXchgOp.c)
 *     XmInOp @ 0x140395ED0 (XmInOp.c)
 *     XmOutOp @ 0x140395F20 (XmOutOp.c)
 *     XmIncOp @ 0x140395F60 (XmIncOp.c)
 *     XmPortDX @ 0x140395F80 (XmPortDX.c)
 *     XmTestOp @ 0x140395FB0 (XmTestOp.c)
 *     XmGroup3General @ 0x140395FD0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396070 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403960B0 (XmCallOp.c)
 *     XmRetOp @ 0x140396110 (XmRetOp.c)
 *     XmMoveRegImmediate @ 0x140396180 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403961E0 (XmMoveGeneral.c)
 *     XmPushOp @ 0x140396250 (XmPushOp.c)
 *     XmPopOp @ 0x140396270 (XmPopOp.c)
 *     XmSubOp @ 0x140396490 (XmSubOp.c)
 *     XmMovOp @ 0x140396650 (XmMovOp.c)
 *     XmOpcodeRegister @ 0x1403966F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396740 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396830 (XmGroup1Immediate.c)
 *     XmGetCodeByte @ 0x140396C68 (XmGetCodeByte.c)
 *     XmLongJump @ 0x140396D00 (XmLongJump.c)
 *     XmJxxOp @ 0x1403979B0 (XmJxxOp.c)
 *     XmShortJump @ 0x140397A10 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x140397EF0 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403990B0 (XmJmpOp.c)
 *     xHalTimerWatchdogStop @ 0x14039A2F0 (xHalTimerWatchdogStop.c)
 *     XmShlOp @ 0x1403AC410 (XmShlOp.c)
 *     XmShrOp @ 0x1403AC530 (XmShrOp.c)
 *     XmRolOp @ 0x1403BFE90 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C01B0 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C0970 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403C0C00 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0E20 (XmGroup2ByByte.c)
 *     XmAddOp @ 0x1403C3280 (XmAddOp.c)
 *     XmPopaOp @ 0x1403C32A0 (XmPopaOp.c)
 *     XmMoveXxGeneral @ 0x1403C3320 (XmMoveXxGeneral.c)
 *     XmMulOp @ 0x1403C3400 (XmMulOp.c)
 *     XmGroup2ByCL @ 0x1403C34A0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3500 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3CC0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C3D00 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C4B70 (XmAccumRegister.c)
 *     XmXorOp @ 0x1403C6960 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403C8B70 (XmSegmentOffset.c)
 *     XmDivOp @ 0x1403C8D50 (XmDivOp.c)
 *     XmStringOperands @ 0x1403C8E30 (XmStringOperands.c)
 *     XmNotOp @ 0x1403C9140 (XmNotOp.c)
 *     XmMoveSegment @ 0x1403C9320 (XmMoveSegment.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x140408E80 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1404E5180 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1404E51E0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1404E5210 (XmEffectiveOffset.c)
 *     XmFlagsRegister @ 0x1404E5290 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E52D0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5370 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E53F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5450 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E5500 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E5550 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1404E55A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E5620 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E56F0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E5740 (XmPopGeneral.c)
 *     XmPortImmediate @ 0x1404E5790 (XmPortImmediate.c)
 *     XmPushImmediate @ 0x1404E57D0 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1404E5810 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E5850 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E58D0 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1404E5930 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1404E5950 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1404E59C0 (XmNegOp.c)
 *     XmSbbOp @ 0x1404E59F0 (XmSbbOp.c)
 *     XmXaddOp @ 0x1404E5A10 (XmXaddOp.c)
 *     XmAaaOp @ 0x1404E5A50 (XmAaaOp.c)
 *     XmAadOp @ 0x1404E5AA0 (XmAadOp.c)
 *     XmAamOp @ 0x1404E5B30 (XmAamOp.c)
 *     XmAasOp @ 0x1404E5BC0 (XmAasOp.c)
 *     XmDaaOp @ 0x1404E5C20 (XmDaaOp.c)
 *     XmDasOp @ 0x1404E5C70 (XmDasOp.c)
 *     XmRclOp @ 0x1404E5CC0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E5D90 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E5E30 (XmRorOp.c)
 *     XmSarOp @ 0x1404E5EB0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E5F90 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E60D0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E6230 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6260 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E62F0 (XmOutsOp.c)
 *     XmEnterOp @ 0x1404E6380 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E6430 (XmHltOp.c)
 *     XmIntOp @ 0x1404E6450 (XmIntOp.c)
 *     XmLeaveOp @ 0x1404E6500 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x1404E6550 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6770 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E67F0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6880 (XmScasOp.c)
 *     XmBsfOp @ 0x1404E6920 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6960 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E69B0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E69F0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6A40 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6A80 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6AC0 (XmCwdOp.c)
 *     XmBoundOp @ 0x1404E6B10 (XmBoundOp.c)
 *     XmBswapOp @ 0x1404E6BC0 (XmBswapOp.c)
 *     XmIllOp @ 0x1404E6BE0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1404E6C00 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1404E6C30 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6C50 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E6D00 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1404E6DD0 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1404E6E00 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E6F10 (XmSxxOp.c)
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
