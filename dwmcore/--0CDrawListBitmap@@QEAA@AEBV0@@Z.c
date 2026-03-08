/*
 * XREFs of ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800927A0
 * Callers:
 *     ??$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800939E0 (--$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV-$sp.c)
 *     ??$CreateRenderingEffectWorker@VCProjectedShadowRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1801FE2C0 (--$CreateRenderingEffectWorker@VCProjectedShadowRenderingEffect@@@CCommonRenderingEffectFactory@.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1802B4E54 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 * Callees:
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, const struct CDrawListBitmap *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  return this;
}
