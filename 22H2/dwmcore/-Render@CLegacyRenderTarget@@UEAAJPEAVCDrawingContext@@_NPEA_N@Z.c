/*
 * XREFs of ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EC91C
 * Callers:
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE720 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F5020 (-Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800245F0 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800247D0 (-IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x18002FC98 (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A778 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x18008F460 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008FC84 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180091458 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800C37FC (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?GetDeviceClipBox@CLegacyRenderTarget@@UEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C7E50 (-GetDeviceClipBox@CLegacyRenderTarget@@UEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801846F0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018489C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180184BC8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  int v4; // ebx
  char v5; // di
  bool *v6; // r12
  __int64 v9; // r15
  const struct CDirtyRegion *DirtyRegion; // rax
  CComposeTop *v11; // r15
  const struct CDirtyRegion *v12; // r14
  char v13; // r13
  __int64 v14; // r14
  char v15; // bl
  struct IDeviceTarget *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  CSuperWetInkManager *v29; // rdi
  _DWORD *DeviceClipBox; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD); // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  bool v37; // [rsp+30h] [rbp-58h] BYREF
  bool *v38; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  v38 = a4;
  v5 = 0;
  *a4 = 0;
  v6 = a4;
  if ( !*((_QWORD *)this - 2313) )
    goto LABEL_46;
  v9 = *((_QWORD *)this - 2311);
  if ( !v9 || !a3 && *((_BYTE *)this - 74) )
    goto LABEL_46;
  DirtyRegion = CDesktopTree::GetDirtyRegion(*((CDesktopTree **)this - 2311));
  v11 = *(CComposeTop **)(v9 + 5912);
  v12 = DirtyRegion;
  if ( v11 && CComposeTop::HasNewContent(v11) )
    LOBYTE(v4) = 1;
  v13 = 0;
  v37 = 0;
  if ( (_BYTE)v4 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 2313) + 24LL))(*((_QWORD *)this - 2313));
  if ( v12 || (_BYTE)v4 )
  {
    v15 = *((_BYTE *)this - 7159);
    v16 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 2313))(*((_QWORD *)this - 2313));
    v17 = CDrawingContext::BeginFrame(
            a2,
            v16,
            (CLegacyRenderTarget *)((char *)this + (v15 != 0 ? -18332LL : -18400LL)),
            (const struct _D3DCOLORVALUE *)((char *)this - 18552),
            (CLegacyRenderTarget *)((char *)this - 18192));
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xD1u, 0LL);
      goto LABEL_42;
    }
    v5 = 1;
    if ( v12 )
    {
      v19 = CLegacyRenderTarget::RenderDirtyRegion((CLegacyRenderTarget *)((char *)this - 18664), a2, v12, v11);
      v4 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xE1u, 0LL);
        goto LABEL_42;
      }
    }
    if ( v11 )
    {
      v21 = v12 ? *((_BYTE *)v12 + 4456) : 0;
      v22 = CLegacyRenderTarget::RenderComposeTop((CLegacyRenderTarget *)((char *)this - 18664), a2, v11, v21);
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xEAu, 0LL);
        goto LABEL_42;
      }
    }
    v14 = (__int64)this - 18528;
    if ( CLegacyRenderTarget::IsPrimaryMonitor((CLegacyRenderTarget *)((char *)this - 18528)) )
    {
      v13 = 1;
      v24 = *(_QWORD *)(*((_QWORD *)this - 2331) + 472LL);
      if ( v24 )
      {
        if ( *(_BYTE *)(v24 + 24) )
        {
          v25 = CLegacyRenderTarget::RenderDebugFrameCounter((CLegacyRenderTarget *)((char *)this - 18664), a2);
          v4 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xF6u, 0LL);
            goto LABEL_42;
          }
        }
      }
    }
    v5 = 0;
    v27 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v4 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xFBu, 0LL);
      goto LABEL_42;
    }
    v6 = v38;
  }
  else
  {
    v14 = (__int64)this - 18528;
  }
  *((_BYTE *)this - 77) = COverlayContext::PresentNeeded((CLegacyRenderTarget *)((char *)this - 18192));
  CLegacyRenderTarget::CheckForFullScreenVideoNotifications((CLegacyRenderTarget *)((char *)this - 18664));
  v29 = *(CSuperWetInkManager **)(*((_QWORD *)this - 2331) + 128LL);
  DeviceClipBox = (_DWORD *)CLegacyRenderTarget::GetDeviceClipBox(v14, (__int64)&v38);
  v31 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
          v29,
          (struct IMonitorTarget *)(v14 & -(__int64)(this != (CLegacyRenderTarget *)18664)),
          DeviceClipBox,
          &v37);
  v4 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x107u, 0LL);
  }
  else
  {
    if ( v37 )
      *((_BYTE *)this - 76) = 1;
    if ( !*((_BYTE *)this - 78) && !v13 && !*((_BYTE *)this - 77) )
    {
      v5 = 0;
      if ( !*((_BYTE *)this - 76) )
        goto LABEL_42;
    }
    *v6 = 1;
  }
  v5 = 0;
LABEL_42:
  if ( v4 < 0 )
    *((_BYTE *)this - 78) = 0;
  if ( v5 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_46:
  if ( g_LockAndReadTarget )
  {
    v33 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 2313);
    if ( v33 )
    {
      v34 = (**v33)(v33);
      v35 = *(int *)(*(_QWORD *)(v34 + 8) + 16LL) + v34 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v35 + 24LL))(
        v35,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return (unsigned int)v4;
}
