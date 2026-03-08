/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x14084DBB0
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C5F1C8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140C5F1D0);
}
