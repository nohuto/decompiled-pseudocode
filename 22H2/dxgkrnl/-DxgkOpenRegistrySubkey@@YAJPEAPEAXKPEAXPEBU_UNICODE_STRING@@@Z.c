/*
 * XREFs of ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C000D700
 * Callers:
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C01D67E0 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 *     _pLoadAdditinalMode @ 0x1C01D6DA4 (_pLoadAdditinalMode.c)
 *     MonitorInitializeGlobal @ 0x1C020A038 (MonitorInitializeGlobal.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C020CFC0 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020D180 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C020DADC (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?OpenGlobalGraphicsDriverKey@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C0222030 (-OpenGlobalGraphicsDriverKey@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0223C84 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkOpenRegistrySubkey(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 )
    return -1073741811;
  *(&v5.Length + 1) = 0;
  memset(&v5.Attributes + 1, 0, 20);
  v5.RootDirectory = a3;
  v5.Length = 48;
  v5.Attributes = 576;
  v5.ObjectName = a4;
  return ZwOpenKey(a1, a2, &v5);
}
