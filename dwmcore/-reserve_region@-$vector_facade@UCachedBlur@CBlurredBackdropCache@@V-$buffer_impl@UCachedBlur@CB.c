/*
 * XREFs of ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1800396F8
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180039610 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x1800397F4 (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180260924 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180260A20 (--$uninitialized_move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_ar.c)
 *     ??0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z @ 0x180260B04 (--0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z.c)
 */

char *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
        CBlurredBackdropCache::CachedBlur **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  CBlurredBackdropCache::CachedBlur *v4; // rdx
  __int64 v6; // rcx
  CBlurredBackdropCache::CachedBlur *v7; // rdi
  signed __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  CBlurredBackdropCache::CachedBlur *v18; // rax
  CBlurredBackdropCache::CachedBlur *v19; // r8
  CBlurredBackdropCache::CachedBlur *v20; // rdx
  CBlurredBackdropCache::CachedBlur *v21; // rbx
  CBlurredBackdropCache::CachedBlur *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rsi
  CBlurredBackdropCache::CachedBlur *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-60h]
  signed __int64 v28; // [rsp+30h] [rbp-58h]
  _BYTE v29[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+18h]

  v2 = (__int64)a1[1];
  v4 = a1[2];
  v6 = 1LL;
  if ( !(0xF0F0F0F0F0F0F0F1uLL * (((__int64)v4 - v2) >> 3)) )
  {
    v15 = 0xF0F0F0F0F0F0F0F1uLL * ((v2 - (__int64)*a1) >> 3);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v6,
            0xF0F0F0F0F0F0F0F1uLL * ((v4 - *a1) >> 3),
            v16);
    v18 = (CBlurredBackdropCache::CachedBlur *)operator new(saturated_mul(v17, 0x88uLL));
    v19 = a1[1];
    v20 = *a1;
    v26 = v18;
    v28 = 0LL;
    v21 = v18;
    v27 = v15;
    ((void (__fastcall *)(_BYTE *, CBlurredBackdropCache::CachedBlur *, CBlurredBackdropCache::CachedBlur *, CBlurredBackdropCache::CachedBlur **))std::uninitialized_move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
      v29,
      v20,
      v19,
      &v26);
    detail::destruct_range<CBlurredBackdropCache::CachedBlur>(*a1);
    v22 = *a1;
    v23 = *a1 == (CBlurredBackdropCache::CachedBlur *)(a1 + 3);
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v2 = (__int64)*a1 + 136 * v15;
    a1[1] = (CBlurredBackdropCache::CachedBlur *)v2;
    a1[2] = (CBlurredBackdropCache::CachedBlur *)((char *)*a1 + 136 * v17);
  }
  v7 = *a1;
  v8 = 0xF0F0F0F0F0F0F0F1uLL * ((v2 - (__int64)*a1) >> 3);
  v9 = v8 - a2;
  v10 = (__int64)*a1 + 8 * ((v2 - (__int64)*a1) >> 3);
  if ( !v10 )
    goto LABEL_18;
  v11 = 0xF0F0F0F0F0F0F0F1uLL * ((v2 - (__int64)*a1) >> 3) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v12 = v2 - 136 * v11;
  if ( v2 != v12 )
  {
    v24 = 0LL;
    v25 = v2 - 136;
    v30 = 0LL;
    while ( 1 )
    {
      CBlurredBackdropCache::CachedBlur::CachedBlur(v10 + 136 * v24, v25);
      if ( v25 == v12 )
        break;
      v25 -= 136LL;
      if ( v30 )
      {
        v24 = v30 - 1;
        v30 = v24;
        if ( !v24 )
          continue;
      }
      goto LABEL_18;
    }
  }
  if ( v9 > 1 )
  {
    if ( !v8 || v7 && v8 >= 0 )
    {
      v13 = 136 * a2;
      v26 = v7;
      v27 = v8;
      v28 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, CBlurredBackdropCache::CachedBlur **))std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
        v29,
        (char *)v7 + 136 * a2,
        (char *)v7 + 136 * v8 - 136,
        &v26);
      goto LABEL_8;
    }
LABEL_18:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 136 * a2;
LABEL_8:
  detail::destruct_range<CBlurredBackdropCache::CachedBlur>((CBlurredBackdropCache::CachedBlur *)((char *)v7 + v13));
  a1[1] = (CBlurredBackdropCache::CachedBlur *)((char *)a1[1] + 136);
  return (char *)v7 + v13;
}
