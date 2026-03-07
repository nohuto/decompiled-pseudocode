__int64 __fastcall HUBFDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rax
  const void *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  _InterlockedAnd((volatile signed __int32 *)(v2 + 40), 0xFFFDFFFF);
  v3 = (_QWORD *)(v2 + 248);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_START, 0LL, *v3);
  HUBFDO_UnregisterSleepstudyBlockerReasons(v2);
  HUBCONNECTOR_UnMapHubPorts(v2);
  v15 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 560))(*v3, &v15);
  KeResetEvent((PRKEVENT)(v2 + 1152));
  HUBSM_AddHsmEvent(v2, 2035LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v2);
  HUBMISC_WaitForSignal((PVOID)(v2 + 1152), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v2 + 1176);
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 568))(*v3, &v15);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v7,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32),
    0LL);
  v9 = *(_QWORD *)(v2 + 2432);
  if ( *(_QWORD *)(v9 + 8) != v2 + 2432 || (v10 = *(_QWORD **)(v2 + 2440), *v10 != v2 + 2432) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32));
  v11 = *(void **)(v2 + 2552);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x68334855u);
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 2544), 0LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v14) = v6;
    McTemplateK0pq_EtwWriteTransfer(v12, &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_COMPLETE, 0LL, *v3, v14);
  }
  return v6;
}
