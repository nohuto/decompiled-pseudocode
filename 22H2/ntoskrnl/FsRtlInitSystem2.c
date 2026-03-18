/*
 * XREFs of FsRtlInitSystem2 @ 0x14053C8E0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x140803364 (TlgRegisterAggregateProvider.c)
 */

__int64 FsRtlInitSystem2()
{
  return TlgRegisterAggregateProvider(&dword_140C03768);
}
