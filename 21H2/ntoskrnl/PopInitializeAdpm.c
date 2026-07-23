/*
 * XREFs of PopInitializeAdpm @ 0x140A734AC
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407D2664 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C205C0 = 3LL;
  xmmword_140C205B0 = 0LL;
  return PopExtendConnectionState(0);
}
