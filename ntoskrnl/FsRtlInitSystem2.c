/*
 * XREFs of FsRtlInitSystem2 @ 0x14053A440
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x14080F56C (TlgRegisterAggregateProvider.c)
 */

__int64 FsRtlInitSystem2()
{
  return TlgRegisterAggregateProvider(&dword_140C03770);
}
