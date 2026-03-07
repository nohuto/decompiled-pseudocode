void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  _UNKNOWN **v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  _UNKNOWN **v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 RemlockSize; // [rsp+28h] [rbp-19h]
  __int64 RemlockSizea; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-11h]
  NTSTATUS v15; // [rsp+30h] [rbp-11h]
  int v16; // [rsp+30h] [rbp-11h]
  __int16 v17; // [rsp+38h] [rbp-9h]
  __int16 v18; // [rsp+38h] [rbp-9h]
  __int16 v19; // [rsp+40h] [rbp-1h]
  __int16 v20; // [rsp+40h] [rbp-1h]
  _QWORD v21[3]; // [rsp+48h] [rbp+7h] BYREF
  int v22; // [rsp+60h] [rbp+1Fh] BYREF
  __int128 v23; // [rsp+64h] [rbp+23h]
  int v24; // [rsp+74h] [rbp+33h]
  int v25; // [rsp+78h] [rbp+37h]
  int v26; // [rsp+7Ch] [rbp+3Bh]
  __int64 v27; // [rsp+80h] [rbp+3Fh]
  __int64 v28; // [rsp+88h] [rbp+47h]
  void *v29; // [rsp+90h] [rbp+4Fh]
  __int64 v30; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v30 = 0LL;
  LODWORD(v23) = 0;
  HIDWORD(v21[0]) = 0;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      11570LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    v24 = 0;
    v28 = 0LL;
    v29 = off_1C006A1C0;
    v23 = 0LL;
    v22 = 56;
    v25 = 1;
    v26 = 1;
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v21[2] = 1LL;
    v21[0] = 24LL;
    v21[1] = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v21,
           &v22,
           &v30);
    if ( v8 >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v30,
                   off_1C006A1C0) = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v30);
    }
    else
    {
      v9 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = v8;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xA5u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v16);
      }
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 24);
        v20 = *(_WORD *)(v10 + 2000);
        v18 = *(_WORD *)(v10 + 1998);
        LOWORD(v14) = *(_WORD *)(v10 + 1996);
        LODWORD(RemlockSizea) = 10;
        McTemplateK0pqhhh_EtwWriteTransfer(
          (__int64)v9,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          (const GUID *)(v10 + 1516),
          *(_QWORD *)(v10 + 24),
          RemlockSizea,
          v14,
          v18,
          v20);
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        11598LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0xA4u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v15);
    }
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      v19 = *(_WORD *)(v6 + 2000);
      v17 = *(_WORD *)(v6 + 1998);
      LOWORD(v14) = *(_WORD *)(v6 + 1996);
      LODWORD(RemlockSize) = 9;
      McTemplateK0pqhhh_EtwWriteTransfer(
        (__int64)v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        (const GUID *)(v6 + 1516),
        *(_QWORD *)(v6 + 24),
        RemlockSize,
        v14,
        v17,
        v19);
    }
  }
}
