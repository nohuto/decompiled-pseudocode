__int64 __fastcall HUBPDO_CreatePdoInternal(_QWORD *a1, char a2)
{
  _QWORD *v3; // rbx
  int v4; // r15d
  char v5; // r12
  char v6; // r14
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  unsigned __int16 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  int PdoName; // eax
  unsigned __int16 v21; // r9
  __int64 v22; // r15
  int v23; // edi
  int v24; // eax
  char v25; // cl
  int v26; // eax
  unsigned __int16 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r9
  __int16 v32; // cx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  bool v37; // zf
  __int64 v38; // r8
  int v39; // ecx
  BOOL v40; // eax
  BOOL v41; // eax
  __int64 v42; // rax
  int v43; // eax
  struct _KEVENT *v44; // rax
  int v45; // eax
  __int64 v46; // r8
  int *v47; // rcx
  __int64 v48; // rbx
  unsigned __int16 *v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  unsigned int v52; // edi
  __int64 v53; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  __int64 v56; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v60[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-40h]
  void *v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v64; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v65; // [rsp+F8h] [rbp-10h]
  __int128 v66; // [rsp+108h] [rbp+0h]
  __int128 v67; // [rsp+118h] [rbp+10h] BYREF
  __int64 v68; // [rsp+128h] [rbp+20h]
  __int128 v69; // [rsp+130h] [rbp+28h] BYREF
  __int128 v70; // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v71)(__int64, wchar_t **); // [rsp+150h] [rbp+48h]
  __int64 v72; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v73; // [rsp+160h] [rbp+58h]
  __int128 v74; // [rsp+168h] [rbp+60h] BYREF
  __int128 v75; // [rsp+178h] [rbp+70h]
  __int128 v76; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall *v77)(__int64); // [rsp+198h] [rbp+90h]
  __int64 (__fastcall *v78)(); // [rsp+1A0h] [rbp+98h]
  _QWORD v79[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v80[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v81[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v82[10]; // [rsp+328h] [rbp+220h] BYREF
  __int128 v83; // [rsp+378h] [rbp+270h] BYREF
  __int128 v84; // [rsp+388h] [rbp+280h]
  __int128 v85; // [rsp+398h] [rbp+290h]
  int v86; // [rsp+3A8h] [rbp+2A0h]
  int v87; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v88[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v89; // [rsp+3C8h] [rbp+2C0h]

  v3 = a1;
  v73 = a1;
  memset(v79, 0, 0x8CuLL);
  v74 = 0LL;
  v77 = 0LL;
  v75 = 0LL;
  LODWORD(v78) = 0;
  v76 = 0LL;
  LODWORD(v62) = 0;
  memset(v60, 0, sizeof(v60));
  v61 = 0LL;
  memset(v80, 0, sizeof(v80));
  v72 = 0LL;
  v4 = 0;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  memset(v82, 0, sizeof(v82));
  memset(v81, 0, 0x88uLL);
  v63 = 0LL;
  v5 = 0;
  v71 = 0LL;
  v6 = 0;
  *(_QWORD *)&v66 = 0LL;
  v7 = 0;
  DWORD2(v66) = 0;
  v58 = 0LL;
  LODWORD(v68) = 0;
  v8 = v3[1];
  v69 = 0LL;
  v70 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(v8 + 1336), 0xFFFFFF7F);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)v3 + 409, 2u);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) != 0 && (v3[204] & 0x20) != 0 )
      HUBREG_SetVidPidRevForPort(v3);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v3 + 409, 0xFFFFFFFD);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) == 0 || (v3[204] & 0x20) == 0 )
      WMI_FireNotification(*v3, *(unsigned __int16 *)(v3[1] + 200LL), 0LL);
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
  v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v9);
  if ( !v59 )
  {
    v11 = -1073741670;
    goto LABEL_39;
  }
  v6 = 1;
  memset(v79, 0, sizeof(v79));
  v79[1] = HUBPDO_EvtDeviceD0Entry;
  v79[3] = HUBPDO_EvtDeviceD0Exit;
  v79[5] = HUBPDO_EvtDevicePrepareHardware;
  v79[6] = HUBPDO_EvtDeviceReleaseHardware;
  v79[12] = HUBPDO_EvtDeviceSurpriseRemoval;
  v79[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v79[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v79[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
  v79[17] = HUBPDO_EvtDeviceUsageNotificationEx;
  v79[14] = HUBPDO_EvtDeviceQueryStop;
  v79[13] = HUBPDO_EvtDeviceQueryRemove;
  LODWORD(v79[0]) = 144;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WdfDriverGlobals,
    v59,
    v79);
  v74 = 0x40uLL;
  *((_QWORD *)&v75 + 1) = 0LL;
  *(_QWORD *)&v76 = 0LL;
  *((_QWORD *)&v76 + 1) = HUBPDO_EvtDeviceEnableWakeAtBus;
  v77 = HUBPDO_EvtDeviceDisableWakeAtBus;
  v78 = HUBPDO_EvtDeviceReportedMissing;
  *(_QWORD *)&v75 = HUBPDO_EvtDeviceResourceRequirementsQuery;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 1688))(
    WdfDriverGlobals,
    v59,
    &v74);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
    WdfDriverGlobals,
    v59,
    34LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(WdfDriverGlobals, v59, 0LL);
  LOBYTE(v12) = 15;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v59,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v12,
          0LL,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 117;
    goto LABEL_13;
  }
  LOBYTE(v14) = 14;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v59,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v14,
          0LL,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 118;
    goto LABEL_13;
  }
  v88[0] = 419564552;
  LOBYTE(v16) = 27;
  v88[1] = 336271104;
  v89 = 19;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v59,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v16,
          v88,
          9);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 119;
    goto LABEL_13;
  }
  LOBYTE(v88[0]) = 2;
  LOBYTE(v17) = 22;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v59,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v17,
          v88,
          1);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 120;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v59);
  v63 = 0x100000008LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
    WdfDriverGlobals,
    v59,
    &v63);
  v13 = HUBPDO_AssignPDOIds((__int64)v3, v59);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 121;
