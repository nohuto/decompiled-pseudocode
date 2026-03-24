/*
 * XREFs of VfZwQueryFullAttributesFile @ 0x1409EAEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409EC85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryFullAttributesFile(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(a1, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwQueryFullAttributesFile)(a1, a2);
}
