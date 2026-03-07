NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140C5F248 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = (__int64)&FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
