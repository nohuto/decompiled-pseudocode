/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407C682C
 * Callers:
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C47748 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
