/*
 * XREFs of PopIsDozeSupported @ 0x140989788
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 *     PopDeferDoze @ 0x1409974E8 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1408111A0 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(_BYTE *a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
