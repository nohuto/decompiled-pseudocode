char __fastcall DxgMonitor::MonitorPnpState::IsOemPanelDriverPresent(DxgMonitor::MonitorPnpState *this)
{
  char v1; // bl
  NTSTATUS v2; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-28h] BYREF

  KeyHandle = 0LL;
  v1 = 1;
  if ( DxgMonitor::MonitorPnpState::OpenMonitorPnpKey((__int64)this, 1, 2, &KeyHandle) < 0 )
  {
    WdLogSingleEntry0(3LL);
LABEL_3:
    v1 = 0;
    goto LABEL_4;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"LowerFilters");
  ResultLength = 0;
  v2 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x13u,
         &ResultLength);
  if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
    goto LABEL_3;
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
