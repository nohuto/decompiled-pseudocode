/*
 * XREFs of DbgkpGetServerSiloState @ 0x14080F9D4
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140B44E78 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B44FC0 (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
