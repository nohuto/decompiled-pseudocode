/*
 * XREFs of XmSetDataType @ 0x1403973C8
 * Callers:
 *     XmPortDX @ 0x140396680 (XmPortDX.c)
 *     XmGroup3General @ 0x1403966D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396770 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x1403968E0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140396E40 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396F30 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0FA0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C11C0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403C3840 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C38A0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C91A0 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C9500 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E57B0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E5850 (XmPortImmediate.c)
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
