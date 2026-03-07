EffectInput *__fastcall std::_Uninitialized_copy<EffectInput *>(
        struct EffectInput *a1,
        const struct EffectInput *a2,
        EffectInput *a3)
{
  const struct EffectInput *i; // rdi

  for ( i = a1; i != a2; i = (const struct EffectInput *)((char *)i + 104) )
  {
    EffectInput::EffectInput(a3, i);
    a3 = (EffectInput *)((char *)a3 + 104);
  }
  std::_Destroy_range<std::allocator<EffectInput>>(a3, a3);
  return a3;
}
