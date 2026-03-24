/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1C00796D4
 * Callers:
 *     HUBPDO_CreatePdo @ 0x1C007A930 (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1C007A9F4 (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0012D2C (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x1C001383C (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C0018FD4 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x1C0019138 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     HUBIDLE_AddEvent @ 0x1C003BAF4 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 *     HUBPDO_MakePdoName @ 0x1C0079360 (HUBPDO_MakePdoName.c)
 *     HUBPDO_AssignPDOIds @ 0x1C007945C (HUBPDO_AssignPDOIds.c)
 *     WMI_FireNotification @ 0x1C0084F0C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(_QWORD *a1, char a2)
{
  int v4; // r15d
  char v5; // si
  char v6; // r12
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  int PdoName; // eax
  unsigned __int16 v20; // r9
  __int64 v21; // r15
  int v22; // edx
  __int64 v23; // rax
  char v24; // cl
  int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r13
  __int16 v32; // cx
  unsigned __int64 v33; // rdx
  int v34; // eax
  unsigned __int16 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // ecx
  BOOL v43; // eax
  BOOL v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // r12
  int v48; // eax
  unsigned __int16 v49; // r9
  struct _KEVENT *v50; // rax
  __int64 v51; // r8
  int *v52; // rcx
  unsigned __int16 *v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // edi
  __int64 v57; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  char v61; // [rsp+88h] [rbp-80h]
  char v62; // [rsp+89h] [rbp-7Fh]
  unsigned __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v66[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v67; // [rsp+C8h] [rbp-40h]
  void *v68; // [rsp+D8h] [rbp-30h]
  __int64 v69; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v70; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v71; // [rsp+F8h] [rbp-10h]
  __int128 v72; // [rsp+108h] [rbp+0h]
  __int128 v73; // [rsp+118h] [rbp+10h] BYREF
  __int128 v74; // [rsp+128h] [rbp+20h]
  __int64 (__fastcall *v75)(__int64, wchar_t **); // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h] BYREF
  __int128 v77; // [rsp+148h] [rbp+40h] BYREF
  __int64 v78; // [rsp+158h] [rbp+50h]
  _QWORD v79[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v80[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v81[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v82[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v83[10]; // [rsp+328h] [rbp+220h] BYREF
  __int128 v84; // [rsp+378h] [rbp+270h] BYREF
  __int128 v85; // [rsp+388h] [rbp+280h]
  __int128 v86; // [rsp+398h] [rbp+290h]
  int v87; // [rsp+3A8h] [rbp+2A0h]
  int v88; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v89[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v90; // [rsp+3C8h] [rbp+2C0h]

  memset(v80, 0, sizeof(v80));
  memset(v79, 0, sizeof(v79));
  memset(v66, 0, sizeof(v66));
  v68 = 0LL;
  v67 = 0LL;
  memset(v81, 0, sizeof(v81));
  v76 = 0LL;
  v4 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  memset(v83, 0, sizeof(v83));
  memset(v82, 0, 0x88uLL);
  v69 = 0LL;
  v64 = 0LL;
  v5 = 0;
  v6 = 0;
  v75 = 0LL;
  v7 = 0;
  v78 = 0LL;
  v61 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v77 = 0LL;
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)a1 + 409, 2u);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a1 + 409, 0xFFFFFFFD);
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x40000) == 0 || (a1[204] & 0x20) == 0 )
      WMI_FireNotification(*a1, *(unsigned __int16 *)(a1[1] + 200LL), 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *a1);
  v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
  if ( !v65 )
  {
    v10 = -1073741670;
    goto LABEL_58;
  }
  v80[1] = HUBPDO_EvtDeviceD0Entry;
  LODWORD(v80[0]) = 144;
  v80[3] = HUBPDO_EvtDeviceD0Exit;
  v6 = 1;
  v80[5] = HUBPDO_EvtDevicePrepareHardware;
  v80[6] = HUBPDO_EvtDeviceReleaseHardware;
  v80[12] = HUBPDO_EvtDeviceSurpriseRemoval;
  v80[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v80[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v80[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
  v80[17] = HUBPDO_EvtDeviceUsageNotificationEx;
  v80[14] = HUBPDO_EvtDeviceQueryStop;
  v80[13] = HUBPDO_EvtDeviceQueryRemove;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WdfDriverGlobals,
    v65,
    v80);
  v79[5] = HUBPDO_EvtDeviceEnableWakeAtBus;
  *(_QWORD *)((char *)v79 + 4) = 0LL;
  v79[6] = HUBPDO_EvtDeviceDisableWakeAtBus;
  v79[7] = HUBPDO_EvtDeviceReportedMissing;
  v79[2] = HUBPDO_EvtDeviceResourceRequirementsQuery;
  HIDWORD(v79[1]) = 0;
  v79[3] = 0LL;
  v79[4] = 0LL;
  LODWORD(v79[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
    WdfDriverGlobals,
    v65,
    v79);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
    WdfDriverGlobals,
    v65,
    34LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(WdfDriverGlobals, v65, 0LL);
  LOBYTE(v11) = 15;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v11,
          0LL,
          0);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      v5 = 0;
      goto LABEL_58;
    }
    v14 = 109;
LABEL_11:
    LODWORD(v60) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      2u,
      v14,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      v60);
    goto LABEL_12;
  }
  LOBYTE(v13) = 14;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v13,
          0LL,
          0);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = 110;
    goto LABEL_11;
  }
  v89[0] = 419564552;
  LOBYTE(v15) = 27;
  v89[1] = 336271104;
  v90 = 19;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v15,
          v89,
          9);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = 111;
    goto LABEL_11;
  }
  LOBYTE(v89[0]) = 2;
  LOBYTE(v16) = 22;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v16,
          v89,
          1);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = 112;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v65);
  v69 = 0x100000008LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
    WdfDriverGlobals,
    v65,
    &v69);
  v12 = HUBPDO_AssignPDOIds((__int64)a1, v65);
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v14 = 113;
    goto LABEL_11;
  }
  if ( (*((_DWORD *)a1 + 409) & 2) == 0 )
  {
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
            WdfDriverGlobals,
            v65,
            &GUID_DEVCLASS_UNKNOWN);
    if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v60) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        3u,
        2u,
        0x72u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v60);
    }
  }
  *(_QWORD *)&v66[1] = 0LL;
  v68 = off_1C00660D0;
  *((_QWORD *)&v66[0] + 1) = HUBPDO_EvtDeviceCleanup;
  v67 = 0LL;
  *(_QWORD *)&v66[0] = 56LL;
  *((_QWORD *)&v66[1] + 1) = 0x100000001LL;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v18,
    "DSM PDO Tag",
    8235LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v7 = 1;
  v62 = 1;
  while ( 1 )
  {
    PdoName = HUBPDO_MakePdoName((__int64)a1, v65);
    v10 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v20 = 115;
LABEL_39:
      LODWORD(v60) = PdoName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        2u,
        v20,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v60);
      goto LABEL_57;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                WdfDriverGlobals,
                v65,
                &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v10 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v20 = 116;
      goto LABEL_39;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _OWORD *, unsigned __int64 *))(WdfFunctions_01015 + 600))(
                WdfDriverGlobals,
                &v65,
                v66,
                &v64);
    v10 = PdoName;
    if ( PdoName >= 0 )
      break;
    ++v4;
    if ( PdoName != -1073741771 )
      goto LABEL_36;
  }
  v7 = 0;
  v61 = 1;
  v62 = 0;
