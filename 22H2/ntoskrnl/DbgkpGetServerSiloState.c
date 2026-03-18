/*
 * XREFs of DbgkpGetServerSiloState @ 0x140858F68
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140B6C29C (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B6C3E4 (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
