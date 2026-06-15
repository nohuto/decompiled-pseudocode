/*
 * XREFs of sub_180003ECC @ 0x180003ECC
 * Callers:
 *     sub_180003E50 @ 0x180003E50 (sub_180003E50.c)
 *     sub_18012DBE0 @ 0x18012DBE0 (sub_18012DBE0.c)
 * Callees:
 *     sub_180004014 @ 0x180004014 (sub_180004014.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180003ECC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = sub_180004014(a1);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
