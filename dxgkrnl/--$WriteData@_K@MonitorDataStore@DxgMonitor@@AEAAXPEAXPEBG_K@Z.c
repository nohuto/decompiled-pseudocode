NTSTATUS DxgMonitor::MonitorDataStore::WriteData<unsigned __int64>(__int64 a1, void *a2, const WCHAR *a3, ...)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  result = ZwSetValueKey(a2, &DestinationString, 0, 0xBu, va, 8u);
  if ( result < 0 )
    return WdLogSingleEntry1(2LL, result);
  return result;
}
