EffectStage *__fastcall EffectStage::EffectStage(EffectStage *this)
{
  EffectInput *v1; // rdi
  __int64 v3; // rsi

  *(_DWORD *)this = 0;
  v1 = (EffectStage *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  v3 = 4LL;
  do
  {
    EffectInput::EffectInput(v1);
    v1 = (EffectInput *)((char *)v1 + 104);
    --v3;
  }
  while ( v3 );
  return this;
}
