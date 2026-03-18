/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C0198444
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001C04C (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C001C200 (DxgkQueryConnectionChanges.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005E510 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00639F0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063D88 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiPdoDispatchIoctl @ 0x1C01982A0 (DpiPdoDispatchIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01AAA60 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01DCED0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C01E2E90 (DpiPdoDispatchPnp.c)
 *     DpiPdoSetDevicePower @ 0x1C01EFA60 (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0201C54 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C039B124 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C039C94C (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C039CB6C (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C03A0098 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C03A07F0 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C03A08E0 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C03A09D0 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C03A0AC0 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C03A0BB0 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C03A1780 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C03A18B0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C03A19C0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C03A1AF0 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C03A1C10 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C03A1DA0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C03A1EC0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C03A2194 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C03A23A8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C03A3180 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C03A3300 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C03A9F40 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C01984C8 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiReleaseCoreSyncAccessSafe(__int64 a1, char a2)
{
  int v2; // edi
  __int64 v4; // rbx

  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v4 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  LOBYTE(v2) = a2 == 1;
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3912), (unsigned int)(v2 + 1));
  ExReleaseResourceLite((PERESOURCE)(v4 + 3808));
  KeLeaveCriticalRegion();
  return 0LL;
}
