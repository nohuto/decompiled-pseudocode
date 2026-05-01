/*
 * XREFs of _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x180078F1C
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180078DA4 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v8; // rdi
  HSTRING_HEADER *v9; // rbx
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  char v13; // [rsp+40h] [rbp-88h] BYREF
  HSTRING_HEADER v14; // [rsp+48h] [rbp-80h] BYREF
  HSTRING_HEADER v15; // [rsp+68h] [rbp-60h] BYREF

  v8 = &v13;
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(char **)(a1 + 24);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, (const WCHAR **)(a1 + 8), a3);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)a1, v10);
  return (*(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, _QWORD, int, char *))(*(_QWORD *)a2 + 24LL))(
           a2,
           v11[1].Reserved.Reserved1,
           a3,
           v9[1].Reserved.Reserved1,
           *(_QWORD *)(a1 + 16),
           a4,
           v8);
}
