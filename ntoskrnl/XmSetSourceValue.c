/*
 * XREFs of XmSetSourceValue @ 0x1403B41A0
 * Callers:
 *     XmStosOp @ 0x1403954B0 (XmStosOp.c)
 *     XmAccumRegister @ 0x1403968E0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x140397C40 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039A410 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x14039BBF0 (XmPushaOp.c)
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x14039F940 (XmFlagsRegister.c)
 *     XmMoveSegment @ 0x1403A5480 (XmMoveSegment.c)
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmOutOp @ 0x1403B3770 (XmOutOp.c)
 *     XmOpcodeRegister @ 0x1403B3D60 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B3DB0 (XmGroup1General.c)
 *     XmMoveGeneral @ 0x1403B3EA0 (XmMoveGeneral.c)
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
 *     XmBitScanGeneral @ 0x140530740 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x140530850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140530900 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x140530DA0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140530E20 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1405317C0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x140531A20 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140531C40 (XmLodsOp.c)
 *     XmMovsOp @ 0x140531CC0 (XmMovsOp.c)
 *     XmScasOp @ 0x140531D50 (XmScasOp.c)
 *     XmBoundOp @ 0x140531FE0 (XmBoundOp.c)
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
