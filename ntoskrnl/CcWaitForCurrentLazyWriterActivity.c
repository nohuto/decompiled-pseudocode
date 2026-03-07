NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition(
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcWaitForCurrentLazyWriterActivityHelper,
    (__int64)&v1,
    0,
    0);
  return v1;
}
