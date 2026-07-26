/*
 * XREFs of PdcPortClose @ 0x1C012A648
 * Callers:
 *     PdcTaskClientUnregister @ 0x1C012A538 (PdcTaskClientUnregister.c)
 * Callees:
 *     PdcpPortReleaseResources @ 0x1C012A7FC (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortClose(struct _EX_RUNDOWN_REF *P)
{
  ExWaitForRundownProtectionRelease(P + 1);
  ExRundownCompleted(P + 1);
  return PdcpPortReleaseResources(P);
}
