/*
 * XREFs of CmFcShutdownSystem @ 0x14086B1D4
 * Callers:
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9380 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DB04 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
