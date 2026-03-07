__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64); // rax
  int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int DeviceInterfacePath; // ebx
  __int64 i; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  __int16 *v15; // rax
  size_t v16; // r8
  __int64 v17; // r8
  int ActivityIdIrp; // eax
  __int64 v19; // rcx
  size_t *v20; // r8
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+28h] [rbp-50h]
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256);
  Size[0] = 0LL;
  v8 = 0;
  v9 = v5(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C006A198);
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
                          WdfDriverGlobals,
                          a2,
                          a3,
                          &v25,
                          0LL);
  if ( DeviceInterfacePath >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v25, 0xAuLL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_18;
    v8 = *(unsigned __int16 *)v25;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    for ( i = 0LL; ; i = v14 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              i,
              1LL);
      v14 = v13;
      if ( !v13
        || v13 != v10[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v13,
                                   off_1C006A0F8)
                               + 48) == v8 )
      {
        break;
      }
    }
    if ( v14
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v14,
                                    off_1C006A0F8)
                                + 24)
                    + 1632LL) & 2) != 0 )
    {
      memset(v25, 0, a3);
      *(_DWORD *)v25 = v8;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (__int64)&GUID_DEVINTERFACE_USB_HUB,
                              v14,
                              &v26,
                              0LL,
                              v10[315]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_18;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v26,
        &v27);
      v15 = HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)&v27, Size);
      v16 = Size[0];
      *((_DWORD *)v25 + 1) = LODWORD(Size[0]) + 10;
      if ( v16 <= a3 - 8 )
      {
        memmove((char *)v25 + 8, v15, v16);
        v17 = *((unsigned int *)v25 + 1);
LABEL_17:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v17);
        DeviceInterfacePath = 0;
        goto LABEL_18;
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *((_DWORD *)v25 + 1) = 10;
    }
    v17 = 10LL;
    *((_WORD *)v25 + 4) = 0;
    goto LABEL_17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = DeviceInterfacePath;
    WPP_RECORDER_SF_d(v10[315], 2u, 3u, 0x3Eu, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v24);
  }
LABEL_18:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    *(_OWORD *)Size = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v20 = Size;
      LODWORD(v23) = DeviceInterfacePath;
      LODWORD(v22) = v8;
      if ( ActivityIdIrp < 0 )
        v20 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v19,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v20,
        v10[31],
        v22,
        v23);
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
