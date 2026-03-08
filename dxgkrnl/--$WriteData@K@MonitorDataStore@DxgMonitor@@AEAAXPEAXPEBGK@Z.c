/*
 * XREFs of ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C03CA404
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1C03C4C70 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBG_N@Z @ 0x1C03CA740 (-WriteBool@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBG_N@Z.c)
 *     ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C03CA760 (-WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ?WriteDWord@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBGK@Z @ 0x1C03CA7D0 (-WriteDWord@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBGK@Z.c)
 *     ?WriteDWord@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBGK@Z @ 0x1C03CA7F0 (-WriteDWord@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBGK@Z.c)
 * Callees:
 *     <none>
 */

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
