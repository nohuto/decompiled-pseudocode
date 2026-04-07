/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180015534
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180016020 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180013320 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180014A30 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AD80 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036E1C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043128 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18008A08C (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18008A6F0 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC504 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800BD5BC (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r15d
  struct _RTL_GENERIC_TABLE *v6; // r12
  CImmersiveIconicBitmapRegistry *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  char *v10; // r14
  char *v11; // rbx
  CProjectedShadowScene *v12; // rbx
  CGlobalLightSet *v13; // rbx
  __int64 v14; // rcx
  MagnifierExperienceHelper *v15; // rcx
  CTopLevelWindow *v16; // rcx
  __int64 v17; // rbp
  int v19; // eax
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v20; // rbp
  unsigned int v21; // edx
  PVOID RestartKey; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *IconicResourceNoRef; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, *((_DWORD *)a2 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x17EAu);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 80LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
    v6 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    v7 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
    while ( 1 )
    {
      v8 = RtlEnumerateGenericTableWithoutSplaying(v6, &RestartKey);
      v9 = v8;
      if ( !v8 )
        break;
      v10 = (char *)(v8 + 10);
      v11 = (char *)v8[10];
      if ( v11 != (char *)(v8 + 10) )
      {
        do
        {
          v16 = (CTopLevelWindow *)*((_QWORD *)v11 + 48);
          if ( v16 )
            CTopLevelWindow::OnSettingsUpdated(v16, *((_DWORD *)a2 + 1));
          v17 = *((_QWORD *)v11 + 53);
          if ( v17 )
          {
            CTopLevelWindow::OnSettingsUpdated(*(CTopLevelWindow **)(v17 + 88), *((_DWORD *)a2 + 1));
            v19 = CVisual::RenderRecursive(*(CVisual **)(v17 + 88));
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x2ADu);
          }
          if ( CWindowData::IsImmersiveWindow((CWindowData *)v11) )
          {
            if ( *((_DWORD *)v11 + 114) )
            {
              IconicResourceNoRef = (struct _RTL_CRITICAL_SECTION *)CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                                                                      v7,
                                                                      *((HWND *)v11 + 5));
              v20 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)IconicResourceNoRef;
              DynArray<CBitmapSource *,0>::Remove((char *)v7 + 16, &IconicResourceNoRef);
              if ( v20 )
                CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v20, v21);
            }
          }
          v11 = *(char **)v11;
        }
        while ( v11 != v10 );
      }
      v12 = (CProjectedShadowScene *)v9[6];
      if ( v12 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CProjectedShadowScene::PositionProjectedShadowReceiverVisual(v12);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
      }
      v13 = (CGlobalLightSet *)v9[7];
      if ( v13 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CGlobalLightSet::PositionCoordinateSpaceVisual(v13);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
      }
      v14 = v9[2];
      if ( v14 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        v15 = *(MagnifierExperienceHelper **)(v14 + 160);
        if ( v15 )
          MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(v15);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v5;
}
