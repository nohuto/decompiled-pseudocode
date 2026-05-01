/*
 * XREFs of ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180435C14
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18043562C (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x180434B78 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x180436F74 (-s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA-AW4AppArrangementSpecialTran.c)
 */

void __fastcall CAppTransitionManager::_InitAnimationPassState(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3)
{
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v3; // rax
  bool v7; // bl
  IUnknown *v8; // rcx
  bool *v9; // r9
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v10; // [rsp+40h] [rbp+20h] BYREF
  void *v11; // [rsp+48h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+30h] BYREF

  v3 = (struct IImmersiveApplicationManagerSafeForSyncCallouts *)*((_QWORD *)this + 25);
  if ( v3 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)a3 + 8LL))(a3);
      v3 = (struct IImmersiveApplicationManagerSafeForSyncCallouts *)*((_QWORD *)this + 25);
    }
    v10 = v3;
    *((_QWORD *)this + 25) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 22),
         (const GUID *const)&SID_ImmersiveLayout,
         &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
         &ppvOut) >= 0 )
    (*(void (__fastcall **)(void *, __int64, char *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, 10LL, (char *)this + 264);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  (*(void (__fastcall **)(struct IAppLayoutOperation *, char *))(*(_QWORD *)a2 + 72LL))(a2, (char *)this + 208);
  LODWORD(v10) = 0;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 22),
         &IID_IRudeWindowManager,
         &GUID_d29c946b_4f1c_425a_bb5b_d4e2e6e2993c,
         &v11) >= 0 )
    (*(void (__fastcall **)(void *, struct IImmersiveApplicationManagerSafeForSyncCallouts **))(*(_QWORD *)v11 + 40LL))(
      v11,
      &v10);
  v7 = (_DWORD)v10 != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v8 = (IUnknown *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 280) = v7;
  ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(v8, 0LL, (CAppTransitionManager *)((char *)this + 281), v9);
  if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x100000) != 0 )
  {
    *((_DWORD *)this + 71) = 0;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x10000) != 0 )
  {
    *((_DWORD *)this + 72) = CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(a2);
    *((_DWORD *)this + 71) = 1;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x1020000) != 0 )
  {
    *((_DWORD *)this + 71) = 2;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
}
