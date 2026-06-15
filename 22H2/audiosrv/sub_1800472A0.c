/*
 * XREFs of sub_1800472A0 @ 0x1800472A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800472A0(_BYTE *a1)
{
  __int64 result; // rax
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  if ( a1[300] )
  {
    UuidCreate(&Uuid);
    return (*(__int64 (__fastcall **)(_BYTE *, UUID *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, &Uuid, 0LL);
  }
  return result;
}
