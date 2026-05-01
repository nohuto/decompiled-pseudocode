/*
 * XREFs of ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1804D47D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EFEC (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804D1990 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1804D5050 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  char *v6; // rbx
  char *Ptr; // r15
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  PVOID v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  v5 = this + 4;
  v6 = 0LL;
  if ( &v11 == (__int128 *)&this[4] )
  {
    Ptr = (char *)v11;
  }
  else
  {
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v11);
    Ptr = (char *)v5->Ptr;
    *(RTL_SRWLOCK *)&v11 = (RTL_SRWLOCK)v5->Ptr;
    v6 = (char *)this[5].Ptr;
    *((_QWORD *)&v11 + 1) = v6;
    v12 = this[6].Ptr;
    v5->Ptr = 0LL;
    this[5].Ptr = 0LL;
    this[6].Ptr = 0LL;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  try
  {
    while ( v6 != Ptr )
    {
      v6 -= 32;
      if ( *((_DWORD *)v6 + 6) )
      {
        v8 = ((__int64 (__fastcall *)(struct IProfferService *))a2->lpVtbl->RevokeService)(a2);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x188,
            (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
            (const char *)(unsigned int)v8);
      }
      v14 = 0LL;
      winrt::com_ptr<IUnknown>::operator=((__int64 *)v6 + 2, &v14);
      if ( v14 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v14);
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, struct IProfferService *))this[-2].Ptr + 10))(this - 2, a2);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x193,
                     (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                     v9);
    return (unsigned int)v14;
  }
  return result;
}