LABEL_36:
  if ( PdoName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 117;
      goto LABEL_39;
    }
LABEL_57:
    v5 = v61;
    goto LABEL_58;
  }
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v64,
          off_1C00660D0);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v21 + 424), 0x55535257u, 0, 0, 0x20u);
  *(_OWORD *)(v21 + 456) = 0LL;
  v6 = 0;
  *(_OWORD *)(v21 + 472) = 0LL;
  *(_OWORD *)(v21 + 488) = 0LL;
  *(_QWORD *)(v21 + 504) = 0LL;
  *(_BYTE *)(v21 + 512) = 0;
  v22 = *((_DWORD *)a1 + 408);
  if ( (v22 & 2) != 0 )
  {
    v23 = *a1;
    v82[2] = HUBFDO_GetPortStatusForDebuggingComplete;
    v82[3] = HUBFDO_GetPortStatusForDebuggingComplete;
    LODWORD(v82[0]) = 66388104;
    v24 = *(_BYTE *)(v23 + 240);
    LODWORD(v82[6]) = *((_DWORD *)a1 + 43);
    v82[5] = a1[3];
    *((_QWORD *)&v70 + 1) = v82;
    *(_QWORD *)&v71 = &GUID_HUB_PARENT_INTERFACE;
    *(_QWORD *)&v72 = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
    LOBYTE(v82[4]) = v24 + 1;
    BYTE5(v82[6]) = (v22 & 0x1000) != 0;
    BYTE8(v72) = 1;
    v82[16] = 0LL;
    LODWORD(v70) = 48;
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
            WdfDriverGlobals,
            v64,
            &v70);
    v10 = v25;
    if ( v25 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v60) = v25;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          2u,
          0x76u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          v60);
      }
