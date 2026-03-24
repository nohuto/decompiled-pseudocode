/*
 * XREFs of VfZwOpenProcessToken @ 0x1409EA310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC954 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC9A0 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenProcessToken(__int64 a1, unsigned int a2, ULONG_PTR a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, ULONG_PTR))pXdvZwOpenProcessToken)(a1, a2, a3);
}
