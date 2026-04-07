/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008B9C4
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18008BBDC (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x180057E4E (memcmp_0.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x1800BD46C (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BE350 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800BE4E4 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  const struct CColorTransformResourceProxy **v7; // r14
  CColorTransformResourceProxy *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = 0;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xAAu);
      return v3;
    }
    *(_OWORD *)((char *)this + 68) = g_MilColorTransfIdentity;
    *(_OWORD *)((char *)this + 84) = xmmword_1800D3190;
    *(_OWORD *)((char *)this + 100) = xmmword_1800D31A0;
    *(_OWORD *)((char *)this + 116) = xmmword_1800D31B0;
    *(_OWORD *)((char *)this + 132) = xmmword_1800D31C0;
    *(_OWORD *)((char *)this + 148) = xmmword_1800D31D0;
    v6 = 1065353216;
    goto LABEL_16;
  }
  if ( memcmp_0((char *)this + 68, a2, 0x64uLL) )
  {
    v7 = (const struct CColorTransformResourceProxy **)((char *)this + 40);
    v8 = (CColorTransformResourceProxy *)*((_QWORD *)this + 5);
    if ( !v8 )
    {
      v9 = CCompositor::CreateProxy<CColorTransformResourceProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             (char *)this + 40);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
        return v3;
      }
      v8 = *v7;
    }
    v10 = CColorTransformResourceProxy::Update(v8, a2);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v11 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), *v7);
      v3 = v11;
      if ( v11 >= 0 )
      {
        *(_OWORD *)((char *)this + 68) = *(_OWORD *)a2;
        *(_OWORD *)((char *)this + 84) = *((_OWORD *)a2 + 1);
        *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 2);
        *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 3);
        *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 4);
        *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 5);
        v6 = *((_DWORD *)a2 + 24);
LABEL_16:
        *((_DWORD *)this + 41) = v6;
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xBAu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB8u);
    }
  }
  return v3;
}
