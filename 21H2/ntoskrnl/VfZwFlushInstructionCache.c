/*
 * XREFs of VfZwFlushInstructionCache @ 0x1409E99D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwFlushInstructionCache(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))pXdvZwFlushInstructionCache)(a1, a2, a3);
}
