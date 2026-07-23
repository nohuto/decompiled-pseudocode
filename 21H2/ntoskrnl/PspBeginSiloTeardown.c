/*
 * XREFs of PspBeginSiloTeardown @ 0x140906048
 * Callers:
 *     PspJobClose @ 0x140614EC0 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020098C (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
