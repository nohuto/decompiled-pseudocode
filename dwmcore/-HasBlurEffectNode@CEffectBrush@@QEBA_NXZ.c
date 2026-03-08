/*
 * XREFs of ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1801F0CF4
 * Callers:
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18000E6AC (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ @ 0x180228370 (-HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::HasBlurEffectNode(CEffectBrush *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1);
}
