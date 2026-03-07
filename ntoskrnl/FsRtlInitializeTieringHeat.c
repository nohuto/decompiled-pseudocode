NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C5F1C8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140C5F1D0);
}
