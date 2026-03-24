/*
 * XREFs of PopInitializeAdpm @ 0x140A725E8
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC50 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407D24F4 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C205A0 = 3LL;
  xmmword_140C20590 = 0LL;
  return PopExtendConnectionState(0);
}
