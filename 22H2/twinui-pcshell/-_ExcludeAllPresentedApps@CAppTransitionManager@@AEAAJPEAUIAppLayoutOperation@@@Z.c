/*
 * XREFs of ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180435580
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434190 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_ExcludeAllPresentedApps(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // edi
  __int64 v7; // rbx
  struct IApplicationView *v8; // rdx
  __int64 WindowForView; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CAppTransitionManager *v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  ApplicationViewHelpers *v14; // [rsp+60h] [rbp+30h] BYREF

  v12 = this;
  v3 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, CAppTransitionManager **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    for ( i = 0; i < (unsigned int)v12; ++i )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
             a2,
             i,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v13) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13) )
      {
        v14 = 0LL;
        v7 = v13;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        if ( (*(int (__fastcall **)(__int64, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v7 + 32LL))(
               v7,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v14) >= 0 )
        {
          WindowForView = ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v14,
                            v8);
          if ( WindowForView )
          {
            v10 = DwmpTransitionWindow(WindowForView, 43LL);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1BA,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v10);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A9,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
