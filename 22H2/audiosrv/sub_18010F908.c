/*
 * XREFs of sub_18010F908 @ 0x18010F908
 * Callers:
 *     sub_18010EF40 @ 0x18010EF40 (sub_18010EF40.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F908(__int64 a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !(unsigned int)sub_18010F5C8(a1) )
    (***(void (__fastcall ****)(_QWORD))(a1 + 56))(*(_QWORD *)(a1 + 56));
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
