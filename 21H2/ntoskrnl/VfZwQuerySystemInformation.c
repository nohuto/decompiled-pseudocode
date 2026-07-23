/*
 * XREFs of VfZwQuerySystemInformation @ 0x1409EC780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySystemInformation(unsigned int a1, ULONG_PTR a2, unsigned int a3, ULONG_PTR a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(_QWORD, ULONG_PTR, _QWORD, ULONG_PTR))pXdvZwQuerySystemInformation)(a1, a2, a3, a4);
}
