/*
 * XREFs of ?TryGetBrushSourceNoRef@CEffectBrushMarshaler@DirectComposition@@MEBA_NIPEAPEAVCBrushMarshaler@2@@Z @ 0x1C00C21D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::TryGetBrushSourceNoRef(
        DirectComposition::CEffectBrushMarshaler *this,
        unsigned int a2,
        struct DirectComposition::CBrushMarshaler **a3)
{
  __int64 v3; // r9
  bool result; // al

  v3 = *((_QWORD *)this + 11);
  if ( v3 && a2 < *((_DWORD *)this + 24) )
  {
    result = 1;
    *a3 = *(struct DirectComposition::CBrushMarshaler **)(v3 + 8LL * a2);
  }
  else
  {
    *a3 = 0LL;
    return 0;
  }
  return result;
}
