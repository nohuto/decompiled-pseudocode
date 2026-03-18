/*
 * XREFs of XmSetSourceValue @ 0x1403B8E60
 * Callers:
 *     XmStosOp @ 0x140398F10 (XmStosOp.c)
 *     XmAccumRegister @ 0x14039A4E0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039B840 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x14039C7B0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039ECB0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403A06A0 (XmPushaOp.c)
 *     XmSegmentOffset @ 0x1403A4910 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A4F20 (XmFlagsRegister.c)
 *     XmMoveSegment @ 0x1403AA280 (XmMoveSegment.c)
 *     XmGroup3General @ 0x1403B8320 (XmGroup3General.c)
 *     XmOutOp @ 0x1403B8430 (XmOutOp.c)
 *     XmOpcodeRegister @ 0x1403B8A20 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B8A70 (XmGroup1General.c)
 *     XmMoveGeneral @ 0x1403B8B60 (XmMoveGeneral.c)
 *     XmPopStack @ 0x1403B8E14 (XmPopStack.c)
 *     XmBitScanGeneral @ 0x140532C10 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x140532D20 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140532DD0 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x140533080 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x140533270 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405332F0 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x140533C90 (XmOutsOp.c)
 *     XmCmpsOp @ 0x140533EF0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140534110 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534190 (XmMovsOp.c)
 *     XmScasOp @ 0x140534220 (XmScasOp.c)
 *     XmBoundOp @ 0x1405344B0 (XmBoundOp.c)
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
