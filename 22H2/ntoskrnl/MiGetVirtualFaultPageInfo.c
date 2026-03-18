/*
 * XREFs of MiGetVirtualFaultPageInfo @ 0x14046C28E
 * Callers:
 *     MiAllocateWsle @ 0x14026B6B0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14046C2C2 (MiValidVirtualizationFault.c)
 *     MiLargePageFault @ 0x1406464DC (MiLargePageFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVirtualFaultPageInfo(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // r9

  v2 = *(unsigned __int64 **)(a1 + 8);
  v3 = *v2;
  if ( a2 < *v2 || a2 >= v3 + v2[1] )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 40) + 8 * ((a2 - v3) >> 12);
}
