/*
 * XREFs of PopIsDozeSupported @ 0x14097DB04
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059BCE8 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 *     PopDeferDoze @ 0x140988614 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140870C14 (PopIsHibernateSupported.c)
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
