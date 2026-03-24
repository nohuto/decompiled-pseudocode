/*
 * XREFs of PnpFindBestConfiguration @ 0x140751ED4
 * Callers:
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1408B3398 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B87F4 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140751F2C (PnpFindBestConfigurationWorker.c)
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
