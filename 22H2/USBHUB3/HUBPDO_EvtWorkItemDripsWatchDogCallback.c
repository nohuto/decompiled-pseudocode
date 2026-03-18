/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C007F410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C00142E8 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C0014948 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C0014B6C (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C00877F0 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // r12
  __int64 v2; // r8
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  NTSTATUS v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS v18; // edx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r9
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  PVOID *Handle; // [rsp+20h] [rbp-40h]
  int Handlea; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int64 v29; // [rsp+38h] [rbp-28h]
  PVOID v30; // [rsp+50h] [rbp-10h] BYREF
  int v31; // [rsp+A8h] [rbp+48h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  int v33; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0LL;
  v31 = 0;
  v1 = 1;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C00691C0);
  v4 = *(_QWORD *)(*v3 + 64LL);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(unsigned int *)(v5 + 1632);
  if ( (v6 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        4u,
        2u,
        0xAAu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    v7 = 1;
    goto LABEL_45;
  }
  v8 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v31, v5, v2);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0xABu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v8);
    v7 = 2;
    goto LABEL_45;
  }
  if ( !v31 )
  {
    v7 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0xACu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    goto LABEL_45;
  }
  v9 = *(_QWORD **)(v4 + 24);
  if ( (*((_DWORD *)v9 + 411) & 0x800000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(v9[1] + 1432LL),
        3u,
        2u,
        0xADu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    v7 = 4;
    goto LABEL_45;
  }
  v10 = MEMORY[0xFFFFF78000000014]
      - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v9 + 584LL))(*(_QWORD *)(*v9 + 248LL), v9[3]);
  if ( v10 < 300000000 )
  {
    v32 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         (volatile signed __int32 *)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_reporting,
                         0xE9742Au,
                         0LL,
                         0,
                         2u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(15299626LL, &Feature_PLDRRecovery_logged_traits, 0LL, 1LL, &v32, 0LL, 0, 1LL);
    }
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 404), 1, 0);
    if ( !v14 )
    {
      v15 = PoRegisterPowerSettingCallback(
              0LL,
              &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
              (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencyCallback,
              *(PVOID *)(v4 + 24),
              (PVOID *)(v4 + 416));
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v4);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v16,
          "DRIPS IO Tag",
          11865LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 404), 0, 1);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_27:
          v33 = 3;
          if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                               (volatile signed __int32 *)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_reporting,
                               0xE9742Au,
                               0LL,
                               0,
                               2u)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            LOBYTE(v28) = 0;
            g_wil_details_pfnFeatureLoggingHook(
              15299626LL,
              &Feature_PLDRRecovery_logged_traits,
              0LL,
              1LL,
              &v33,
              0LL,
              v28,
              1LL);
          }
          v7 = v14 != 0 ? 11 : 5;
          goto LABEL_45;
        }
        LODWORD(v27) = v15;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xAEu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v27);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = v10;
      WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v11, v12, v13, Handlea);
    }
    goto LABEL_27;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 1, 0) )
  {
    v33 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         (volatile signed __int32 *)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_reporting,
                         0xE9742Au,
                         0LL,
                         0,
                         2u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(15299626LL, &Feature_PLDRRecovery_logged_traits, 0LL, 1LL, &v33, 0LL, 0, 1LL);
    }
    DbgkWerCaptureLiveKernelDump(L"UsbDripsBlockerSurpriseRemoval", 421LL, *v3, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
      WdfDriverGlobals,
      v17,
      2LL);
    v7 = 12;
  }
  else
  {
    v18 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
            *(PVOID *)(v4 + 24),
            &v30);
    if ( v18 >= 0 )
    {
      *(_QWORD *)(v4 + 408) = v30;
      v19 = IoRequestDeviceRemovalForReset(*v3, 0LL);
      if ( v19 >= 0 )
      {
        v1 = 0;
        v7 = 0;
      }
      else
      {
        PoUnregisterPowerSettingCallback(*(PVOID *)(v4 + 408));
        *(_QWORD *)(v4 + 408) = 0LL;
        _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
            2u,
            2u,
            0xB2u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            v19);
        v7 = 8;
      }
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xB1u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v18);
      v7 = 7;
    }
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_QWORD *)(v4 + 24);
    LODWORD(v29) = *(unsigned __int16 *)(v20 + 2000);
    LODWORD(v28) = *(unsigned __int16 *)(v20 + 1998);
    LODWORD(v27) = *(unsigned __int16 *)(v20 + 1996);
    WPP_RECORDER_SF_DDDLd(
      *(_QWORD *)(*(_QWORD *)(v20 + 8) + 1432LL),
      v1,
      *(unsigned __int16 *)(v20 + 2000),
      *(unsigned __int16 *)(v20 + 1998),
      (int)Handle);
  }
  if ( (WPP_MAIN_CB.Queue.Wcb.NumberOfChannels & 0x2000000) != 0 )
  {
    v21 = *(_QWORD *)(v4 + 24);
    LOWORD(v29) = *(_WORD *)(v21 + 2000);
    LOWORD(v28) = *(_WORD *)(v21 + 1998);
    LOWORD(v27) = *(_WORD *)(v21 + 1996);
    LODWORD(Handle) = v7;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v21 + 1516),
      *(_QWORD *)(v21 + 24),
      Handle,
      v27,
      v28,
      v29);
  }
  if ( v7 != 1 )
  {
    if ( v7 == 12 )
    {
      if ( (WPP_MAIN_CB.Queue.Wcb.NumberOfChannels & 0x4000000) == 0 )
        goto LABEL_56;
      v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO;
    }
    else
    {
      if ( (WPP_MAIN_CB.Queue.Wcb.NumberOfChannels & 0x8000000) == 0 )
        goto LABEL_56;
      v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING;
    }
    v23 = *(_QWORD *)(v4 + 24);
    LOWORD(v29) = *(_WORD *)(v23 + 2000);
    LOWORD(v28) = *(_WORD *)(v23 + 1998);
    LOWORD(v27) = *(_WORD *)(v23 + 1996);
    LODWORD(Handle) = v7;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      v22,
      (const GUID *)(v23 + 1516),
      *(_QWORD *)(v23 + 24),
      Handle,
      v27,
      v28,
      v29);
  }
LABEL_56:
  if ( v1 )
  {
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v24,
      "DRIPS SR Tag",
      12018LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 424), "DRIPS SR Tag", 0x20u);
}
