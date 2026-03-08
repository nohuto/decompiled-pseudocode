/*
 * XREFs of PnpFindBestConfiguration @ 0x140803704
 * Callers:
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14096A7C4 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14080375C (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
