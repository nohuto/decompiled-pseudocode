/*
 * XREFs of ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x180434934 (-IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x180434B44 (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18043529C (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1804353BC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x180435A54 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareForAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v5; // rdi
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  char IsLayoutOperationCrossFadeOnly; // si
  unsigned int i; // r14d
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  struct IAppLayoutOperationItem *v24; // [rsp+40h] [rbp-20h] BYREF
  struct IAppLayout *v25; // [rsp+48h] [rbp-18h] BYREF
  struct IAppLayout *v26[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v5) )
    return 0LL;
  v23 = 0LL;
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(((unsigned __int64)this + 32) & -(__int64)(v5 != 0LL), 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v23);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = CAppTransitionManager::_BeginAnimationStage(v5, 1LL, v23, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 81LL;
      goto LABEL_10;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 84LL;
      goto LABEL_10;
    }
    v26[0] = 0LL;
    v25 = 0LL;
    v14 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    v15 = (*(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v14 + 40LL))(v14, v26);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v17 = v23;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      v15 = (*(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v17 + 48LL))(v17, &v25);
      v12 = v15;
      if ( v15 >= 0 )
      {
        IsLayoutOperationCrossFadeOnly = *((_DWORD *)this + 49) == 1;
        for ( i = 0; i < v22; ++i )
        {
          v24 = 0LL;
          v20 = v23;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **))(*(_QWORD *)v20 + 32LL))(
                 v20,
                 i,
                 &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
                 &v24) >= 0 )
          {
            v21 = CAppTransitionManager::PrepareAppLayoutOperationForTransition(v5, v24, v26[0], v25);
            if ( v21 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x63,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v21);
            if ( IsLayoutOperationCrossFadeOnly )
              IsLayoutOperationCrossFadeOnly = CAppTransitionManager::IsLayoutOperationCrossFadeOnly(v5, v24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        }
        if ( IsLayoutOperationCrossFadeOnly )
          *((_BYTE *)this + 194) = 0;
        if ( *((_DWORD *)v5 + 73) == 2 )
          CAppTransitionManager::_ClearAnimationPassState(v5);
        v12 = 0;
        goto LABEL_28;
      }
      v16 = 89LL;
    }
    else
    {
      v16 = 88LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    goto LABEL_29;
  }
  v13 = 79LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  if ( v10 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)this + 32) & -(__int64)(v5 != 0LL)));
  return v12;
}
