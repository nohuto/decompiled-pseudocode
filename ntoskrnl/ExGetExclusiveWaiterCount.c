/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1403B9590
 * Callers:
 *     CmpIsRegistryLockContended @ 0x140613E50 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->Flag & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
