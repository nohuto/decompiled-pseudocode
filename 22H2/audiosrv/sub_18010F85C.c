/*
 * XREFs of sub_18010F85C @ 0x18010F85C
 * Callers:
 *     sub_180110530 @ 0x180110530 (sub_180110530.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010EAF0 @ 0x18010EAF0 (sub_18010EAF0.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F85C(__int64 a1)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( !(unsigned int)sub_18010F5C8(a1) )
  {
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
    sub_18010EAF0((_QWORD *)a1);
    *(_DWORD *)(a1 + 76) = 2;
    sub_18011020C(a1, 0LL, 0LL);
    sub_18011020C(a1, 1LL, 0LL);
    v2 = *(_QWORD *)(a1 + 136);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 480LL))(v2, 0LL);
      sub_1800CB144((__int64 *)(a1 + 136));
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
