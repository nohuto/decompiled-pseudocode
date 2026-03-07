__int64 __fastcall CCommonRenderingEffect::GetEffectTypeWithAttributes(__int64 a1)
{
  return *(_BYTE *)(a1 + 70) != 0 ? 65537 : 1;
}
