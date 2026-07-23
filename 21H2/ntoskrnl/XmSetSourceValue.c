/*
 * XREFs of XmSetSourceValue @ 0x140397058
 * Callers:
 *     XmOutOp @ 0x140396770 (XmOutOp.c)
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x140396A30 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x140396F40 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396F90 (XmGroup1General.c)
 *     XmPopStack @ 0x14039700C (XmPopStack.c)
 *     XmStosOp @ 0x1403C1140 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403C3AF0 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4490 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C44D0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C5340 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C9B90 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E5480 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404E5590 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E55D0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5670 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E5B50 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E5BD0 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E65F0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E6850 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6A70 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E6AF0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6B80 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E6E10 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
