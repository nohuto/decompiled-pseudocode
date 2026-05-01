/*
 * XREFs of ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x18013A1EC
 * Callers:
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x18013A168 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18014619C (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::GetProcessHandleForClientOfObject_nothrow(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rbx
  int v8; // eax
  HANDLE CurrentProcess; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  v4 = CoGetCallContextOfObject(a1, &GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v4);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v5;
  }
  if ( v10 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a3,
      0LL);
    v8 = v7(v10, 4096LL, a3);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B8,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)(unsigned int)v8);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      return v5;
    }
  }
  else
  {
    CurrentProcess = GetCurrentProcess();
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a3,
      CurrentProcess);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
