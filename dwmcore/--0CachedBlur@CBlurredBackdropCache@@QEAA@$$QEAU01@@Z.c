/*
 * XREFs of ??0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z @ 0x180260B04
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1800396F8 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180260A20 (--$uninitialized_move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_ar.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180035AF0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall CBlurredBackdropCache::CachedBlur::CachedBlur(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  EffectInput::EffectInput((EffectInput *)(a1 + 32), (const struct EffectInput *)(a2 + 32));
  return a1;
}
