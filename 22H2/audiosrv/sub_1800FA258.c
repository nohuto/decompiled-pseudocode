/*
 * XREFs of sub_1800FA258 @ 0x1800FA258
 * Callers:
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FA2EC @ 0x1800FA2EC (sub_1800FA2EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FA258(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = -2147467259;
  if ( *a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
    sub_1800FA2EC(a1 + 112, *a2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
    v4 = 0;
  }
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
