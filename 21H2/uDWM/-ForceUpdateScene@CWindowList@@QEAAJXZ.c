/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097B60
 * Callers:
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180098784 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800B0BA0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001286C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012BB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001A650 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18003A030 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800432A8 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081394 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180096988 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rcx
  CDesktopManager *v3; // rsi
  __int64 v4; // rdi
  __int64 i; // rbp
  struct CVisual *v6; // rdx
  CDesktopManager *v7; // rcx
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rdi
  struct UdwmDcompVisual *v10; // rdx
  int v11; // eax
  struct CVisual **v12; // rax
  struct CVisual **v13; // rdi
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rdx
  __int64 v16; // rax
  struct CVisual *v17; // rdx
  CDesktopManager *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  CDesktopManager *v22; // rcx
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  int v24; // eax
  PVOID RestartKey; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+38h] [rbp-30h] BYREF
  int v28[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = 0LL;
  RestartKey = 0LL;
  for ( i = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
        (unsigned int)v4 < *((_DWORD *)v3 + 194);
        v4 = (unsigned int)(v4 + 1) )
  {
    CDesktopManager::UpdateSceneImpl(v2, *(struct CVisual **)(*((_QWORD *)v3 + 94) + 8 * v4));
  }
  while ( 1 )
  {
    v12 = (struct CVisual **)RtlEnumerateGenericTableWithoutSplaying(
                               (PRTL_GENERIC_TABLE)((char *)this + 8),
                               &RestartKey);
    v13 = v12;
    if ( !v12 )
      break;
    v6 = v12[3];
    if ( v6 )
      CDesktopManager::UpdateSceneImpl(v7, v6);
    v8 = v13[5];
    if ( v8 )
      CDesktopManager::UpdateSceneImpl(v7, v8);
    v9 = v13[7];
    if ( v9 )
    {
      v10 = (struct UdwmDcompVisual *)*((_QWORD *)v9 + 12);
      if ( v10 )
      {
        if ( CGlobalLightSet::ValidateUdwmDCompVisual(v7, v10) )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v9 + 12) + 16LL) + 64LL))(*(_QWORD *)(*((_QWORD *)v9 + 12) + 16LL));
          if ( v11 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x190,
              (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v11);
        }
      }
    }
  }
  v14 = (struct CVisual *)*((_QWORD *)this + 62);
  if ( v14 && *((_QWORD *)v14 + 3) )
    CDesktopManager::UpdateSceneImpl(v7, v14);
  v15 = (struct CVisual *)*((_QWORD *)this + 63);
  if ( v15 && *((_QWORD *)v15 + 3) )
    CDesktopManager::UpdateSceneImpl(v7, v15);
  v16 = *((_QWORD *)this + 65);
  if ( v16 )
  {
    v17 = *(struct CVisual **)(v16 + 48);
    if ( v17 )
      CDesktopManager::UpdateSceneImpl(v7, v17);
  }
  if ( i && *(_QWORD *)(i + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(this);
    CDesktopManager::UpdateSceneImpl(v18, *(struct CVisual **)(i + 8));
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&CommitChannel_UpdateScene,
      v19,
      1LL,
      (__int64)v28);
  v20 = *((_QWORD *)this + 73);
  if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v20 = *((_QWORD *)this + 71);
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL)
                                                   + 32LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          v20);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      6012LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v21);
  *((_BYTE *)this + 602) = 0;
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 73,
    0LL);
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(v22);
  if ( DCompositionInteropDevice )
  {
    v24 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice
                                                                                + 24LL))(DCompositionInteropDevice);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        6022LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v24);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return 0LL;
}
