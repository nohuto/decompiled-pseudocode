/*
 * XREFs of Controller_Create @ 0x1C00712C4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     RtlStringCchPrintfA @ 0x1C000C294 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x1C001A478 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C001AA74 (DynamicLock_Create.c)
 *     RtlStringCopyWorkerA @ 0x1C001E1D4 (RtlStringCopyWorkerA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001E644 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x1C001E6D4 (Controller_QuerySupportedDSMs.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     RtlStringCchCopyA @ 0x1C0030B80 (RtlStringCchCopyA.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0034428 (Controller_ReferenceTrustletProcess.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrievePciData @ 0x1C0074ACC (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C007530C (Controller_GetDeviceEnumerator.c)
 *     Controller_SetLogIdentifier @ 0x1C007541C (Controller_SetLogIdentifier.c)
 *     Controller_CreateSecureObject @ 0x1C0077FC8 (Controller_CreateSecureObject.c)
 *     Controller_RetrieveAcpiData @ 0x1C00785D8 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C007882C (Controller_RetrieveUrsData.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v8; // rax
  bool IsSecureDevice; // al
  bool v10; // r12
  int v11; // r15d
  size_t v12; // rdx
  size_t *v13; // r8
  STRSAFE_PCNZCH v14; // r9
  int DeviceEnumerator; // eax
  int v16; // edx
  int AcpiData; // ebx
  int v18; // r11d
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rax
  bool v22; // zf
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rbx
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v31; // r9d
  unsigned int v32; // r10d
  unsigned int v33; // r10d
  size_t v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v36[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+54h] [rbp-ACh]
  __int128 v39; // [rsp+58h] [rbp-A8h]
  void *v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  void *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+8Ch] [rbp-74h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+9Ch] [rbp-64h]
  KIRQL (__fastcall *v49)(__int64); // [rsp+A0h] [rbp-60h]
  __int128 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int128 v52; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h]
  __int128 v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  _QWORD v56[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v58[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v59; // [rsp+20Ch] [rbp+10Ch]
  char v60; // [rsp+20Eh] [rbp+10Eh]
  __int128 v61; // [rsp+210h] [rbp+110h]
  __int128 v62; // [rsp+220h] [rbp+120h]
  char pszDest[16]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v64; // [rsp+240h] [rbp+140h]

  v46 = -1LL;
  v48 = 0;
  HIDWORD(v41) = 0;
  v64 = 0LL;
  *(_DWORD *)&v36[4] = 0;
  *(_QWORD *)&v36[16] = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v61 = 0LL;
  v45 = a3;
  v62 = 0LL;
  v44 = 0;
  *(_OWORD *)pszDest = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00633D8);
  IsSecureDevice = Device_IsSecureDevice(v8);
  *(_QWORD *)&v61 = 56LL;
  v10 = IsSecureDevice;
  pszDest[0] = 0;
  *(_QWORD *)&v62 = 0LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v58 = 0;
  v59 = 0;
  v60 = 0;
  v55 = 0LL;
  HIDWORD(v62) = 16;
  v64 = 0x200000002LL;
  v52 = 0LL;
  BYTE8(v62) = 0;
  v53 = 0LL;
  *((_QWORD *)&v61 + 1) = 512LL;
  v54 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  v11 = 1;
  v40 = off_1C0063428;
  *(_QWORD *)v36 = 56LL;
  *(_QWORD *)&v36[8] = Controller_WdfEvtCleanupCallback;
  *(_QWORD *)&v36[16] = 0LL;
  v37 = 1;
  v38 = 1;
  v39 = 0LL;
  memset(v56, 0, 0xF8uLL);
  *(_QWORD *)((char *)&v56[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v56[0] = -4294967048LL;
  LODWORD(v56[9]) = 0;
  BYTE4(v56[12]) = 0;
  BYTE1(v56[13]) = 0;
  BYTE6(v56[13]) = 0;
  WORD2(v56[10]) = 0;
  v56[11] = 0LL;
  LODWORD(v56[12]) = 0;
  RtlStringCopyWorkerA((NTSTRSAFE_PSTR)&v56[14] + 3, v12, v13, v14, v34);
  v56[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v56[5] = Controller_UcxEvtReset;
  v56[1] = Controller_UcxEvtQueryUsbCapability;
  v56[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v56[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v56[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  v56[4] = UsbDevice_UcxEvtDeviceAdd;
  if ( v10 )
  {
    memset(&v56[6], 0, 24);
  }
  else
  {
    v56[7] = Crashdump_UcxEvtGetDumpData;
    v56[8] = Crashdump_UcxEvtFreeDumpData;
    v56[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2);
  if ( !DeviceEnumerator )
  {
    AcpiData = Controller_RetrievePciData(a1, a2, &v52, &v46);
    if ( AcpiData >= 0 )
    {
      v18 = 2;
LABEL_6:
      *(_QWORD *)((char *)&v56[9] + 4) = v52;
      WORD2(v56[10]) = WORD4(v52);
      v56[11] = __PAIR64__(v53, HIDWORD(v52));
      LODWORD(v56[12]) = DWORD1(v53);
      LODWORD(v56[9]) = 1;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 96;
LABEL_30:
    LOBYTE(v16) = 2;
LABEL_32:
    WPP_RECORDER_SF_d(a2, v16, 4, v31, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, AcpiData);
    return (unsigned int)AcpiData;
  }
  if ( DeviceEnumerator == 1 )
  {
    v11 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v31 = 97;
      LOBYTE(v16) = 2;
      goto LABEL_32;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(
                 a1,
                 a2,
                 (unsigned int)&v44,
                 (unsigned int)pszSrc,
                 (__int64)&v52,
                 (__int64)&v46);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v31 = 98;
      goto LABEL_30;
    }
    v11 = v44;
    v18 = 2;
    if ( v44 != 2 )
      goto LABEL_6;
  }
  LODWORD(v56[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[13] + 1, v32, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[13] + 6, v33, &v58[2]);
LABEL_7:
  v19 = v37;
  if ( v10 )
    v19 = v18;
  v37 = v19;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _BYTE *, __int64 *))qword_1C00647E8)(
               UcxDriverGlobals,
               a1,
               v56,
               v36,
               &v35);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 99;
    goto LABEL_31;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v35,
          off_1C0063428);
  *(_QWORD *)v20 = a1;
  *(_QWORD *)(v20 + 32) = v20 + 24;
  *(_QWORD *)(v20 + 24) = v20 + 24;
  *(_QWORD *)(v20 + 8) = v35;
  *(_QWORD *)(v20 + 328) = v46;
  *(_QWORD *)(v20 + 72) = a2;
  *(_DWORD *)(v20 + 176) = v45;
  *(_DWORD *)(v20 + 244) = v11;
  *(_BYTE *)(v20 + 601) = v10;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C00633D8);
  v22 = *(_DWORD *)(v20 + 244) == 1;
  *(_QWORD *)(v20 + 112) = *(_QWORD *)(v21 + 96);
  if ( v22 )
  {
    v23 = v53;
    *(_OWORD *)(v20 + 248) = v52;
    v24 = v54;
    *(_OWORD *)(v20 + 264) = v23;
    *(_QWORD *)&v23 = v55;
    *(_OWORD *)(v20 + 280) = v24;
    *(_QWORD *)(v20 + 296) = v23;
    *(_BYTE *)(v20 + 304) = 0;
    *(_BYTE *)(v20 + 309) = 0;
    *(_BYTE *)(v20 + 314) = 0;
  }
  else
  {
    *(_QWORD *)(v20 + 304) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v20 + 312) = *(_DWORD *)v58;
    *(_WORD *)(v20 + 316) = v59;
    *(_BYTE *)(v20 + 318) = v60;
    *(_DWORD *)(v20 + 248) = 0x7FFFFFFF;
    *(_DWORD *)(v20 + 252) = 0x7FFFFFFF;
    *(_WORD *)(v20 + 256) = 0;
    *(_QWORD *)(v20 + 260) = 0LL;
    *(_DWORD *)(v20 + 268) = 0;
  }
  Controller_SetLogIdentifier(v20);
  *a4 = v20;
  v40 = off_1C0063068;
  v51 = 0LL;
  *((_QWORD *)&v39 + 1) = 0LL;
  *(_DWORD *)v36 = 56;
  v37 = 1;
  v38 = 1;
  v48 = 0;
  v49 = Controller_WdfEvtWatchdogTimerFunc;
  v47 = 40;
  v50 = 0LL;
  BYTE4(v50) = 1;
  memset(&v36[4], 0, 20);
  if ( v10 )
  {
    LODWORD(v50) = 0;
    v37 = 2;
  }
  else
  {
    LODWORD(v50) = 5000;
  }
  *(_QWORD *)&v39 = v35;
  DWORD2(v50) = 1000;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, _BYTE *, __int64))(WdfFunctions_01023 + 2544))(
               WdfDriverGlobals,
               &v47,
               v36,
               v20 + 360);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 100;
    goto LABEL_31;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v20 + 360),
               off_1C0063068) = MEMORY[0xFFFFF78000000014];
  v40 = 0LL;
  v41 = 24LL;
  v37 = 1;
  v39 = (unsigned __int64)v35;
  v42 = Controller_IdleTimeoutUpdateWorker;
  memset(v36, 0, sizeof(v36));
  *(_DWORD *)v36 = 56;
  v38 = 1;
  v43 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v41,
               v36,
               v20 + 568);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 101;
    goto LABEL_31;
  }
  v40 = 0LL;
  v41 = 24LL;
  v37 = 1;
  v39 = (unsigned __int64)v35;
  v42 = Controller_AudioOffloadWnfStateUpdateWorker;
  memset(v36, 0, sizeof(v36));
  *(_DWORD *)v36 = 56;
  v38 = 1;
  v43 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v41,
               v36,
               v20 + 832);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 102;
    goto LABEL_31;
  }
  v40 = off_1C00630E0;
  v39 = (unsigned __int64)v35;
  v42 = Controller_TelemetryReportWorker;
  *(_DWORD *)v36 = 56;
  memset(&v36[4], 0, 20);
  v37 = 1;
  v38 = 1;
  v41 = 24LL;
  v43 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v41,
               v36,
               v20 + 368);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 103;
    goto LABEL_31;
  }
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v20 + 368),
          off_1C00630E0);
  KeInitializeMutex((PRKMUTEX)(v25 + 24), 0);
  *(_QWORD *)(v25 + 8) = v25;
  *(_QWORD *)v25 = v25;
  KeInitializeSpinLock((PKSPIN_LOCK)(v25 + 16));
  AcpiData = DynamicLock_Create(v35, a2, v10, (__int64 *)(v20 + 672));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 104;
    goto LABEL_31;
  }
  v40 = 0LL;
  v37 = 1;
  v39 = (unsigned __int64)v35;
  memset(v36, 0, sizeof(v36));
  *(_DWORD *)v36 = 56;
  v38 = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64))(WdfFunctions_01023 + 104))(
               WdfDriverGlobals,
               v36,
               v20 + 688);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 105;
    goto LABEL_31;
  }
  v40 = off_1C00630E0;
  v39 = (unsigned __int64)v35;
  v42 = Controller_TimeSyncStartTrackingWorker;
  memset(&v36[4], 0, 20);
  *(_DWORD *)v36 = 56;
  v37 = 1;
  v38 = 1;
  v41 = 24LL;
  v43 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v41,
               v36,
               v20 + 712);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v31 = 106;
LABEL_31:
    v16 = 2;
    goto LABEL_32;
  }
  *(_BYTE *)(v20 + 720) = 0;
  *(_QWORD *)(v20 + 704) = v20 + 696;
  *(_QWORD *)(v20 + 696) = v20 + 696;
  *(_BYTE *)(v20 + 664) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v20 + 784));
  *(_QWORD *)(v20 + 792) = 0LL;
  *(_QWORD *)(v20 + 800) = 0LL;
  *(_DWORD *)(v20 + 808) = 0;
  *(_DWORD *)(v20 + 680) = 0;
  Controller_QuerySupportedDSMs(v20);
  *(_OWORD *)(v20 + 336) = 0LL;
  Controller_PopulateDeviceFlags(v20);
  if ( (*(_BYTE *)(v20 + 336) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a2, 2, 4, 107, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  }
  else
  {
    if ( !v10 )
    {
      v26 = 0;
LABEL_24:
      *(_DWORD *)(v20 + 604) = v26;
      *(_QWORD *)(v20 + 636) = 0LL;
      AcpiData = DynamicLock_Create(v35, a2, 0, (__int64 *)(v20 + 648));
      if ( AcpiData >= 0 )
        return (unsigned int)Controller_AllocateIrqlTrackingArray(v20, v27, v28, v29);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v31 = 108;
      goto LABEL_31;
    }
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v20);
    if ( AcpiData >= 0 )
    {
      AcpiData = Controller_CreateSecureObject(v20);
      if ( AcpiData >= 0 )
      {
        v26 = (*(_DWORD *)(v20 + 608) != 1) + 1;
        goto LABEL_24;
      }
    }
  }
  return (unsigned int)AcpiData;
}
