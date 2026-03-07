__int64 __fastcall CBlurredBackdropCache::CachedBlur::CachedBlur(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  EffectInput::EffectInput((EffectInput *)(a1 + 32), (const struct EffectInput *)(a2 + 32));
  return a1;
}
