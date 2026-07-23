/*
 * XREFs of XmSetDataType @ 0x140397518
 * Callers:
 *     XmPortDX @ 0x1403967D0 (XmPortDX.c)
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403968C0 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x140396A30 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140396F90 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140397080 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C13D0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C15F0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403C3C70 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403C96A0 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x1404E59F0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1404E5A90 (XmPortImmediate.c)
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
