/*
 * XREFs of XmSetSourceValue @ 0x140396808
 * Callers:
 *     XmOutOp @ 0x140395F20 (XmOutOp.c)
 *     XmGroup3General @ 0x140395FD0 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x1403961E0 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x1403966F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396740 (XmGroup1General.c)
 *     XmPopStack @ 0x1403967BC (XmPopStack.c)
 *     XmStosOp @ 0x1403C0970 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403C3320 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403C3500 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3CC0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C3D00 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C4B70 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C8B70 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C9320 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E5180 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404E5290 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E52D0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5370 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E5620 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E5850 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E58D0 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E62F0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E6550 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6770 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E67F0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6880 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E6B10 (XmBoundOp.c)
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
