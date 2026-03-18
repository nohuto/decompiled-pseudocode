/*
 * XREFs of ?TryGetBrushSourceNoRef@CMaskBrushMarshaler@DirectComposition@@MEBA_NIPEAPEAVCBrushMarshaler@2@@Z @ 0x1C021C990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::TryGetBrushSourceNoRef(
        DirectComposition::CMaskBrushMarshaler *this,
        unsigned int a2,
        struct DirectComposition::CBrushMarshaler **a3)
{
  struct DirectComposition::CBrushMarshaler *v4; // rax

  if ( a2 < 2 )
  {
    if ( a2 )
      v4 = (struct DirectComposition::CBrushMarshaler *)*((_QWORD *)this + 11);
    else
      v4 = (struct DirectComposition::CBrushMarshaler *)*((_QWORD *)this + 10);
    *a3 = v4;
    return 1;
  }
  else
  {
    *a3 = 0LL;
    return 0;
  }
}
