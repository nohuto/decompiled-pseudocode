/*
 * XREFs of DbgkpResumeProcess @ 0x140936438
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawMultiProcess(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