LABEL_13:
    LODWORD(v56) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v15,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v56);
    v6 = 1;
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v3 + 409) & 2) == 0 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
            WdfDriverGlobals,
            v59,
            &GUID_DEVCLASS_UNKNOWN);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = v18;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        3u,
        2u,
        0x7Au,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v56);
    }
  }
  *(_QWORD *)&v60[1] = 0LL;
  v62 = off_1C006A0F8;
  *((_QWORD *)&v60[0] + 1) = HUBPDO_EvtDeviceCleanup;
  v61 = 0LL;
  *(_QWORD *)&v60[0] = 56LL;
  *((_QWORD *)&v60[1] + 1) = 0x100000001LL;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v19,
    "DSM PDO Tag",
    8637LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v7 = 1;
  while ( 1 )
  {
    PdoName = HUBPDO_MakePdoName((__int64)v3, v59);
    v11 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 123;
      goto LABEL_37;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                WdfDriverGlobals,
                v59,
                &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v11 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 124;
      goto LABEL_37;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _OWORD *, unsigned __int64 *))(WdfFunctions_01015 + 600))(
                WdfDriverGlobals,
                &v59,
                v60,
                &v58);
    v11 = PdoName;
    if ( PdoName >= 0 )
      break;
    ++v4;
    if ( PdoName != -1073741771 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 125;
        goto LABEL_37;
      }
