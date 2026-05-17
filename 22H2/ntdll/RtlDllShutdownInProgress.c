/*
 * XREFs of RtlDllShutdownInProgress @ 0x180064900
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008C780 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

bool RtlDllShutdownInProgress()
{
  return byte_18016C508 != 0;
}
