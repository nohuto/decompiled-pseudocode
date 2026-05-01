/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1804D37D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EC5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1804D07C8 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@@impl@winrt@@YA-AU-$com_ptr@UIService.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1804D4CC0 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1804D60F8 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v13; // r15
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  RTL_SRWLOCK *v20; // [rsp+50h] [rbp-48h]
  __int128 *v21; // [rsp+58h] [rbp-40h]
  char v22; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v24; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  v5 = this - 2;
  try
  {
    (*((void (**)(void))this[-2].Ptr + 9))();
    v24 = 0LL;
    v6 = 0LL;
    if ( v5 )
    {
      v24 = (__int64)v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      v6 = (__int64)v5;
    }
    winrt::impl::as<IServiceProvider,winrt::immersive_shell_component>(&v17, v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
    v18 = 0LL;
    v19 = 0LL;
    AcquireSRWLockExclusive(this + 8);
    std::vector<winrt::immersive_shell_component::service_description>::swap(&v18, &this[4]);
    if ( this != (RTL_SRWLOCK *)-64LL )
      ReleaseSRWLockExclusive(this + 8);
    v20 = v5;
    v21 = &v18;
    v22 = 1;
    v8 = *((_QWORD *)&v18 + 1);
    v9 = v18;
    v10 = v17;
    while ( v9 != v8 )
    {
      v11 = v10;
      v24 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v9 + 16);
      if ( v12 )
      {
        v25 = 0LL;
        (**v12)(v12, &winrt::impl::guid_storage<IServiceProvider>::value, &v25);
        v13 = v25;
        if ( v25 )
        {
          if ( v10 )
            winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v24);
          v11 = v13;
          v24 = v13;
        }
      }
      if ( !v11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          326LL,
          (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
          v7);
      v14 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
              a3,
              v9,
              v11,
              v9 + 24);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          328LL,
          (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
          (const char *)(unsigned int)v14);
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v24);
      v9 += 32LL;
    }
    AcquireSRWLockExclusive(v5 + 10);
    std::vector<winrt::immersive_shell_component::service_description>::swap(&v5[6], &v18);
    if ( v5 != (RTL_SRWLOCK *)-80LL )
      ReleaseSRWLockExclusive(v5 + 10);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v18);
    if ( v10 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x14D,
                     (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                     v15);
    return (unsigned int)v24;
  }
  return result;
}
