char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        _DWORD *a4)
{
  NTSTATUS v6; // eax
  __int64 v8; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v12; // [rsp+4Ch] [rbp-2Ch]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ResultLength = 0;
  v6 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
  if ( v6 == -1073741772 )
    return 0;
  if ( v6 < 0 )
  {
    v8 = v6;
LABEL_9:
    WdLogSingleEntry1(2LL, v8);
    return 0;
  }
  if ( v12 != 4 || v13 != 4 )
  {
    v8 = -1073741823LL;
    goto LABEL_9;
  }
  *a4 = v14;
  return 1;
}
