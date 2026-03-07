__int64 __fastcall HUBPDO_EvtDeviceReleaseHardware(const void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int IsEnabledDeviceUsage; // eax
  __int64 v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  GUID v16; // [rsp+38h] [rbp-30h] BYREF

  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v3 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2176)) >= 0 )
  {
    v16 = *(GUID *)(v3 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x80u);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_START, &v16, *(_QWORD *)(v3 + 24));
  if ( *(_QWORD *)(v2 + 392) )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v2 + 392) = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  *(_BYTE *)v5 = 1;
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFBFFF);
  v15[0] = 0;
  v6 = *(_QWORD *)v3;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v7,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, _BYTE *))(v6 + 560))(*(_QWORD *)(v6 + 248), v15);
  KeClearEvent((PRKEVENT)(v3 + 1584));
  HUBSM_AddDsmEvent(v3, 4099LL);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1584), "Device PDORemoved", a1);
  v8 = *(_QWORD *)v3;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v3 + 568LL))(*(_QWORD *)(*(_QWORD *)v3 + 248LL), v15);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v9,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v11 = *(_DWORD *)(v5 + 32);
  if ( (v11 & 0x400) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFFBFF);
  }
  else
  {
    if ( (v11 & 0x800) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFF7FF);
      HUBREG_DeleteUxdSettings(*(_QWORD *)(v5 + 24), 1LL);
    }
    if ( (*(_DWORD *)(v3 + 1632) & 0x40000) != 0 )
    {
      HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 1416LL), 0LL, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(v3 + 1632), 0xFFFBFFFF);
    }
    if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) != 0 )
      DereferenceDeviceResetInterface((_QWORD *)(v5 + 456));
    IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
    v10 = *(_QWORD *)(v3 + 8);
    if ( !IsEnabledDeviceUsage
      || _bittest((const signed __int32 *)(v10 + 204), 0xBu) && (*(_DWORD *)(v3 + 1636) & 0x200000) == 0 )
    {
      TUNNEL_ReleaseUsb4HostPowerReferenceForPort(v10);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v14) = 0;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_COMPLETE,
      &v16,
      *(_QWORD *)(v3 + 24),
      v14);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFFF7F);
  return 0LL;
}
