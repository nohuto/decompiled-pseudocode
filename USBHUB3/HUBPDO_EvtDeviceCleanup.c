/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C001A4C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C97C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C000CD94 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003EAB4 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C007E300 (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  struct _KEVENT *v3; // r14
  __int64 v4; // rbp
  NTSTATUS v5; // eax
  void *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  PVOID *v10; // rbx
  __int64 v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v3 = *(struct _KEVENT **)(v2 + 24);
  v4 = *(_QWORD *)&v3[1].Header.Lock;
  v23 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v4);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)v3->Header.WaitListHead.Flink[89].Blink,
      2u,
      5u,
      0x5Du,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v5);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
  v6 = *(void **)(v2 + 408);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(v2 + 408) = 0LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      6769LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v22 = *(unsigned int *)&WPP_MAIN_CB.SectorSize;
  if ( (WPP_MAIN_CB.SectorSize & 0x10) == 0 )
  {
    LODWORD(v22) = *(_DWORD *)&WPP_MAIN_CB.SectorSize | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor,
      v22,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v22,
      3,
      (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor);
  }
  v8 = *(void **)(v2 + 416);
  if ( v8 )
  {
    PoUnregisterPowerSettingCallback(v8);
    *(_QWORD *)(v2 + 416) = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v9,
      "DRIPS IO Tag",
      6777LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v10 = (PVOID *)(v2 + 272);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      v12 = PoUnregisterPowerSettingCallback(*v10);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL),
          2u,
          5u,
          0x5Cu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v20);
      }
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v13 = v23;
  if ( (*(_DWORD *)(v2 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v2 + 72, 6006LL, 0LL);
  v21 = 0;
  v14 = *(_QWORD *)&v3->Header.Lock;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          *(_QWORD *)&v3->Header.Lock);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v15,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, char *))(v14 + 560))(*(_QWORD *)(v14 + 248), &v21);
  KeClearEvent(v3 + 66);
  HUBSM_AddEvent((__int64)&v3[21], 4063);
  HUBMISC_WaitForSignal(&v3[66]);
  HUBPDO_BillboardCleanup(v3);
  v16 = *(_QWORD *)&v3->Header.Lock;
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v3->Header.Lock + 568LL))(
    *(_QWORD *)(*(_QWORD *)&v3->Header.Lock + 248LL),
    &v21);
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v17,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v3->Header.WaitListHead.Blink = 0LL;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _KEVENT *))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v18,
    "DSM PDO Tag",
    6838LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v19 = *(void **)(v2 + 56);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x64334855u);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)v19, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v13);
}
