/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x1C01E70A8
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0062DD0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064210 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064390 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C01D5FF0 (DpiPdoDispatchPnp.c)
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 *     DpiPdoIsChildConnected @ 0x1C01E6E20 (DpiPdoIsChildConnected.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0200E78 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C02014BC (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C0201694 (DpiGetMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C039828C (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A1FD4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    if ( a2 == 1 || a2 == 2 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    else
    {
      v3 = a2;
      WdLogSingleEntry1(2LL, a2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DDI synchronization level 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
