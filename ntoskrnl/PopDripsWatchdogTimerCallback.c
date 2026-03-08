/*
 * XREFs of PopDripsWatchdogTimerCallback @ 0x14059C010
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = a2 + 112;
  if ( a1 == a2 + 112 || (v3 = a2 + 376, a1 == a2 + 376) )
    LOBYTE(a1) = PopQueueWorkItem(v3 + 136, DelayedWorkQueue);
  return a1;
}
