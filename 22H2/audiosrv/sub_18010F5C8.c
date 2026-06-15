/*
 * XREFs of sub_18010F5C8 @ 0x18010F5C8
 * Callers:
 *     sub_18010F0B0 @ 0x18010F0B0 (sub_18010F0B0.c)
 *     sub_18010F4A0 @ 0x18010F4A0 (sub_18010F4A0.c)
 *     sub_18010F85C @ 0x18010F85C (sub_18010F85C.c)
 *     sub_18010F908 @ 0x18010F908 (sub_18010F908.c)
 *     sub_18010F970 @ 0x18010F970 (sub_18010F970.c)
 *     sub_18010FD30 @ 0x18010FD30 (sub_18010FD30.c)
 *     sub_18010FF20 @ 0x18010FF20 (sub_18010FF20.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E14F0 @ 0x1800E14F0 (sub_1800E14F0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F5C8(__int64 a1)
{
  unsigned int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  v2 = 0;
  if ( *(_DWORD *)(a1 + 68)
    || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 16LL))(*(_QWORD *)(a1 + 56)) )
  {
    sub_1800E14F0((__int64)&lpCriticalSection);
    return 1;
  }
  else if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
