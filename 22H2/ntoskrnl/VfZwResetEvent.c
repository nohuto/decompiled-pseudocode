/*
 * XREFs of VfZwResetEvent @ 0x1409EBC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC954 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC9A0 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwResetEvent(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwResetEvent)(a1, a2);
}
