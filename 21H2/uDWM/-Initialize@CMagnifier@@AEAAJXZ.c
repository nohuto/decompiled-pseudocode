/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x18008B758
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x18008B688 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18008BE4C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180013FF8 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180043100 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800BDBB4 (--$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetPro.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800BE7BC (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::Initialize(CMagnifier *this)
{
  CMagnifierRenderTargetProxy **v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  CMatrixTransformProxy *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct _MilMatrix3x2D v11; // [rsp+30h] [rbp-48h] BYREF

  v1 = (CMagnifierRenderTargetProxy **)((char *)this + 24);
  v3 = CCompositor::CreateProxy<CMagnifierRenderTargetProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 24);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CMagnifierRenderTargetProxy *, _QWORD))(*(_QWORD *)*v1 + 8LL))(
           *v1,
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = (CMatrixTransformProxy *)*((_QWORD *)this + 4);
      if ( !v6 )
      {
        v7 = CCompositor::CreateProxy<CMatrixTransformProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               (volatile signed __int32 **)this + 4);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x80u);
          return v4;
        }
        v6 = (CMatrixTransformProxy *)*((_QWORD *)this + 4);
      }
      *(_OWORD *)&v11.S_11 = _xmm;
      *(_OWORD *)&v11.DX = 0LL;
      *(_OWORD *)&v11.S_21 = _xmm;
      v8 = CMatrixTransformProxy::Update(v6, &v11);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = CMagnifierRenderTargetProxy::SetTransform(*v1, *((const struct CMatrixTransformProxy **)this + 4));
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8Du);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7Au);
  }
  return v4;
}
