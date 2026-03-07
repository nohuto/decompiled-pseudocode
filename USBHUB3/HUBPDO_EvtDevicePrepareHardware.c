__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  _QWORD *v3; // r12
  __int64 v4; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v6; // r10
  BOOL v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int DeviceInterfacePath; // eax
  unsigned __int16 v13; // r9
  _QWORD *v14; // r14
  int DeviceResetInterface; // eax
  __int64 v16; // rdx
  int v17; // eax
  wchar_t *Pool2; // rax
  wchar_t *v19; // r14
  void *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r15
  int v23; // eax
  int v24; // edi
  int v25; // r11d
  int v26; // ecx
  int v27; // r10d
  int v28; // r9d
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r9
  char v32; // r14
  bool v33; // zf
  const char *v34; // rbx
  __int16 v35; // r15
  char v36; // r10
  const char *v37; // rdx
  char v38; // r11
  const char *v39; // rcx
  __int64 v40; // r13
  char v41; // di
  __int64 v42; // r8
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // r14
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // r10
  unsigned int v49; // edx
  ULONG v51[2]; // [rsp+28h] [rbp-180h]
  PEVENT_DATA_DESCRIPTOR v52; // [rsp+30h] [rbp-178h]
  __int64 v53; // [rsp+38h] [rbp-170h]
  __int64 v54; // [rsp+40h] [rbp-168h]
  int v55; // [rsp+48h] [rbp-160h]
  char v56; // [rsp+78h] [rbp-130h]
  char v57[4]; // [rsp+128h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+130h] [rbp-78h] BYREF
  __int64 v60; // [rsp+138h] [rbp-70h] BYREF
  int v61; // [rsp+140h] [rbp-68h]
  int v62; // [rsp+144h] [rbp-64h]
  int v63; // [rsp+148h] [rbp-60h]
  int v64; // [rsp+14Ch] [rbp-5Ch]
  int v65; // [rsp+150h] [rbp-58h]
  int v66; // [rsp+154h] [rbp-54h]
  __int64 v67; // [rsp+158h] [rbp-50h] BYREF
  __int64 v68; // [rsp+160h] [rbp-48h] BYREF
  int v69; // [rsp+168h] [rbp-40h]
  int v70; // [rsp+16Ch] [rbp-3Ch]
  PVOID P; // [rsp+170h] [rbp-38h]
  __int64 v72; // [rsp+178h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+180h] [rbp-28h] BYREF
  const wchar_t *v74; // [rsp+190h] [rbp-18h]
  __int128 v75; // [rsp+198h] [rbp-10h] BYREF
  __int64 v76; // [rsp+1A8h] [rbp+0h]
  __int64 v77; // [rsp+1B0h] [rbp+8h]
  __int128 v78; // [rsp+1B8h] [rbp+10h]
  __int64 v79; // [rsp+1C8h] [rbp+20h]
  void *Src[2]; // [rsp+1D0h] [rbp+28h] BYREF
  __int64 v81; // [rsp+1E0h] [rbp+38h]
  __int64 v82; // [rsp+1E8h] [rbp+40h]
  wchar_t *v83; // [rsp+1F0h] [rbp+48h]
  __int64 v84; // [rsp+1F8h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+208h] [rbp+60h] BYREF
  __int64 *v86; // [rsp+228h] [rbp+80h]
  __int64 v87; // [rsp+230h] [rbp+88h]
  unsigned int *v88; // [rsp+238h] [rbp+90h]
  __int64 v89; // [rsp+240h] [rbp+98h]
  int *v90; // [rsp+248h] [rbp+A0h]
  __int64 v91; // [rsp+250h] [rbp+A8h]
  unsigned int *v92; // [rsp+258h] [rbp+B0h]
  __int64 v93; // [rsp+260h] [rbp+B8h]
  _WORD *v94; // [rsp+268h] [rbp+C0h]
  __int64 v95; // [rsp+270h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+278h] [rbp+D0h] BYREF
  __int64 *v97; // [rsp+298h] [rbp+F0h]
  __int64 v98; // [rsp+2A0h] [rbp+F8h]
  unsigned int *v99; // [rsp+2A8h] [rbp+100h]
  __int64 v100; // [rsp+2B0h] [rbp+108h]
  int *v101; // [rsp+2B8h] [rbp+110h]
  __int64 v102; // [rsp+2C0h] [rbp+118h]
  char *v103; // [rsp+2C8h] [rbp+120h]
  __int64 v104; // [rsp+2D0h] [rbp+128h]
  _WORD *v105; // [rsp+2D8h] [rbp+130h]
  __int64 v106; // [rsp+2E0h] [rbp+138h]
  __int64 *v107; // [rsp+2E8h] [rbp+140h]
  __int64 v108; // [rsp+2F0h] [rbp+148h]
  _WORD v109[8]; // [rsp+2F8h] [rbp+150h] BYREF

  v1 = a1;
  v84 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v3 = *(_QWORD **)(v2 + 24);
  v67 = v2;
  v60 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C006A1E8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, v3[3]);
  if ( !(unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage() )
    TUNNEL_AcquireUsb4HostPowerReferenceForPort(v3[1]);
  _InterlockedOr((volatile signed __int32 *)v3 + 409, 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey((__int64)v3);
  IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
  v6 = v3[1];
  v7 = IsEnabledDeviceUsage != 0;
  v8 = *(_DWORD *)(v6 + 204);
  if ( v7 )
  {
    if ( (v8 & 0x800) != 0 && (*((_DWORD *)v3 + 409) & 0x200000) == 0 )
    {
      if ( (*(_DWORD *)(*v3 + 44LL) & 0x80u) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(v6 + 1432),
            4u,
            5u,
            0x4Fu,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
        _InterlockedOr((volatile signed __int32 *)v3 + 411, 0x80u);
      }
      TUNNEL_AcquireUsb4HostPowerReferenceForPort(v3[1]);
    }
  }
  else if ( (v8 & 0x800) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)v3 + 411, 0x80u);
  }
  if ( (v3[308] & 4) != 0 && (*((_DWORD *)v3 + 617) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 310, 8LL);
    *((_DWORD *)v3 + 617) |= 4u;
  }
  HUBREG_UpdateSqmFlags((__int64)v3);
  if ( (v3[308] & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)&g_MsOs20Flags, 4, 4, (__int64)(v3 + 308));
  HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)L"*,", 4, 4, (__int64)(v3 + 4));
  if ( (v3[204] & 2) != 0 )
  {
    v9 = v3[1];
    if ( *(_BYTE *)(*v3 + 240LL) >= *(_BYTE *)(v9 + 202) )
    {
      *(_DWORD *)(v9 + 1424) = 7;
      WMI_FireNotification(*v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v3[1] + 1432LL),
          2u,
          3u,
          0x50u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      v11 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer(v10, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, v3[3]);
      goto LABEL_122;
    }
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_HUB,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v13 = 81;
      goto LABEL_29;
    }
    v14 = v3 + 267;
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            v1,
                            v3 + 267,
                            0LL,
                            *(_QWORD *)(v3[1] + 1432LL));
    v58 = DeviceInterfacePath;
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v13 = 82;
      goto LABEL_29;
    }
  }
  else
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v13 = 83;
      goto LABEL_29;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            v1,
                            v3 + 267,
                            0LL,
                            *(_QWORD *)(v3[1] + 1432LL));
    v58 = DeviceInterfacePath;
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v13 = 84;
      goto LABEL_29;
    }
    v14 = v3 + 267;
    if ( (*((_DWORD *)v3 + 411) & 0x4000000) != 0 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
      if ( DeviceResetInterface >= 0 )
      {
        v17 = InitializeResetActionWorkItem(v2 + 544, v16, v1);
        v58 = v17;
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v3[1] + 1432LL),
              4u,
              5u,
              0x56u,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
              v17);
          DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            4u,
            5u,
            0x55u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            DeviceResetInterface);
        v11 = 0;
        v58 = 0;
      }
    }
  }
  if ( *v14 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v58 = DeviceInterfacePath;
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_122;
      v13 = 87;
LABEL_29:
      LODWORD(v52) = DeviceInterfacePath;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        2u,
        5u,
        v13,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v52);
      goto LABEL_122;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*((_DWORD *)v3 + 409) & 2) != 0 )
    *(_BYTE *)v2 = 0;
  HUBPDO_GetPortPath(v2, v109);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8)
                  + 4) & 0x1000) != 0 )
  {
    DWORD1(v75) = 0;
    DestinationString = 0LL;
    *(_OWORD *)Src = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *v14 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v14,
        &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v83 = Pool2;
    v19 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, DestinationString.Length + 2LL);
      memmove(v19, DestinationString.Buffer, DestinationString.Length);
    }
    v68 = 0LL;
    v79 = 0LL;
    P = 0LL;
    v76 = 0LL;
    v77 = 0x100000001LL;
    v75 = 0LL;
    LODWORD(v75) = 56;
    v78 = (unsigned __int64)v1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
           WdfDriverGlobals,
           0LL,
           &v75,
           &v68) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           v1,
           v68) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v68,
        Src);
      v20 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      P = v20;
      if ( v20 )
        memmove(v20, Src[1], LOWORD(Src[0]));
    }
    v79 = 0LL;
    v72 = 0LL;
    v76 = 0LL;
    v77 = 0x100000001LL;
    v75 = 0LL;
    LODWORD(v75) = 56;
    v78 = (unsigned __int64)v1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           v1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           &v75,
           &v72) < 0 )
      v74 = 0LL;
    else
      v74 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v72,
                               0LL);
    v21 = *(_QWORD *)(v2 + 16);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    {
      v22 = v3[1];
      v81 = v22;
      v23 = *(_DWORD *)(v22 + 204) >> 1;
      if ( (*(_DWORD *)(v22 + 204) & 2) != 0 )
        v57[0] = *(_BYTE *)(v22 + 1341);
      else
        v57[0] = 0;
      v24 = *(_DWORD *)(v21 + 168);
      v70 = v24;
      if ( v24 == 1 )
      {
        v25 = *(_DWORD *)(v21 + 180);
        v26 = *(_DWORD *)(v21 + 176);
        v27 = *(_DWORD *)(v21 + 196);
        v28 = *(_DWORD *)(v21 + 192);
        v29 = *(_DWORD *)(v21 + 188);
        v59 = *(unsigned __int16 *)(v21 + 184);
        v61 = v25;
        v62 = v26;
        v63 = v27;
        v64 = v28;
        v65 = v29;
      }
      else
      {
        v59 = 0;
        v62 = 0x7FFFFFFF;
        v61 = 0x7FFFFFFF;
        v63 = 0;
        v64 = 0;
        v65 = 0;
      }
      v30 = v3[252];
      v82 = v30;
      if ( v30 )
        v66 = *(unsigned __int16 *)(v30 + 2);
      else
        v66 = 0;
      v31 = *(_QWORD *)(v2 + 24);
      LOBYTE(v23) = v23 & 1;
      v32 = *(_BYTE *)(v21 + 240);
      v33 = v24 == 2;
      v34 = 0LL;
      v35 = *(_WORD *)(v22 + 200);
      v36 = *(_BYTE *)(v31 + 2713);
      v37 = 0LL;
      v38 = *(_BYTE *)(v31 + 2712);
      v39 = 0LL;
      v40 = *v3;
      v41 = ~*(_BYTE *)(v2 + 32);
      v69 = v23;
      if ( v33 )
      {
        v34 = (const char *)(v21 + 186);
        v37 = (const char *)(v21 + 181);
        v39 = (const char *)(v21 + 176);
      }
      v56 = v32 + 1;
      v19 = v83;
      McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
        (__int64)v39,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
        (const GUID *)(v21 + 764),
        *(_QWORD *)(v40 + 248),
        v3[3],
        v35,
        v74,
        v83,
        v55,
        (__int64)v3 + 1988,
        v66,
        v82,
        (const wchar_t *)P,
        v41 & 1,
        v56,
        (__int64)v109,
        v65,
        v64,
        v63,
        v62,
        v61,
        v59,
        *(_DWORD *)(v67 + 384),
        *((_DWORD *)v3 + 556),
        v70,
        v39,
        v37,
        v34,
        v69,
        v57[0],
        *(_QWORD *)(v81 + 1416),
        v38,
        v36,
        *(_DWORD *)(v31 + 2716),
        *(_DWORD *)(v31 + 2720));
      v11 = v58;
      v1 = v84;
      v2 = v67;
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0x64334855u);
    if ( P )
      ExFreePoolWithTag(P, 0x64334855u);
    if ( v68 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 1664))(
        WdfDriverGlobals,
        v68,
        v21);
    if ( v72 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 1664))(
        WdfDriverGlobals,
        v72,
        v21);
  }
  if ( (v3[204] & 6) == 0 )
    WMI_RegisterDevice(v1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C006A1E8)
                + 92) )
  {
    v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v1);
    v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v45 = (_QWORD *)(v2 + 392);
    v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v44);
    v10 = *(_QWORD *)(v60 + 96);
    if ( !qword_1C006DCE8 || (v47 = qword_1C006DCE8(v10, v46, v43, v2 + 392), v47 == -1073741637) )
    {
      *v45 = &SleepstudyHelperUnsupportedHandle;
    }
    else if ( v47 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = v47;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3[1] + 1432LL),
          2u,
          2u,
          0x58u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v52);
      }
      *v45 = 0LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 1636LL) & 2) == 0 )
  {
    HUBPDO_HandlePLDRRecovery(v1, v2, (__int64)v3);
    goto LABEL_122;
  }
  v48 = v3[1];
  if ( *(_BYTE *)(v48 + 1476) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v53) = *((unsigned __int16 *)v3 + 999);
      LODWORD(v52) = *((unsigned __int16 *)v3 + 998);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v48 + 1432),
        4u,
        5u,
        0x59u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v52,
        v53);
    }
    if ( (unsigned int)dword_1C006A1F8 > 4
      && (qword_1C006A208 & 0x400000000001LL) != 0
      && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
    {
      v87 = 8LL;
      v86 = &v60;
      *(_WORD *)v57 = *((_WORD *)v3 + 998);
      v60 = 16779264LL;
      v88 = (unsigned int *)v57;
      LOWORD(v59) = *((_WORD *)v3 + 999);
      v90 = &v59;
      v92 = &v58;
      v94 = v109;
      v89 = 2LL;
      v91 = 2LL;
      LOWORD(v58) = 6;
      v93 = 2LL;
      v95 = 12LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C006A1F8,
        (unsigned __int8 *)dword_1C0065BAA,
        0LL,
        0LL,
        7u,
        &v85);
    }
    *(_BYTE *)(v3[1] + 1476LL) = 0;
  }
  else
  {
    if ( !*(_WORD *)(v48 + 1474) )
      goto LABEL_122;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = *(unsigned __int16 *)(v48 + 1474);
      LODWORD(v53) = *((unsigned __int16 *)v3 + 999);
      LODWORD(v52) = *((unsigned __int16 *)v3 + 998);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v48 + 1432),
        4u,
        v42,
        0x5Au,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v52,
        v53,
        v54);
      v48 = v3[1];
    }
    v49 = dword_1C006A1F8;
    v10 = qword_1C006A210;
    if ( (unsigned int)dword_1C006A1F8 > 4 )
    {
      if ( (qword_1C006A208 & 0x400000000001LL) != 0 && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
      {
        v60 = 16779264LL;
        v97 = &v60;
        LOWORD(v58) = *((_WORD *)v3 + 998);
        v98 = 8LL;
        v99 = &v58;
        LOWORD(v59) = *((_WORD *)v3 + 999);
        v101 = &v59;
        v103 = v57;
        v105 = v109;
        v100 = 2LL;
        v102 = 2LL;
        *(_WORD *)v57 = 6;
        v104 = 2LL;
        v106 = 12LL;
        LODWORD(v67) = *(unsigned __int16 *)(v48 + 1474);
        v107 = &v67;
        v108 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C006A1F8,
          (unsigned __int8 *)dword_1C006550F,
          (const GUID *)(v48 + 1480),
          0LL,
          8u,
          &v96);
        v48 = v3[1];
        v10 = qword_1C006A210;
        v49 = dword_1C006A1F8;
      }
      if ( v49 > 4 && (qword_1C006A208 & 0x400000000001LL) != 0 && (v10 & 0x400000000001LL) == v10 )
      {
        v60 = 16779264LL;
        v86 = &v60;
        LOWORD(v58) = *((_WORD *)v3 + 998);
        v87 = 8LL;
        v88 = &v58;
        LOWORD(v59) = *((_WORD *)v3 + 999);
        v90 = &v59;
        v92 = (unsigned int *)v57;
        v94 = v109;
        v89 = 2LL;
        v91 = 2LL;
        *(_WORD *)v57 = 6;
        v93 = 2LL;
        v95 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C006A1F8,
          (unsigned __int8 *)dword_1C0065979,
          (const GUID *)(v48 + 1480),
          0LL,
          7u,
          &v85);
      }
    }
    *(_OWORD *)(v3[1] + 1480LL) = 0LL;
  }
  *(_WORD *)(v3[1] + 1474LL) = 0;
LABEL_122:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    v51[0] = v11;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE,
      0LL,
      v3[3],
      *(_QWORD *)v51);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v52) = *((_DWORD *)v3 + 411);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      5u,
      0x5Bu,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v52);
  }
  return v11;
}
