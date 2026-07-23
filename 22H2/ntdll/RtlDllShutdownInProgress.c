/*
 * XREFs of RtlDllShutdownInProgress @ 0x180064900
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008C780 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18016C508 != 0;
}
