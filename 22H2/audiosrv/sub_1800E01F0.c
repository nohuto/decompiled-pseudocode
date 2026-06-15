/*
 * XREFs of sub_1800E01F0 @ 0x1800E01F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E01F0(__int64 *a1)
{
  LPCRITICAL_SECTION v2; // rbx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800462E4(&v5, *a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ( LODWORD(v2[1].DebugInfo)-- == 1 )
    sub_1800103D4((__int64)v2);
  LeaveCriticalSection(v2);
  EtwEventActivityIdControl(4LL, v6);
  return 0LL;
}
