/*
 * XREFs of ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800B8774
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78B4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B95E4 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B9CA4 (-_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x1800B8510 (-_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
        ShellFeedsExperienceManagerImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IServiceProvider *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  ImmersiveShell = ShellFeedsExperienceManagerImpl::_GetImmersiveShell(this, v12);
  v9 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, const struct _GUID *, const struct _GUID *, void **))v12[0]->lpVtbl->QueryService)(
                       v12[0],
                       a2,
                       a3,
                       a4);
    v9 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 743LL;
  }
  else
  {
    v10 = 742LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  return v9;
}
