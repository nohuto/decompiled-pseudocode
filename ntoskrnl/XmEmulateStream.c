/*
 * XREFs of XmEmulateStream @ 0x1403B8550
 * Callers:
 *     XmEmulateInterrupt @ 0x1403B84AC (XmEmulateInterrupt.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     XmOpcodeEscape @ 0x14036DC90 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x14036DCB0 (XmClcOp.c)
 *     XmCldOp @ 0x14036DCC0 (XmCldOp.c)
 *     XmCliOp @ 0x14036DCD0 (XmCliOp.c)
 *     XmCmcOp @ 0x14036DCE0 (XmCmcOp.c)
 *     XmSahfOp @ 0x14036DD00 (XmSahfOp.c)
 *     XmStcOp @ 0x14036DD20 (XmStcOp.c)
 *     XmStdOp @ 0x14036DD30 (XmStdOp.c)
 *     XmStiOp @ 0x14036DD40 (XmStiOp.c)
 *     XmBtOp @ 0x14036DD50 (XmBtOp.c)
 *     XmPortImmediate @ 0x140394750 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140394790 (XmGroup2ByByte.c)
 *     XmLoopOp @ 0x140394880 (XmLoopOp.c)
 *     XmRolOp @ 0x140394F40 (XmRolOp.c)
 *     XmGroup2ByCL @ 0x140394FE0 (XmGroup2ByCL.c)
 *     XmStosOp @ 0x1403954B0 (XmStosOp.c)
 *     XmGroup2By1 @ 0x140395740 (XmGroup2By1.c)
 *     XmRorOp @ 0x1403957A0 (XmRorOp.c)
 *     XmAccumRegister @ 0x1403968E0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x140397C40 (XmMoveXxGeneral.c)
 *     XmAddOp @ 0x140397CF0 (XmAddOp.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmMulOp @ 0x14039A370 (XmMulOp.c)
 *     XmPushPopSegment @ 0x14039A410 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039A450 (XmPopaOp.c)
 *     XmPushaOp @ 0x14039BBF0 (XmPushaOp.c)
 *     XmNotOp @ 0x14039D4A0 (XmNotOp.c)
 *     XmXorOp @ 0x14039ED00 (XmXorOp.c)
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x14039F940 (XmFlagsRegister.c)
 *     XmDivOp @ 0x1403A0290 (XmDivOp.c)
 *     XmStringOperands @ 0x1403A4080 (XmStringOperands.c)
 *     XmMoveSegment @ 0x1403A5480 (XmMoveSegment.c)
 *     XmSubOp @ 0x1403AAAD0 (XmSubOp.c)
 *     XmShlOp @ 0x1403B1970 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1A90 (XmShrOp.c)
 *     XmIretOp @ 0x1403B3570 (XmIretOp.c)
 *     XmDecOp @ 0x1403B35E0 (XmDecOp.c)
 *     XmIncOp @ 0x1403B3600 (XmIncOp.c)
 *     XmOrOp @ 0x1403B3620 (XmOrOp.c)
 *     XmTestOp @ 0x1403B3640 (XmTestOp.c)
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmXchgOp @ 0x1403B3700 (XmXchgOp.c)
 *     XmPortDX @ 0x1403B3740 (XmPortDX.c)
 *     XmOutOp @ 0x1403B3770 (XmOutOp.c)
 *     XmAccumImmediate @ 0x1403B37B0 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403B37F0 (XmCallOp.c)
 *     XmRetOp @ 0x1403B3850 (XmRetOp.c)
 *     XmInOp @ 0x1403B38C0 (XmInOp.c)
 *     XmMoveRegImmediate @ 0x1403B3910 (XmMoveRegImmediate.c)
 *     XmPushOp @ 0x1403B3D10 (XmPushOp.c)
 *     XmPopOp @ 0x1403B3D30 (XmPopOp.c)
 *     XmOpcodeRegister @ 0x1403B3D60 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B3DB0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B3E30 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B3EA0 (XmMoveGeneral.c)
 *     XmMovOp @ 0x1403B42D0 (XmMovOp.c)
 *     XmLongJump @ 0x1403B4310 (XmLongJump.c)
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     XmJxxOp @ 0x1403BAA80 (XmJxxOp.c)
 *     XmShortJump @ 0x1403BB530 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403BBB10 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403BD570 (XmJmpOp.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x140422480 (_setjmp.c)
 *     XmBitScanGeneral @ 0x140530740 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x1405307A0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x1405307D0 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x140530850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140530900 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140530980 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405309E0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140530A90 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140530AE0 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x140530B30 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x140530C80 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x140530CD0 (XmPopGeneral.c)
 *     XmPushImmediate @ 0x140530D20 (XmPushImmediate.c)
 *     XmSetccByte @ 0x140530D60 (XmSetccByte.c)
 *     XmShiftDouble @ 0x140530DA0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140530E20 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x140530E80 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x140530EA0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x140530F10 (XmNegOp.c)
 *     XmSbbOp @ 0x140530F40 (XmSbbOp.c)
 *     XmXaddOp @ 0x140530F60 (XmXaddOp.c)
 *     XmAaaOp @ 0x140530FA0 (XmAaaOp.c)
 *     XmAadOp @ 0x140530FF0 (XmAadOp.c)
 *     XmAamOp @ 0x140531080 (XmAamOp.c)
 *     XmAasOp @ 0x140531120 (XmAasOp.c)
 *     XmDaaOp @ 0x140531180 (XmDaaOp.c)
 *     XmDasOp @ 0x1405311D0 (XmDasOp.c)
 *     XmRclOp @ 0x140531220 (XmRclOp.c)
 *     XmRcrOp @ 0x1405312E0 (XmRcrOp.c)
 *     XmSarOp @ 0x140531380 (XmSarOp.c)
 *     XmShldOp @ 0x140531460 (XmShldOp.c)
 *     XmShrdOp @ 0x1405315A0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140531700 (XmLahfOp.c)
 *     XmInsOp @ 0x140531730 (XmInsOp.c)
 *     XmOutsOp @ 0x1405317C0 (XmOutsOp.c)
 *     XmEnterOp @ 0x140531850 (XmEnterOp.c)
 *     XmHltOp @ 0x140531900 (XmHltOp.c)
 *     XmIntOp @ 0x140531920 (XmIntOp.c)
 *     XmLeaveOp @ 0x1405319D0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x140531A20 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140531C40 (XmLodsOp.c)
 *     XmMovsOp @ 0x140531CC0 (XmMovsOp.c)
 *     XmScasOp @ 0x140531D50 (XmScasOp.c)
 *     XmBsfOp @ 0x140531DF0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140531E30 (XmBsrOp.c)
 *     XmBtcOp @ 0x140531E80 (XmBtcOp.c)
 *     XmBtrOp @ 0x140531EC0 (XmBtrOp.c)
 *     XmBtsOp @ 0x140531F10 (XmBtsOp.c)
 *     XmCbwOp @ 0x140531F50 (XmCbwOp.c)
 *     XmCwdOp @ 0x140531F90 (XmCwdOp.c)
 *     XmBoundOp @ 0x140531FE0 (XmBoundOp.c)
 *     XmBswapOp @ 0x140532090 (XmBswapOp.c)
 *     XmIllOp @ 0x1405320B0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1405320D0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x140532100 (XmSmswOp.c)
 *     XmImulOp @ 0x140532120 (XmImulOp.c)
 *     XmImulxOp @ 0x1405321D0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1405322A0 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1405322D0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140532400 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx

  dword_140D17418 = *(_DWORD *)a4;
  dword_140D1741C = *(_DWORD *)(a4 + 4);
  dword_140D17420 = *(_DWORD *)(a4 + 8);
  dword_140D17424 = *(_DWORD *)(a4 + 12);
  dword_140D1742C = *(_DWORD *)(a4 + 16);
  dword_140D17430 = *(_DWORD *)(a4 + 20);
  dword_140D17434 = *(_DWORD *)(a4 + 24);
  word_140D1743E = *(_WORD *)(a4 + 28);
  word_140D17438 = *(_WORD *)(a4 + 30);
  word_140D1743A = a2;
  dword_140D17414 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      v5 = *((_DWORD *)&XmContext + 5);
      if ( v5 > *((unsigned __int16 *)&XmContext + 35) )
        longjmp((_JBTYPE *)&XmContext + 10, 14);
      *((_WORD *)&XmContext + 10) = v5 + 1;
      v6 = *(unsigned __int8 *)x86BiosTranslateAddress(*((unsigned __int16 *)&XmContext + 29), (unsigned __int16)v5);
      *((_DWORD *)&XmContext + 28) = v6;
      LOWORD(v6) = *(_WORD *)(XmContext + 2 * v6);
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
