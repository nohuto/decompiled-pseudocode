__int64 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1, unsigned int a2, __int64 a3)
{
  bool HasValidTemplate; // al
  __int64 v7; // rcx
  unsigned int v8; // r9d

  CEffectBrush::TryCreateEffectInstance(a1);
  HasValidTemplate = CEffectBrush::HasValidTemplate(a1);
  v8 = 0;
  if ( HasValidTemplate )
    return (unsigned int)CBrush::OnChanged(v7, a2, a3);
  return v8;
}