LABEL_44:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v64);
      v6 = 1;
      goto LABEL_57;
    }
  }
  v75 = HUBPDO_GetLocationString;
  *((_QWORD *)&v70 + 1) = &v73;
  *(_QWORD *)&v71 = &GUID_PNP_LOCATION_INTERFACE;
  *(_QWORD *)&v74 = HUBFDO_GetPortStatusForDebuggingComplete;
  *((_QWORD *)&v74 + 1) = HUBFDO_GetPortStatusForDebuggingComplete;
  *(_QWORD *)&v73 = 65576LL;
  *((_QWORD *)&v73 + 1) = a1;
  *(_QWORD *)&v70 = 48LL;
  *((_QWORD *)&v71 + 1) = 0LL;
  v72 = 0uLL;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
          WdfDriverGlobals,
          v64,
          &v70);
  v10 = v26;
  if ( v26 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v60) = v26;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        2u,
        0x77u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v60);
    }
    goto LABEL_44;
  }
  LOBYTE(v27) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    1LL,
    v27);
  LOBYTE(v28) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    2LL,
    v28);
  LOBYTE(v29) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    3LL,
    v29);
  LOBYTE(v30) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    4LL,
    v30);
  *(_QWORD *)(v21 + 24) = a1;
  v31 = 5LL;
  *(_QWORD *)(v21 + 16) = *a1;
  v32 = *(_WORD *)(a1[1] + 200LL);
  *(_DWORD *)(v21 + 388) = -1;
  *(_WORD *)(v21 + 48) = v32;
  *(_DWORD *)(v21 + 384) = 5;
  if ( a2 )
    *(_QWORD *)(v21 + 8) = *(_QWORD *)(*a1 + 2448LL);
  else
    *(_BYTE *)v21 = 1;
  LODWORD(v81[1]) = 0;
  v33 = v64;
  v81[6] = HUBPDO_EvtIoInternalDeviceControl;
  a1[2] = v21;
  v81[5] = HUBPDO_EvtIoDeviceControl;
  v81[0] = 0x100000060LL;
  BYTE5(v81[1]) = 1;
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v33,
          v81,
          0LL,
          &v76);
  v10 = v34;
  if ( v34 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = 120;
      goto LABEL_55;
    }
    goto LABEL_56;
  }
  v36 = *((_DWORD *)a1 + 408);
  *(_QWORD *)&v84 = 0x200000030LL;
  DWORD2(v84) = 2;
  LODWORD(v85) = 2;
  HIDWORD(v84) = ((v36 >> 5) & 1) == 0;
  v37 = a1[1];
  DWORD1(v85) = (v36 >> 6) & 1;
  *((_QWORD *)&v85 + 1) = 2LL;
  *(_QWORD *)&v86 = 0x200000002LL;
  *((_QWORD *)&v86 + 1) = *(unsigned __int16 *)(v37 + 200) | 0xFFFFFFFF00000000uLL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 664))(
    WdfDriverGlobals,
    v64,
    &v84);
  v38 = (a1[204] & 0x102) == 0;
  LODWORD(v39) = 2;
  v40 = *a1;
  v41 = 2LL;
  *(__m128i *)((char *)&v83[3] + 4) = _mm_load_si128((const __m128i *)&_xmm);
  LODWORD(v83[0]) = 80;
  *(_QWORD *)((char *)&v83[5] + 4) = *(_QWORD *)((char *)&v83[3] + 4);
  HIDWORD(v83[6]) = _mm_cvtsi128_si32(*(__m128i *)((char *)&v83[3] + 4));
  v42 = *(_DWORD *)(v40 + 740);
  HIDWORD(v83[7]) = v42;
  LODWORD(v83[4]) = 1;
  v83[8] = 0LL;
  v83[9] = 0x500000000LL;
  if ( v38 )
  {
    LODWORD(v83[7]) = 1;
    *(_QWORD *)((char *)&v83[1] + 4) = 1LL;
    *(_QWORD *)((char *)&v83[2] + 4) = 0LL;
    *(_QWORD *)((char *)v83 + 4) = 0LL;
    while ( 1 )
    {
      v43 = (int)v39 > v42;
      LODWORD(v39) = v39 + 1;
      *((_DWORD *)&v83[3] + ++v41) = v43 + 3;
      if ( v41 > 6 )
        break;
      v42 = HIDWORD(v83[7]);
    }
    goto LABEL_75;
  }
  LODWORD(v83[7]) = 3;
  *(_QWORD *)((char *)&v83[1] + 4) = 0x100000001LL;
  *(_QWORD *)((char *)&v83[2] + 4) = 1LL;
  *(_QWORD *)((char *)v83 + 4) = 0x100000001LL;
  while ( 1 )
  {
    v44 = (int)v39 > v42;
    v39 = (unsigned int)(v39 + 1);
    *((_DWORD *)&v83[3] + ++v41) = v44 + 3;
    if ( v41 > 6 )
      break;
    v42 = HIDWORD(v83[7]);
  }
  if ( (a1[182] & 0x800) != 0 )
  {
    v68 = off_1C00662B8;
    v67 = v64;
    v45 = *a1;
    *(_OWORD *)((char *)v66 + 4) = 0LL;
    *(_QWORD *)((char *)&v66[1] + 4) = 0x100000000LL;
    LODWORD(v66[0]) = 56;
    HIDWORD(v66[1]) = 1;
    v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(v45 + 16),
            v39);
    v47 = (_QWORD *)(v21 + 264);
    v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v66,
            v46,
            v21 + 264);
    v10 = v48;
    if ( v48 >= 0 )
    {
      v50 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                WdfDriverGlobals,
                                *v47,
                                off_1C00662B8);
      KeInitializeEvent(v50 + 1, NotificationEvent, 0);
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = 121;
      goto LABEL_72;
    }
    goto LABEL_73;
  }
