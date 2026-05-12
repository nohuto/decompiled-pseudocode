/*
 * XREFs of RaidReleasePortData @ 0x1C000E06C
 * Callers:
 *     StorpLogStatistics @ 0x1C000C8F8 (StorpLogStatistics.c)
 *     StorEtwEnableCallback @ 0x1C004F160 (StorEtwEnableCallback.c)
 *     RaDeleteDriver @ 0x1C007A168 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
