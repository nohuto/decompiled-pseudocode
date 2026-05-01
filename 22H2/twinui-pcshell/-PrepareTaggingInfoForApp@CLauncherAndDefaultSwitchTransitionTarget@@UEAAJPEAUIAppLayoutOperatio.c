/*
 * XREFs of ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180437A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x180434B04 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x180437E98 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x180437F80 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180437FF4 (-_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::PrepareTaggingInfoForApp(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  bool v4; // r15
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  __int64 WindowForView; // rax
  __int128 v14; // xmm0
  int v15; // edx
  int v16; // eax
  CAppTransitionTargetBase *v17; // rcx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v21; // r8
  int v22; // eax
  int v23; // ebx
  struct IUnknown *v25; // [rsp+30h] [rbp-69h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-61h] BYREF
  __int128 v27; // [rsp+40h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)&v27 = 4095LL;
  DWORD2(v27) = 0;
  *(_OWORD *)((char *)this + 40) = v27;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  v25 = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  v9 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v25);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = 150994944;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v25,
                      v10);
    if ( WindowForView )
    {
      *((_QWORD *)this + 7) = WindowForView;
      (*(void (__fastcall **)(CLauncherAndDefaultSwitchTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        v14 = *(_OWORD *)((char *)this + 188);
      else
        v14 = *(_OWORD *)((char *)this + 172);
      *(_OWORD *)((char *)this + 72) = v14;
      v15 = *((_DWORD *)this + 19);
      v16 = *((_DWORD *)this + 18);
      *(_OWORD *)((char *)this + 88) = v14;
      *((_DWORD *)this + 21) -= v15;
      *((_DWORD *)this + 19) -= v15;
      *((_DWORD *)this + 18) = 0;
      *((_DWORD *)this + 20) -= v16;
      MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
      v18 = *((_DWORD *)this + 42);
      if ( v18 == 34 || v18 > 0x37 && (v18 <= 0x39 || v18 == 69) )
      {
        v12 = (*((_DWORD *)this + 39) != 0 ? 151257088 : 150994944) | 0x200000;
        if ( v18 != 57 )
          v12 = *((_DWORD *)this + 39) != 0 ? 151257088 : 150994944;
        if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
            || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
          {
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 28;
            }
          }
          else
          {
            v22 = 18;
            if ( *((_DWORD *)this + 42) != 34 )
              v22 = 2;
            *((_DWORD *)this + 10) = v22;
          }
        }
        else
        {
          v26 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(this, (struct IApplicationView **)&v26);
          if ( *((_BYTE *)this + 152) )
          {
            v19 = 43;
          }
          else if ( *((_DWORD *)this + 42) != 69 || v26 && (unsigned int)SHIsSameObject(v26, v25) )
          {
            v19 = 19;
            if ( *((_DWORD *)this + 42) != 34 )
              v19 = 3;
          }
          else
          {
            v19 = 4;
          }
          *((_DWORD *)this + 10) = v19;
          v20 = *((_DWORD *)this + 42);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          v4 = v20 != 57;
        }
        CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v21, 0LL);
      }
      v23 = *((_DWORD *)this + 11) & 0x400000;
      *((_DWORD *)this + 11) = v23 | CAppTransitionTargetBase::_GetDwmTargetFlag(v17, *((HWND *)this + 7), v4, v12);
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  return v11;
}