LABEL_75:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *))(WdfFunctions_01015 + 672))(
    WdfDriverGlobals,
    v64,
    v83);
  KeInitializeSpinLock((PKSPIN_LOCK)(v21 + 208));
  *(_DWORD *)(v21 + 216) = 6000;
  v47 = (_QWORD *)(v21 + 256);
  *(_QWORD *)(v21 + 224) = &ISMStateTable;
  *(_DWORD *)(v21 + 232) = 6000;
  v68 = off_1C0066290;
  v67 = v64;
  *((_QWORD *)&v77 + 1) = HUBIDLE_EvtIdleWorkItem;
  *((_QWORD *)&v66[1] + 1) = 0x100000001LL;
  LOBYTE(v78) = 1;
  memset((char *)v66 + 4, 0, 20);
  LODWORD(v66[0]) = 56;
  LODWORD(v77) = 24;
  v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01015 + 3032))(
          WdfDriverGlobals,
          &v77,
          v66,
          v21 + 256);
  v10 = v48;
  if ( v48 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = 122;
LABEL_72:
      LODWORD(v60) = v48;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        2u,
        v49,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v60);
    }
LABEL_73:
    *v47 = 0LL;
    v6 = 0;
    goto LABEL_56;
  }
  HUBIDLE_AddEvent(v21 + 72, 6009, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v21 + 32), 0x1000u);
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 1064))(
          WdfDriverGlobals,
          *(_QWORD *)(*a1 + 16LL),
          v64);
  v6 = 0;
  v10 = v34;
  if ( v34 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = 123;
LABEL_55:
      LODWORD(v60) = v34;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        2u,
        v35,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v60);
    }
LABEL_56:
    v7 = v62;
    goto LABEL_57;
  }
  v51 = *(_QWORD *)(v21 + 16);
  v52 = &v88;
  v53 = (unsigned __int16 *)(v51 + 322);
  v87 = *(unsigned __int16 *)(v51 + 320);
  do
  {
    v54 = *v53++;
    *v52++ = v54;
    --v31;
  }
  while ( v31 );
  v55 = *(unsigned __int8 *)(v51 + 240);
  if ( (unsigned __int8)v55 < 6u )
    *(&v87 + v55) = *(unsigned __int16 *)(v21 + 48);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v60) = HIDWORD(a1);
    WPP_RECORDER_SF_qDDDdddddd(
      *(_QWORD *)(a1[1] + 1432LL),
      *((unsigned __int16 *)a1 + 1000),
      *((unsigned __int16 *)a1 + 999),
      *((unsigned __int16 *)a1 + 998),
      RemlockSize[0]);
  }
  v5 = 0;
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 1u);
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 2u);
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 4u);
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 0x10u);
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 8u);
  _InterlockedOr((volatile signed __int32 *)a1 + 555, 0x20u);
  if ( (a1[204] & 2) != 0 )
    HUBPDO_RegisterForPowerSettingsForHub(v21);
  else
    HUBPDO_RegisterForPowerSettingsForDevice(v21);
  v7 = v62;
LABEL_58:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v60) = *(unsigned __int16 *)(a1[1] + 200LL);
      McTemplateK0ppqq_EtwWriteTransfer(
        *(unsigned __int16 *)(a1[1] + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)((char *)a1 + 1516),
        *(_QWORD *)(*a1 + 248LL),
        a1[3],
        v60,
        v10);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v10;
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)((char *)a1 + 1516),
      *(_QWORD *)(*a1 + 248LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*((_DWORD *)a1 + 409) & 0x40) != 0 )
  {
    *(_OWORD *)((char *)a1 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)a1 + 409, 0xFFFFFFBF);
  }
  v56 = (v10 >> 31) & 0xFFFFFFF4;
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v65);
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v64);
  if ( v7 )
  {
    v57 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v57,
      "DSM PDO Tag",
      8757LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v56 + 4077;
}
