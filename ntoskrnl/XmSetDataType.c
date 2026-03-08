/*
 * XREFs of XmSetDataType @ 0x1403B41C8
 * Callers:
 *     XmPortImmediate @ 0x140394750 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140394790 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140394FE0 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140395740 (XmGroup2By1.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403A4080 (XmStringOperands.c)
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmPortDX @ 0x1403B3740 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1403B37B0 (XmAccumImmediate.c)
 *     XmGroup1General @ 0x1403B3DB0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B3E30 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B3EA0 (XmMoveGeneral.c)
 *     XmMoveImmediate @ 0x140530C80 (XmMoveImmediate.c)
 * Callees:
 *     <none>
 */

char __fastcall XmSetDataType(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
