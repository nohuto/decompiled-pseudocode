/*
 * XREFs of PopInitializeAdpm @ 0x140A725E8
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407D2414 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C20580 = 3LL;
  xmmword_140C20570 = 0LL;
  return PopExtendConnectionState(0);
}
