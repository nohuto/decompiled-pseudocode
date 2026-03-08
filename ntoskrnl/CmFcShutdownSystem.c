/*
 * XREFs of CmFcShutdownSystem @ 0x140A0EFB8
 * Callers:
 *     CmShutdownSystem0 @ 0x14061375C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140674D20 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A240B0 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C067D0);
  }
}
