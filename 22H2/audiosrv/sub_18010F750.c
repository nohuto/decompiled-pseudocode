/*
 * XREFs of sub_18010F750 @ 0x18010F750
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066884 @ 0x180066884 (sub_180066884.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010F750(__int64 a1)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( (int)sub_180066884(a1) >= 0 )
  {
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48), a1 + 40);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
