/*
 * XREFs of VfZwAddBootEntry @ 0x1409E81F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAddBootEntry(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvZwAddBootEntry)(BugCheckParameter3, a2);
}
