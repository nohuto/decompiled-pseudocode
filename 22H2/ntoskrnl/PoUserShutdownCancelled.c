/*
 * XREFs of PoUserShutdownCancelled @ 0x140779D50
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x140779D84 (PopUserShutdownCancelled.c)
 */

char __fastcall PoUserShutdownCancelled(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rcx

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
    LOBYTE(v3) = 1;
    return PopUserShutdownCancelled(v3);
  }
  return result;
}
