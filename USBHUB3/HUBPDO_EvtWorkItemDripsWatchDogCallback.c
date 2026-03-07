void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // r12
  __int64 v2; // r8
  _QWORD *v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  char v14; // bp
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
  PVOID *Handle; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+98h] [rbp+10h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+18h]
  PVOID v31; // [rsp+A8h] [rbp+20h] BYREF

  v31 = 0LL;
  v29 = 0;
  v1 = 1;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C006A1C0);
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
    goto LABEL_42;
  }
  v8 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v29, v5, v2);
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
    goto LABEL_42;
  }
  if ( !v29 )
  {
    v7 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0xACu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    goto LABEL_42;
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
    goto LABEL_42;
  }
  v13 = MEMORY[0xFFFFF78000000014]
      - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v9 + 584LL))(*(_QWORD *)(*v9 + 248LL), v9[3]);
  if ( v13 < 300000000 )
  {
    v30 = *(unsigned int *)&WPP_MAIN_CB.SectorSize;
    if ( (WPP_MAIN_CB.SectorSize & 0x10) == 0 )
    {
      LODWORD(v30) = *(_DWORD *)&WPP_MAIN_CB.SectorSize | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor,
        v30,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v30,
        3,
        (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor);
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
LABEL_26:
          v6 = *(unsigned int *)&WPP_MAIN_CB.SectorSize;
          v30 = *(unsigned int *)&WPP_MAIN_CB.SectorSize;
          if ( (WPP_MAIN_CB.SectorSize & 0x10) == 0 )
          {
            LODWORD(v30) = *(_DWORD *)&WPP_MAIN_CB.SectorSize | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor,
              v30,
              3);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v30,
              3,
              (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor);
          }
          v7 = v14 != 0 ? 11 : 5;
          goto LABEL_42;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xAEu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v15);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = v13;
      WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v10, v11, v12, (int)Handle);
    }
    goto LABEL_26;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 1, 0) )
  {
    v30 = *(unsigned int *)&WPP_MAIN_CB.SectorSize;
    if ( (WPP_MAIN_CB.SectorSize & 0x10) == 0 )
    {
      LODWORD(v30) = *(_DWORD *)&WPP_MAIN_CB.SectorSize | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor,
        v30,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v30,
        3,
        (__int64)&Feature_UsbHubDripsWatchdogSurpriseRemove__private_descriptor);
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
            &v31);
    if ( v18 >= 0 )
    {
      *(_QWORD *)(v4 + 408) = v31;
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
LABEL_42:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_QWORD *)(v4 + 24);
    LODWORD(v28) = *(unsigned __int16 *)(v20 + 2000);
    LODWORD(v27) = *(unsigned __int16 *)(v20 + 1998);
    LODWORD(v26) = *(unsigned __int16 *)(v20 + 1996);
    WPP_RECORDER_SF_DDDLd(
      *(_QWORD *)(*(_QWORD *)(v20 + 8) + 1432LL),
      v1,
      *(unsigned __int16 *)(v20 + 2000),
      *(unsigned __int16 *)(v20 + 1998),
      (int)Handle);
  }
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v21 = *(_QWORD *)(v4 + 24);
    LOWORD(v28) = *(_WORD *)(v21 + 2000);
    LOWORD(v27) = *(_WORD *)(v21 + 1998);
    LOWORD(v26) = *(_WORD *)(v21 + 1996);
    LODWORD(Handle) = v7;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v21 + 1516),
      *(_QWORD *)(v21 + 24),
      Handle,
      v26,
      v27,
      v28);
  }
  if ( v7 != 1 )
  {
    if ( v7 == 12 )
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
        goto LABEL_53;
      v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO;
    }
    else
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) == 0 )
        goto LABEL_53;
      v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING;
    }
    v23 = *(_QWORD *)(v4 + 24);
    LOWORD(v28) = *(_WORD *)(v23 + 2000);
    LOWORD(v27) = *(_WORD *)(v23 + 1998);
    LOWORD(v26) = *(_WORD *)(v23 + 1996);
    LODWORD(Handle) = v7;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      v22,
      (const GUID *)(v23 + 1516),
      *(_QWORD *)(v23 + 24),
      Handle,
      v26,
      v27,
      v28);
  }
LABEL_53:
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
