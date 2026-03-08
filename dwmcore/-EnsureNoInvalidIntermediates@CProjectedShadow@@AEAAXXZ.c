/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x180246068
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180247EC4 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::EnsureNoInvalidIntermediates(CProjectedShadow *this)
{
  int (__fastcall ***v2)(_QWORD); // rcx
  int (__fastcall ***v3)(_QWORD); // rcx
  int (__fastcall ***v4)(_QWORD); // rcx
  int (__fastcall ***v5)(_QWORD); // rcx
  int (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // rcx
  int (__fastcall ***v8)(_QWORD); // rcx

  if ( *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
  {
    v2 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate
                                                           + 8LL)
                                               + 8LL)
                                      + *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate
                                      + 8LL);
    if ( (**v2)(v2) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate);
  }
  if ( CProjectedShadow::s_cpHalfBlurAsset )
  {
    v3 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cpHalfBlurAsset
                                      + *(int *)(*((_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 1) + 8LL)
                                      + 8);
    if ( (**v3)(v3) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset);
  }
  if ( CProjectedShadow::s_cp1xBlurAsset )
  {
    v4 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cp1xBlurAsset
                                      + *(int *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 8LL)
                                      + 8);
    if ( (**v4)(v4) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
  }
  if ( CProjectedShadow::s_cp2xBlurAsset )
  {
    v5 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cp2xBlurAsset
                                      + *(int *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 8LL)
                                      + 8);
    if ( (**v5)(v5) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
  }
  if ( CProjectedShadow::s_cpMaskForBlur )
  {
    v6 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(CProjectedShadow::s_cpMaskForBlur + 8) + 8LL)
                                      + CProjectedShadow::s_cpMaskForBlur
                                      + 8);
    if ( (**v6)(v6) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cpMaskForBlur);
  }
  v7 = *((_QWORD *)this + 46);
  if ( v7 )
  {
    v8 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v7 + 8) + 8LL) + v7 + 8);
    if ( (**v8)(v8) < 0 )
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 46);
  }
}
