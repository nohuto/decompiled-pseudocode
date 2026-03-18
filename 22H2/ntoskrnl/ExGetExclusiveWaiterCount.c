/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1403BEEC0
 * Callers:
 *     CmpIsRegistryLockContended @ 0x140616300 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->Flag & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
