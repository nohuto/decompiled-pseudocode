/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434190
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18043529C (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x18043537C (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1804353BC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x180435434 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180435580 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1804356C8 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x1804357B0 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x180435A54 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180435F50 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804362A4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804364F0 (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x1804367EC (-s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOp.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x180436920 (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r14
  char v15; // r15
  unsigned int ImmediateStoryboardIDForAppArrangementAnimation; // ebx
  struct _GUID *v17; // r8
  CAppTransitionManager *v18; // rcx
  struct ITemporaryAppVisual **v19; // rdx
  CAppTransitionManager *v20; // rcx
  CAppTransitionManager *v21; // rcx
  struct IAppLayoutOperation *v22; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+38h] [rbp-40h] BYREF
  int v24; // [rsp+3Ch] [rbp-3Ch]
  struct _GUID v25; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v26; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle((CAppTransitionManager *)((char *)this - 88)) )
    return 0LL;
  v22 = 0LL;
  v24 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(
          ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88),
          1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
         &v22);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = CAppTransitionManager::_BeginAnimationStage((char *)this - 88, 2LL, v22, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 230LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_41;
    }
    if ( !*((_BYTE *)this + 194) )
      goto LABEL_37;
    v11 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 235LL;
      goto LABEL_11;
    }
    if ( !v23 )
    {
LABEL_37:
      if ( *((_DWORD *)this + 51) == 2 )
        CAppTransitionManager::_ClearAnimationPassState((CAppTransitionManager *)((char *)this - 88));
      v10 = -2147019873;
      if ( *((_DWORD *)this + 53) )
        v10 = 0;
      goto LABEL_41;
    }
    v13 = *((_DWORD *)this + 49);
    if ( v13 == 2 )
    {
      v14 = 1;
    }
    else
    {
      v14 = 0;
      if ( v13 != 3 )
      {
        v15 = 1;
        if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x200000) == 0 )
        {
LABEL_18:
          ImmediateStoryboardIDForAppArrangementAnimation = CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(v22);
          CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v22, &v25, &v26);
          if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x400000) == 0 )
          {
            v17 = &v25;
            if ( v14 )
              v17 = 0LL;
            v10 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    ImmediateStoryboardIDForAppArrangementAnimation,
                    v17);
            if ( v10 < 0 )
              goto LABEL_41;
            if ( !v14 && !*((_BYTE *)this + 193) )
            {
              CAppTransitionManager::_TagDividerBitmap(v18, v22);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
            }
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 4LL);
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 2LL);
            CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v22);
            if ( !v15 )
            {
LABEL_35:
              if ( !v14 )
                DwmFlush();
              goto LABEL_37;
            }
            CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0);
          }
          if ( v15 )
          {
            v10 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    0x44u,
                    &v26);
            if ( v10 < 0 )
              goto LABEL_41;
            if ( (*((_BYTE *)this + 200) & 4) != 0
              && (int)CAppTransitionManager::_FindPlaceModeVisual((CAppTransitionManager *)((char *)this - 88), v19) >= 0 )
            {
              CAppTransitionManager::_TagPlaceVisual((CAppTransitionManager *)((char *)this - 88));
              CAppTransitionManager::_ExcludeAllPresentedApps(v21, v22);
            }
            else
            {
              CAppTransitionManager::_TagDividerBitmap(v20, v22);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
              CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v22);
            }
            if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v22 + 80LL))(v22) & 0x400000) != 0 )
              CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 1);
          }
          goto LABEL_35;
        }
      }
    }
    v15 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_41:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( v24 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88)));
  return (unsigned int)v10;
}
