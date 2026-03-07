__int64 __fastcall std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = 0xF0F0F0F0F0F0F0FLL * ((a3 - a2) >> 3);
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
  v10 = *a4 + 136LL * *v5;
  while ( a2 != v7 )
  {
    v10 -= 136LL;
    v7 -= 136LL;
    *(_QWORD *)v10 = *(_QWORD *)v7;
    *(_OWORD *)(v10 + 8) = *(_OWORD *)(v7 + 8);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v7 + 24);
    EffectInput::operator=(v10 + 32, v7 + 32);
  }
  result = a1;
  *v5 = 0xF0F0F0F0F0F0F0F1uLL * ((v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
