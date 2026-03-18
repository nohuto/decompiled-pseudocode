/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C00157F4
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0015774 (DpiSetTargetAdjustedColorimetry2.c)
 *     DxgkQueryConnectionChanges @ 0x1C001C200 (DxgkQueryConnectionChanges.c)
 *     DpiProcessOpmVmBusRequest @ 0x1C0065124 (DpiProcessOpmVmBusRequest.c)
 *     DpEvalAcpiMethod @ 0x1C01DED20 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C01F5740 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020F55C (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0222DA4 (DpiGetMonitorColorimetryOverride.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0226FC0 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0228BA0 (-GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C0228C90 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C039C378 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C03A9514 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoPollingWorkItem @ 0x1C03A9990 (DpiPdoPollingWorkItem.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C03AA3E0 (DpiSetTargetAdjustedColorimetry.c)
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
