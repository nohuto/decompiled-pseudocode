/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18024A310
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026A9A4 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FD62C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEB28 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18024AB9C (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024AE2C (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B6028 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  struct CRadialGradientEffect *v3; // rbx
  bool IsCenteredGradient; // al
  int v6; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *v9; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRadialGradientEffect *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = (struct CRadialGradientEffect *)*((_QWORD *)this + 29);
  if ( v3 )
  {
    CMILRefCountImpl::AddReference((struct CRadialGradientEffect *)((char *)v3 + 8));
  }
  else
  {
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(&v11);
    IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
    v6 = CRadialGradientEffect::Create(IsCenteredGradient, &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x120,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>((volatile signed __int32 **)&v11);
      return v7;
    }
    v3 = v11;
    v9 = (volatile signed __int32 *)*((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = v11;
    if ( v3 )
      CMILRefCountImpl::AddReference((struct CRadialGradientEffect *)((char *)v3 + 8));
    if ( v9 )
      CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v9);
  }
  *a2 = v3;
  return 0LL;
}
