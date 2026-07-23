/*
 * XREFs of VfZwWaitForSingleObject @ 0x1409ED690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForSingleObject(__int64 a1, char a2, ULONG_PTR a3)
{
  __int64 v6; // rdx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  LOBYTE(v6) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvZwWaitForSingleObject)(a1, v6, a3);
}
