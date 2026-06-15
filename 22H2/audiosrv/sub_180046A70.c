/*
 * XREFs of sub_180046A70 @ 0x180046A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_180046A70(HANDLE *a1, void *a2, SIZE_T a3)
{
  if ( !a2 )
    return (LPVOID)(*(__int64 (__fastcall **)(HANDLE *, SIZE_T))*a1)(a1, a3);
  if ( a3 )
    return HeapReAlloc(a1[1], 0, a2, a3);
  (*((void (__fastcall **)(HANDLE *))*a1 + 1))(a1);
  return 0LL;
}
