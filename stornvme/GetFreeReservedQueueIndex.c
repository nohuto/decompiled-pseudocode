/*
 * XREFs of GetFreeReservedQueueIndex @ 0x1C0012A84
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0012DF0 (IoctlCreateReservedQueuePair.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFreeReservedQueueIndex(__int64 a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx

  v1 = *(_WORD *)(a1 + 918);
  v2 = 0;
  if ( !v1 )
    return 0xFFFFLL;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * v2 + 24) )
  {
    if ( ++v2 >= v1 )
      return 0xFFFFLL;
  }
  return v2;
}
