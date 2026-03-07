__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // r9
  int v9; // eax
  int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // ebx
  NTSTATUS i; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  NTSTATUS v20; // eax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // edx
  int v29; // r9d
  int v30; // r9d
  char *v31; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  void *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+ACh] [rbp-54h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  __int64 (__fastcall *v44)(__int64, __int64); // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  unsigned int *v46; // [rsp+C8h] [rbp-38h]
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F4h] [rbp-Ch]
  __int128 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v52; // [rsp+108h] [rbp+8h]
  __int128 v53; // [rsp+118h] [rbp+18h]
  void *v54; // [rsp+128h] [rbp+28h]
  _QWORD v55[6]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v56; // [rsp+160h] [rbp+60h]
  _QWORD v57[18]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v58[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v59; // [rsp+220h] [rbp+120h]
  GUID v60; // [rsp+230h] [rbp+130h] BYREF
  __int64 v61; // [rsp+240h] [rbp+140h]
  char v62; // [rsp+250h] [rbp+150h] BYREF
  char v63; // [rsp+2A0h] [rbp+1A0h] BYREF

  v34 = a1;
  v46 = a4;
  LODWORD(v40) = 0;
  LODWORD(v54) = 0;
  v61 = 0LL;
  v49 = 0;
  v42 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v62;
  v43 = 0;
  v36.Buffer = (wchar_t *)&v63;
  LODWORD(v45) = 0;
  HIDWORD(v55[0]) = 0;
  *(_QWORD *)&v56 = 0LL;
  v37 = 0LL;
  DWORD2(v56) = 0;
  v7 = 0;
  v38 = 0LL;
  *(_QWORD *)&DestinationString.Length = 5242880LL;
  v39 = 0LL;
  *(_QWORD *)&v36.Length = 5242880LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v60 = 0LL;
  memset(v58, 0, sizeof(v58));
  v59 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(v57, 0, sizeof(v57));
  v57[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v57[0]) = 144;
  v57[6] = Controller_WdfEvtDeviceReleaseHardware;
  v57[15] = Controller_WdfEvtDeviceUsageNotification;
  v57[1] = Controller_WdfEvtDeviceD0Entry;
  v57[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v57[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v57[3] = Controller_WdfEvtDeviceD0Exit;
  v57[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v57[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 440))(WdfDriverGlobals, a1, v57);
  v55[0] = 64LL;
  v55[1] = Controller_WdfEvtDeviceArmWakeFromS0;
  v56 = 0LL;
  v55[2] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v55[3] = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v55[4] = Controller_WdfEvtDeviceArmWakeFromSx;
  v55[5] = Controller_WdfEvtDeviceDisarmWakeFromSx;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 448))(
    WdfDriverGlobals,
    v34,
    v55);
  v44 = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  v42 = 0LL;
  v43 = 0;
  v45 = 0LL;
  v41 = 32;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01023 + 1024))(WdfDriverGlobals, v34, &v41);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 3440))(
    WdfDriverGlobals,
    v34,
    2LL);
  v33 = 2;
  LOBYTE(v8) = 22;
  v31 = &v33;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 584))(
         WdfDriverGlobals,
         v34,
         Controller_WdfEvtPreprocessSetPowerIrp,
         v8);
  v12 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v29 = 35;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v31) = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01023 + 584))(
           WdfDriverGlobals,
           v34,
           Controller_EvtIoInternalDeviceControl,
           v11);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v29 = 36;
LABEL_21:
      v32 = v9;
      goto LABEL_46;
    }
  }
  *((_QWORD *)&v47 + 1) = Controller_EvtDeviceFileCreate;
  LODWORD(v47) = 40;
  *(_QWORD *)&v38 = 0LL;
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = Controller_EvtDeviceFileClose;
  v40 = off_1C00633B0;
  v37 = 0LL;
  v49 = 0;
  v50 = -2147483644;
  v39 = 0LL;
  LODWORD(v37) = 56;
  *((_QWORD *)&v38 + 1) = 0x100000001LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int128 *))(WdfFunctions_01023 + 568))(
    WdfDriverGlobals,
    v34,
    &v47,
    &v37);
  v40 = off_1C00633D8;
  *(_QWORD *)&v37 = 56LL;
  *((_QWORD *)&v37 + 1) = Device_WdfEvtCleanupCallback;
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 0x100000001LL;
  v39 = 0LL;
  for ( i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
        ;
        i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v7) )
  {
    v12 = i;
    if ( i < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v29 = 37;
      v32 = i;
LABEL_46:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a2, v10, 4, v29, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v32);
      goto LABEL_47;
    }
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 536))(
            WdfDriverGlobals,
            v34,
            &DestinationString);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 38;
        goto LABEL_29;
      }
LABEL_47:
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
      goto LABEL_18;
    }
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01023 + 544))(
            WdfDriverGlobals,
            v34,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 39;
LABEL_29:
        v32 = v14;
        goto LABEL_46;
      }
      goto LABEL_47;
    }
    *(_QWORD *)&v52 = 0LL;
    *((_QWORD *)&v52 + 1) = 0x100000001LL;
    v54 = off_1C0063090;
    v51 = 0LL;
    LODWORD(v51) = 56;
    v53 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01023 + 576))(
      WdfDriverGlobals,
      v34,
      &v51);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, _QWORD *))(WdfFunctions_01023 + 600))(
            WdfDriverGlobals,
            &v34,
            &v37,
            a3);
    v12 = v14;
    if ( v14 != -1073741771 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(a2, v10, 4, 40, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v7);
    }
    ++v7;
  }
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v29 = 41;
    goto LABEL_29;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_1C00633D8);
  *(_QWORD *)(v15 + 16) = a2;
  *(_QWORD *)(v15 + 88) = *a3;
  Device_QueryCapabilities(v15);
  if ( !Device_IsSecureDevice(v15) )
  {
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      1LL,
      v16);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      2LL,
      v17);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      3LL,
      v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      4LL,
      v19);
  }
  v20 = RtlUnicodeStringPrintf(&v36, L"%ws%d", L"\\DosDevices\\HCD", v7);
  v12 = v20;
  if ( v20 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v30 = 42;
LABEL_32:
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_d(a2, v21, 4, v30, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v20);
    goto LABEL_18;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01023 + 640))(
          WdfDriverGlobals,
          *a3,
          &v36);
  v12 = v20;
  if ( v20 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v30 = 43;
    goto LABEL_32;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_S(a2, v21, v22, 44, (_DWORD)v31, (__int64)v36.Buffer);
  }
  v23 = *a3;
  v60 = GUID_BUS_TYPE_USB;
  v61 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01023 + 680))(WdfDriverGlobals, v23, &v60);
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01023 + 616))(
          WdfDriverGlobals,
          *a3,
          &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
          0LL);
  v12 = v20;
  if ( v20 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v30 = 45;
    goto LABEL_32;
  }
  v24 = *a3;
  HIDWORD(v59) = -1;
  LODWORD(v58[0]) = 48;
  *(__m128i *)((char *)v58 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)((char *)&v58[1] + 4) = 0x200000002LL;
  LODWORD(v59) = 2;
  *(_QWORD *)((char *)&v59 + 4) = 0xFFFFFFFF00000002uLL;
  HIDWORD(v58[1]) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 664))(
    WdfDriverGlobals,
    v24,
    v58);
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a3);
  v26 = PoDirectedDripsSetDeviceFlags(v25, 2LL);
  v12 = v26;
  if ( v26 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_d(a2, v27, 4, 46, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v26);
    }
    v12 = 0;
  }
LABEL_18:
  *v46 = v7;
  return v12;
}
