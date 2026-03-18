/*
 * XREFs of FsRtlInitializeDedupChange @ 0x140851024
 * Callers:
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140C5F6A8 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = (__int64)&FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
