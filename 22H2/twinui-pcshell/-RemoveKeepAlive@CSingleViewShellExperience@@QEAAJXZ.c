/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180086330
 * Callers:
 *     ?RemoveKeepAlive@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x180086320 (-RemoveKeepAlive@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18001627C (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AAB0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001AAB0.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002C1EC (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180086484 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1800864B0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  void *v4; // rsi
  unsigned int v5; // ebp
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  _BYTE v13[16]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( !v3 )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8000FFFFLL);
    return v10;
  }
  v4 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  v5 = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v7 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"RemoveKeepAlive");
  v14[0] = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
  SingleViewExperienceTelemetry::RemoveKeepAlive::StartActivity(
    (SingleViewExperienceTelemetry::RemoveKeepAlive *)v14,
    v7,
    StringRawBuffer,
    v5,
    v4);
  v13[0] = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), v13);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( v13[0] )
  {
    v10 = -2147019873;
    v12 = 970LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 18) = 1;
    goto LABEL_7;
  }
  v9 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
         (__int64)this + 72,
         *((ExperienceManagerUtils **)this + 3),
         1u);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v9);
LABEL_8:
  if ( (v10 & 0x80000000) != 0 )
  {
    v12 = 971LL;
    goto LABEL_17;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14);
  v10 = 0;
LABEL_10:
  SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive((SingleViewExperienceTelemetry::RemoveKeepAlive *)v14);
  return v10;
}
