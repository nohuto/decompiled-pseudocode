/*
 * XREFs of HUBFDO_EvtDeviceD0Entry @ 0x1C000D350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage @ 0x1C000CE58 (Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000CF08 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C0041C84 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     SleepstudyHelper_ComponentActive @ 0x1C0043DB4 (SleepstudyHelper_ComponentActive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  PVOID *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rax
  NTSTATUS v10; // eax
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  char v14; // r14
  int v15; // eax
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rbx
  int v20; // edx
  PVOID *Handle; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+28h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v3 = v2;
  *(_DWORD *)(v2 + 2600) = 1;
  _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x20000u);
  if ( (*(_DWORD *)(v2 + 44) & 0x10) != 0 && !*(_BYTE *)(v2 + 240) && (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v4 = (PVOID *)(v2 + 2640);
    if ( !*(_QWORD *)(v2 + 2640) )
    {
      v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                      WdfDriverGlobals,
                                      a1);
      v6 = PoRegisterPowerSettingCallback(
             v5,
             &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
             HUBFDO_IdleResiliencyCallback,
             (PVOID)v3,
             v4);
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               a1,
               0LL,
               HUBFDO_IdleResiliencyCallback,
               1656,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(v8, (unsigned int)v7, 0LL, "WdfDeviceStopIdle failed");
          PoUnregisterPowerSettingCallback(*v4);
          *v4 = 0LL;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 2520),
          2u,
          3u,
          0x2Au,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
          v6);
      }
    }
  }
  if ( (unsigned int)Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage()
    && (!*(_BYTE *)(v3 + 240) || (*(_DWORD *)(v3 + 44) & 0x100) != 0)
    && !*(_QWORD *)(v3 + 2768) )
  {
    v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    a1);
    v10 = PoRegisterPowerSettingCallback(
            v9,
            &GUID_LOW_POWER_EPOCH,
            HUBFDO_LowPowerEpochCallback,
            (PVOID)v3,
            (PVOID *)(v3 + 2768));
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x2Bu,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v23);
    }
  }
  if ( !*(_QWORD *)(v3 + 2560) && (*(_DWORD *)(v3 + 40) & 0x4000000) != 0 )
  {
    v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                     WdfDriverGlobals,
                                     a1);
    v12 = PoRegisterPowerSettingCallback(
            v11,
            &GUID_USB_SETTING_SELECTIVE_SUSPEND,
            HUBFDO_PowerSettingCallback,
            (PVOID)v3,
            (PVOID *)(v3 + 2560));
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 2520),
          2u,
          3u,
          0x2Cu,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
          v23);
      }
      *(_QWORD *)(v3 + 2560) = 0LL;
    }
  }
  v13 = 0;
  v14 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v13 = EtwActivityIdControl(3u, (LPGUID)(v3 + 2276));
    if ( v13 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v3 + 816), v3 + 2276);
      v14 = 1;
    }
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) != 0 && *(_QWORD *)(v3 + 2616) )
    SleepstudyHelper_ComponentActive();
  if ( (*(_DWORD *)(v3 + 44) & 1) != 0 && *(_QWORD *)(v3 + 2624) )
    SleepstudyHelper_ComponentActive();
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v16 = v15;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v17 = *(_DWORD *)(v3 + 40) >> 10;
    LOWORD(v17) = (*(_DWORD *)(v3 + 40) & 0x400) != 0;
    LODWORD(v23) = v15;
    LODWORD(Handle) = 1;
    McTemplateK0pqqh_EtwWriteTransfer(
      v17,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_START,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v23,
      v17);
  }
  if ( !v16 )
  {
    v19 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v20 = 2007;
    goto LABEL_43;
  }
  if ( v16 == 2 || v16 == 3 || v16 == 4 || (v18 = (unsigned int)(v16 - 5), (unsigned int)v18 <= 1) )
  {
    v19 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v20 = 2011;
LABEL_43:
    HUBSM_AddEvent(v3 + 1264, v20);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    HUBMISC_WaitForSignal(v19);
    v13 = *(_DWORD *)(v3 + 1176);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v23) = v16;
    LODWORD(Handle) = v13;
    McTemplateK0pqq_EtwWriteTransfer(
      v18,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_COMPLETE,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v23);
  }
  if ( v14 == 1 )
    *(_OWORD *)(v3 + 2276) = 0LL;
  return (unsigned int)v13;
}
