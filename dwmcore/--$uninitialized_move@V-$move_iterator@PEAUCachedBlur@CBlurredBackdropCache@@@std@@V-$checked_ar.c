/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180260A20
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1800396F8 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     ??0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z @ 0x180260B04 (--0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  signed __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = 0xF0F0F0F0F0F0F0F1uLL * ((a3 - a2) >> 3);
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
  while ( v4 != a3 )
  {
    CBlurredBackdropCache::CachedBlur::CachedBlur(v10, v4);
    v10 += 136LL;
    v4 += 136LL;
  }
  result = a1;
  *v5 = 0xF0F0F0F0F0F0F0F1uLL * ((v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
