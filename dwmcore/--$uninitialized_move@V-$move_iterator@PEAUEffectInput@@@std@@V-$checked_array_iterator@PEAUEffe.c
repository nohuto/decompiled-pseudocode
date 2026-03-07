__int64 __fastcall std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        const struct EffectInput *a2,
        const struct EffectInput *a3,
        _QWORD *a4)
{
  const struct EffectInput *v4; // rbx
  _QWORD *v5; // r14
  __int64 v8; // rdx
  EffectInput *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = (EffectInput *)(*a4 + 104LL * *v5);
  while ( v4 != a3 )
  {
    EffectInput::EffectInput(v10, v4);
    v10 = (EffectInput *)((char *)v10 + 104);
    v4 = (const struct EffectInput *)((char *)v4 + 104);
  }
  result = a1;
  *v5 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
