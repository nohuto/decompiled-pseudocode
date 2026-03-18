/*
 * XREFs of ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1802199BC
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D4794 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BD3AC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

__int64 __fastcall CCompositionLight::UpdateSceneLightInfo(CCompositionLight *this, const struct CDrawingContext *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(CCompositionLight *, const struct CDrawingContext *))(*(_QWORD *)this + 296LL))(
         this,
         a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_BYTE *)this + 252) )
    {
      CSceneResourceManager::RegisterSceneListener(
        *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
        (CCompositionLight *)((char *)this + 80));
      *((_BYTE *)this + 252) = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
