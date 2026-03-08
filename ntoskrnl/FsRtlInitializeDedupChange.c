/*
 * XREFs of FsRtlInitializeDedupChange @ 0x14084DBE4
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140C5F248 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = (__int64)&FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
