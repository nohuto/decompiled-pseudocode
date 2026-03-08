/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140B936AC
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x140796DC4 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140867174 (PopIsDirectedDripsEnabled.c)
 */

__int64 PopDripsWatchdogInitializeActions()
{
  int v0; // edx
  int v1; // eax

  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140C3956C = v0;
  return 0LL;
}
