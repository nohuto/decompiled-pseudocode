/*
 * XREFs of XmSetDataType @ 0x1403B8E88
 * Callers:
 *     XmPortImmediate @ 0x140396920 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140396960 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398A40 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x1403991A0 (XmGroup2By1.c)
 *     XmGroup45General @ 0x14039C7B0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403A4910 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403A8E90 (XmStringOperands.c)
 *     XmGroup3General @ 0x1403B8320 (XmGroup3General.c)
 *     XmPortDX @ 0x1403B8400 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1403B8470 (XmAccumImmediate.c)
 *     XmGroup1General @ 0x1403B8A70 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B8AF0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B8B60 (XmMoveGeneral.c)
 *     XmMoveImmediate @ 0x140533150 (XmMoveImmediate.c)
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
