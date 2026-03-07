NTSTATUS __fastcall DxgMonitor::MonitorDataStore::WriteData<unsigned long>(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        int a4)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+68h] [rbp+20h] BYREF

  Data = a4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  result = ZwSetValueKey(a2, &DestinationString, 0, 4u, &Data, 4u);
  if ( result < 0 )
    return WdLogSingleEntry1(2LL, result);
  return result;
}
