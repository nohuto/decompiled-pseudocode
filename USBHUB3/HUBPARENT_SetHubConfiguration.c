_UNKNOWN **__fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  int v2; // ecx
  PURB v3; // r15
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // rbx
  int v5; // ecx
  int v6; // ecx
  __int64 *v7; // rsi
  struct _USB_INTERFACE_DESCRIPTOR *v8; // rax
  __int64 *v9; // r14
  _UNKNOWN **result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // [rsp+28h] [rbp-A1h]
  __int64 v17; // [rsp+50h] [rbp-79h] BYREF
  __int128 v18; // [rsp+58h] [rbp-71h] BYREF
  __int128 v19; // [rsp+68h] [rbp-61h]
  __int128 v20; // [rsp+78h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-39h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-29h]
  _QWORD v24[9]; // [rsp+B0h] [rbp-19h] BYREF

  LODWORD(v21) = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v24, 0, sizeof(v24));
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0LL;
  v17 = 0LL;
  v4 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1256);
  v5 = v2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_9;
    }
    else
    {
      v7 = (__int64 *)(a1 + 2520);
      v8 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 2,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2520));
      if ( v8 )
        goto LABEL_11;
    }
  }
  v9 = (__int64 *)(a1 + 2520);
  v8 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                             (_DWORD)v4,
                                             (_DWORD)v4,
                                             -1,
                                             -1,
                                             9,
                                             -1,
                                             1,
                                             0LL,
                                             *(_QWORD *)(a1 + 2520));
  v7 = (__int64 *)(a1 + 2520);
  if ( !v8 )
  {
    v8 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v4,
                                               (_DWORD)v4,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               0,
                                               0LL,
                                               *v9);
    if ( !v8 )
    {
      v8 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 -1,
                                                 0LL,
                                                 *v9);
      if ( !v8 )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0xCu,
            (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
        goto LABEL_23;
      }
    }
  }
LABEL_11:
  if ( v8->bInterfaceClass != 9 || !v8->bNumEndpoints )
  {
LABEL_23:
    if ( v17 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2006LL);
  }
  v23 = 0LL;
  InterfaceList.InterfaceDescriptor = v8;
  v3 = USBD_CreateConfigurationRequestEx(v4, &InterfaceList);
  if ( v3 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v12 = *(_QWORD *)(a1 + 16);
    v13 = v11;
    *(_QWORD *)&v19 = 0LL;
    v21 = 0LL;
    v20 = v12;
    v18 = 0LL;
    LODWORD(v18) = 56;
    *((_QWORD *)&v19 + 1) = 0x100000001LL;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v18,
            v11,
            &v17);
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v14;
        WPP_RECORDER_SF_d(*v7, 2u, 3u, 0xEu, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids, v16);
      }
      goto LABEL_23;
    }
    LOBYTE(v24[0]) = 15;
    LODWORD(v24[3]) = 2228227;
    v24[1] = v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v17,
      v24);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), PURB))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v17,
      HUBPARENT_SetHubConfigurationComplete,
      v3);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                            WdfDriverGlobals,
                            v17,
                            v13,
                            0LL);
    if ( !(_BYTE)result )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v17);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v15;
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *v7,
                                2u,
                                3u,
                                0xFu,
                                (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                                v16);
      }
      if ( v15 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(*v7, 2u, 3u, 0xDu, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
  }
  return result;
}
