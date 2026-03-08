/*
 * XREFs of ?IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ @ 0x1C01FFB74
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x1C01D4D7C (-OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z.c)
 */

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
