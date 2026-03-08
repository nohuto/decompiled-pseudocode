/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001BDEC (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0062DD0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchIoctl @ 0x1C01804E0 (DpiPdoDispatchIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C01D5FF0 (DpiPdoDispatchPnp.c)
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01E1214 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F3380 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0396844 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C039806C (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C039828C (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C039BF10 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C039C000 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C039C0F0 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C039C1E0 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C039C2D0 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C039CEA0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C039CFD0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C039D0E0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C039D210 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C039D330 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C039D4C0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C039D5E0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C039D8B4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C039DAC8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C039E8A0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C039EA20 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C03A5670 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01801F4 (DxgkAcquireAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C0180CF0 (DpiIsPowerRuntimeDStateTransition.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v5 + 64);
  if ( *(_BYTE *)(v6 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v5 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3808), 1u);
  LODWORD(v8) = 3;
  if ( *(_DWORD *)(v6 + 236) == 6 || *(_DWORD *)(v6 + 240) == 6 || (v9 = *(unsigned int *)(v6 + 4000), (_DWORD)v9 == 3) )
  {
    v19 = -1073741810LL;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v2 + 16) != 1953656900
    || *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 && *(_DWORD *)(v2 + 20) != 6 )
  {
    v4 = -1073741637;
    v21 = *(_QWORD *)(v2 + 24);
    v19 = -1073741637LL;
    v20 = 2LL;
LABEL_35:
    WdLogSingleEntry2(v20, v21, v19);
    if ( *(_BYTE *)(v6 + 482) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite((PERESOURCE)(v6 + 3808));
    KeLeaveCriticalRegion();
    return v4;
  }
  if ( !(unsigned __int8)DpiIsPowerRuntimeDStateTransition(v6, v9, v7, 3LL)
    && ((_DWORD)v10 == 1 || *(_DWORD *)(v6 + 284) != 1)
    || !*(_QWORD *)(v6 + 3912) )
  {
    v19 = -1073741661LL;
LABEL_33:
    v20 = (unsigned int)v8;
    goto LABEL_34;
  }
  if ( (unsigned __int8)DpiIsPowerRuntimeDStateTransition(v11, v10, v12, v8)
    && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304400) )
  {
    v19 = -1073741661LL;
    v20 = 3LL;
LABEL_34:
    v4 = v19;
    v21 = *(_QWORD *)(v6 + 24);
    goto LABEL_35;
  }
  v15 = *(_QWORD *)(v6 + 3912);
  if ( a2 == 1 )
  {
    DxgkAcquireAdapterCoreSync(v15, 2, v14);
  }
  else
  {
    v22 = -1;
    v23 = 0LL;
    if ( (qword_1C013A870 & 2) != 0 )
    {
      v24 = 1;
      v22 = 1009;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerEnter, v14, 1009);
    }
    else
    {
      v24 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 1009);
    if ( v15 )
    {
      DXGADAPTER::AcquireCoreSync(v15, 1LL);
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
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
  }
  return v4;
}
