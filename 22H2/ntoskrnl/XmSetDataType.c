/*
 * XREFs of XmSetDataType @ 0x140396CC8
 * Callers:
 *     XmPortDX @ 0x140395F80 (XmPortDX.c)
 *     XmGroup3General @ 0x140395FD0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396070 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x1403961E0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140396740 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396830 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0C00 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0E20 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403C34A0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3500 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C8B70 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C8E30 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E56F0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E5790 (XmPortImmediate.c)
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