LABEL_38:
      v6 = v7;
      goto LABEL_39;
    }
  }
  v5 = 1;
  v7 = 0;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v58,
          off_1C006A0F8);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v22 + 424), 0x55535257u, 0, 0, 0x20u);
  memset((void *)(v22 + 456), 0, 0x50uLL);
  *(_BYTE *)(v22 + 536) = 0;
  v23 = *((_DWORD *)v3 + 408);
  if ( (v23 & 2) != 0 )
  {
    memset(v81, 0, 0x88uLL);
    v81[2] = HUBFDO_GetPortStatusForDebuggingComplete;
    LODWORD(v81[0]) = 66388104;
    v81[3] = HUBFDO_GetPortStatusForDebuggingComplete;
    v24 = *((_DWORD *)v3 + 43);
    v25 = *(_BYTE *)(*v3 + 240LL) + 1;
    v81[16] = 0LL;
    LODWORD(v81[6]) = v24;
    v81[5] = v3[3];
    *((_QWORD *)&v64 + 1) = v81;
    LOBYTE(v81[4]) = v25;
    *((_QWORD *)&v65 + 1) = 0LL;
    *(_QWORD *)&v65 = &GUID_HUB_PARENT_INTERFACE;
    *(_QWORD *)&v66 = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
    BYTE5(v81[6]) = (v23 & 0x1000) != 0;
    *(_QWORD *)&v64 = 48LL;
    *((_QWORD *)&v66 + 1) = 1LL;
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
            WdfDriverGlobals,
            v58,
            &v64);
    v11 = v26;
    if ( v26 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 126;
        goto LABEL_46;
      }
      goto LABEL_47;
    }
  }
  *(_QWORD *)&v70 = HUBFDO_GetPortStatusForDebuggingComplete;
  *((_QWORD *)&v65 + 1) = 0LL;
  *((_QWORD *)&v70 + 1) = HUBFDO_GetPortStatusForDebuggingComplete;
  v71 = HUBPDO_GetLocationString;
  *((_QWORD *)&v64 + 1) = &v69;
  *(_QWORD *)&v65 = &GUID_PNP_LOCATION_INTERFACE;
  v66 = 0uLL;
  *(_QWORD *)&v69 = 65576LL;
  *((_QWORD *)&v69 + 1) = v3;
  *(_QWORD *)&v64 = 48LL;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
          WdfDriverGlobals,
          v58,
          &v64);
  v11 = v26;
  if ( v26 >= 0 )
  {
    LOBYTE(v28) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v58,
      1LL,
      v28);
    LOBYTE(v29) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v58,
      2LL,
      v29);
    LOBYTE(v30) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v58,
      3LL,
      v30);
    LOBYTE(v31) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v58,
      4LL,
      v31);
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 16) = *v3;
    v32 = *(_WORD *)(v3[1] + 200LL);
    *(_DWORD *)(v22 + 388) = -1;
    *(_WORD *)(v22 + 48) = v32;
    *(_DWORD *)(v22 + 384) = 5;
    if ( a2 )
      *(_QWORD *)(v22 + 8) = *(_QWORD *)(*v3 + 2448LL);
    else
      *(_BYTE *)v22 = 1;
    v3[2] = v22;
    memset(v80, 0, sizeof(v80));
    LODWORD(v80[0]) = 96;
    BYTE5(v80[1]) = 1;
    *(_QWORD *)((char *)v80 + 4) = 1LL;
    v80[6] = HUBPDO_EvtIoInternalDeviceControl;
    v80[5] = HUBPDO_EvtIoDeviceControl;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
                WdfDriverGlobals,
                v58,
                v80,
                0LL,
                &v72);
    v11 = PdoName;
    if ( PdoName >= 0 )
    {
      v33 = *((_DWORD *)v3 + 408);
      DWORD2(v83) = 2;
      LODWORD(v84) = 2;
      *((_QWORD *)&v84 + 1) = 2LL;
      *(_QWORD *)&v85 = 0x200000002LL;
      *(_QWORD *)&v83 = 0x200000030LL;
      HIDWORD(v83) = ((v33 >> 5) & 1) == 0;
      v34 = v3[1];
      DWORD1(v84) = (v33 >> 6) & 1;
      *((_QWORD *)&v85 + 1) = *(unsigned __int16 *)(v34 + 200) | 0xFFFFFFFF00000000uLL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 664))(
        WdfDriverGlobals,
        v58,
        &v83);
      v35 = 2LL;
      v36 = *v3;
      v37 = (v3[204] & 0x102) == 0;
      LODWORD(v38) = 2;
      *(__m128i *)((char *)&v82[3] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v82[8] = -1LL;
      v82[9] = 0x5FFFFFFFFLL;
      LODWORD(v82[0]) = 80;
      *(_QWORD *)((char *)v82 + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v82[1] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v82[2] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v82[5] + 4) = *(_QWORD *)((char *)&v82[3] + 4);
      HIDWORD(v82[6]) = _mm_cvtsi128_si32(*(__m128i *)((char *)&v82[3] + 4));
      v82[7] = 0x700000005LL;
      v39 = *(_DWORD *)(v36 + 740);
      HIDWORD(v82[7]) = v39;
      LODWORD(v82[4]) = 1;
      v82[8] = 0LL;
      LODWORD(v82[9]) = 0;
      if ( v37 )
      {
        LODWORD(v82[7]) = 1;
        *(_QWORD *)((char *)&v82[1] + 4) = 1LL;
        *(_QWORD *)((char *)&v82[2] + 4) = 0LL;
        *(_QWORD *)((char *)v82 + 4) = 0LL;
        while ( 1 )
        {
          v40 = (int)v38 > v39;
          LODWORD(v38) = v38 + 1;
          *((_DWORD *)&v82[3] + ++v35) = v40 + 3;
          if ( v35 > 6 )
            break;
          v39 = HIDWORD(v82[7]);
        }
      }
      else
      {
        LODWORD(v82[7]) = 3;
        *(_QWORD *)((char *)&v82[1] + 4) = 0x100000001LL;
        *(_QWORD *)((char *)&v82[2] + 4) = 1LL;
        *(_QWORD *)((char *)v82 + 4) = 0x100000001LL;
        while ( 1 )
        {
          v41 = (int)v38 > v39;
          v38 = (unsigned int)(v38 + 1);
          *((_DWORD *)&v82[3] + ++v35) = v41 + 3;
          if ( v35 > 6 )
            break;
          v39 = HIDWORD(v82[7]);
        }
        if ( (v3[182] & 0x800) != 0 )
        {
          v62 = off_1C006A310;
          v61 = v58;
          *(_OWORD *)((char *)v60 + 4) = 0LL;
          *(_QWORD *)((char *)&v60[1] + 4) = 0x100000000LL;
          LODWORD(v60[0]) = 56;
          HIDWORD(v60[1]) = 1;
          v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 336))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v36 + 16),
                  v38);
          v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                  WdfDriverGlobals,
                  v60,
                  v42,
                  v22 + 264);
          v11 = v43;
          if ( v43 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v56) = v43;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v3[1] + 1432LL),
                2u,
                2u,
                0x81u,
                (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
                v56);
            }
            *(_QWORD *)(v22 + 264) = 0LL;
            goto LABEL_38;
          }
          v44 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(v22 + 264),
                                    off_1C006A310);
          KeInitializeEvent(v44 + 1, NotificationEvent, 0);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *))(WdfFunctions_01015 + 672))(
        WdfDriverGlobals,
        v58,
        v82);
      KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 208));
      *(_DWORD *)(v22 + 216) = 6000;
      *(_QWORD *)(v22 + 224) = &ISMStateTable;
      *(_DWORD *)(v22 + 232) = 6000;
      v62 = off_1C006A2E8;
      v61 = v58;
      HIDWORD(v60[1]) = 1;
      v68 = 1LL;
      *((_QWORD *)&v67 + 1) = HUBIDLE_EvtIdleWorkItem;
      *(_OWORD *)((char *)v60 + 4) = 0LL;
      *(_QWORD *)((char *)&v60[1] + 4) = 0x100000000LL;
      LODWORD(v60[0]) = 56;
      *(_QWORD *)&v67 = 24LL;
      v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v67,
              v60,
              v22 + 256);
      v11 = v45;
      if ( v45 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v56) = v45;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            2u,
            2u,
            0x82u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            v56);
        }
        *(_QWORD *)(v22 + 256) = 0LL;
        goto LABEL_38;
      }
      HUBIDLE_AddEvent(v22 + 72, 6009, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v22 + 32), 0x1000u);
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 1064))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*v3 + 16LL),
                  v58);
      v11 = PdoName;
      if ( PdoName >= 0 )
      {
        v46 = *(_QWORD *)(v22 + 16);
        v47 = &v87;
        v48 = 5LL;
        v49 = (unsigned __int16 *)(v46 + 322);
        v86 = *(unsigned __int16 *)(v46 + 320);
        do
        {
          v50 = *v49++;
          *v47++ = v50;
          --v48;
        }
        while ( v48 );
        v51 = *(unsigned __int8 *)(v46 + 240);
        v3 = v73;
        if ( (unsigned __int8)v51 < 6u )
          *(&v86 + v51) = *(unsigned __int16 *)(v22 + 48);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v56) = HIDWORD(v3);
          WPP_RECORDER_SF_qDDDdddddd(
            *(_QWORD *)(v3[1] + 1432LL),
            *((unsigned __int16 *)v3 + 1000),
            *((unsigned __int16 *)v3 + 999),
            *((unsigned __int16 *)v3 + 998),
            RemlockSize[0]);
        }
        v5 = 0;
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 1u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 2u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 4u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 0x10u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 8u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 0x20u);
        if ( (v3[204] & 2) != 0 )
          HUBPDO_RegisterForPowerSettingsForHub(v22);
        else
          HUBPDO_RegisterForPowerSettingsForDevice(v22);
        v6 = 0;
        goto LABEL_39;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 131;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 128;
    }
LABEL_37:
    LODWORD(v56) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v21,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v56);
    goto LABEL_38;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 127;
LABEL_46:
    LODWORD(v56) = v26;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v27,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v56);
  }
LABEL_47:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v58);
  v6 = 1;
LABEL_39:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v56) = *(unsigned __int16 *)(v3[1] + 200LL);
      McTemplateK0ppqq_EtwWriteTransfer(
        *(unsigned __int16 *)(v3[1] + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)((char *)v3 + 1516),
        *(_QWORD *)(*v3 + 248LL),
        v3[3],
        v56,
        v11);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v11;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)((char *)v3 + 1516),
      *(_QWORD *)(*v3 + 248LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*((_DWORD *)v3 + 409) & 0x40) != 0 )
  {
    *(_OWORD *)((char *)v3 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)v3 + 409, 0xFFFFFFBF);
  }
  v52 = (v11 >> 31) & 0xFFFFFFF4;
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v59);
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v58);
  if ( v7 )
  {
    v53 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v53,
      "DSM PDO Tag",
      9159LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v52 + 4077;
}
