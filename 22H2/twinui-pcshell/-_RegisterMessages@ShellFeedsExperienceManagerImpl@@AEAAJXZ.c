/*
 * XREFs of ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B95E4
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78B4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVShellFeedsExperienceManagerImpl@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVShellFeedsExperienceManagerImpl@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1800AFF5C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800B8774 (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x180228270 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsExperienceManagerImpl::_RegisterMessages(ShellFeedsExperienceManagerImpl *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  int v4; // eax
  __int64 v5; // rdx
  UINT v6; // eax
  const char *v7; // r9
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  void *v12; // [rsp+70h] [rbp+30h] BYREF
  ShellFeedsExperienceManagerImpl *v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v2 = ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
         this,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v12);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v11 = 0LL;
    *(_QWORD *)&v9 = ShellFeedsExperienceManagerImpl::_OnMessageHandler;
    DWORD2(v9) = 0;
    v13 = this;
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v11);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,ShellFeedsExperienceManagerImpl *,long (ShellFeedsExperienceManagerImpl::*)(unsigned int,unsigned __int64,__int64)>(
           &v11,
           (__int64 *)&v13,
           &v9);
    LastError = v4;
    if ( v4 >= 0 )
    {
      v6 = RegisterWindowMessageW(L"ShellFeedsExperienceManager.DeferredSuspensionMessage");
      *((_DWORD *)this + 34) = v6;
      if ( !v6 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x43F,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
                      v7);
        goto LABEL_11;
      }
      v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v12 + 24LL))(
             v12,
             v6,
             (v11 + 8) & -(__int64)(v11 != 0),
             (char *)this + 140);
      LastError = v4;
      if ( v4 >= 0 )
      {
        LastError = 0;
        goto LABEL_11;
      }
      v5 = 1088LL;
    }
    else
    {
      v5 = 1080LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_11:
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x435,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return LastError;
}
