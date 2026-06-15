/*
 * XREFs of sub_18010FC78 @ 0x18010FC78
 * Callers:
 *     sub_18010F7E0 @ 0x18010F7E0 (sub_18010F7E0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010EAF0 @ 0x18010EAF0 (sub_18010EAF0.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FC78(__int64 a1)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( *(_DWORD *)(a1 + 64) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    sub_18010EAF0((_QWORD *)a1);
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 8LL))(*(_QWORD *)(a1 + 56));
    sub_18011020C(a1, 0LL, 0LL);
    sub_18011020C(a1, 1LL, 0LL);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
