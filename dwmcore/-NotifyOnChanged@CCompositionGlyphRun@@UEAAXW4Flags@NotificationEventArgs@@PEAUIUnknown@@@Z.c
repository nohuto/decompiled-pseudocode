__int64 __fastcall CCompositionGlyphRun::NotifyOnChanged(CCompositionGlyphRun *a1, unsigned int a2, __int64 a3)
{
  CCompositionGlyphRun::UpdateBrushTransform(a1);
  return CResource::NotifyOnChanged((__int64)a1, a2, a3);
}
