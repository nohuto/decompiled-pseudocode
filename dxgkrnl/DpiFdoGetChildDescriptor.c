/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C0015614
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0015594 (DpiSetTargetAdjustedColorimetry2.c)
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     DpiProcessOpmVmBusRequest @ 0x1C0064504 (DpiProcessOpmVmBusRequest.c)
 *     DpEvalAcpiMethod @ 0x1C01D38B0 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C01E6E20 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02009DC (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C02147C4 (DpiGetMonitorColorimetryOverride.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0218A00 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C021A5E0 (-GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C021A6D0 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0397A98 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C03A4C44 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoPollingWorkItem @ 0x1C03A50C0 (DpiPdoPollingWorkItem.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C03A5B10 (DpiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3480);
  v3 = *(_QWORD **)(a1 + 3480);
  do
  {
    if ( v3 == v2 )
      return 0LL;
    v4 = v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  while ( *((_DWORD *)v4 + 6) != a2 );
  return v4;
}
