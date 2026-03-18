/*
 * XREFs of DpiAddDevice @ 0x1C0202170
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001BFE8 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C001D298 (DpiGetDeviceRegistryPaths.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C0023ED5 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C005B24C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C006655C (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpEvalAcpiMethod @ 0x1C01DED20 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F6410 (DpiFdoDetectPostDevice.c)
 *     DpiDxgkDdiAddDevice @ 0x1C01FFA7C (DpiDxgkDdiAddDevice.c)
 *     DpiReadPnpRegistryValue @ 0x1C01FFF2C (DpiReadPnpRegistryValue.c)
 *     DpiFdoInitializeFdo @ 0x1C020431C (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C0205018 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C02249AC (DpiGetDevicePropertyString.c)
 *     DpiGetAgpStatus @ 0x1C02268C4 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0226B34 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetVgaStatus @ 0x1C0227340 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0228150 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02CDDBC (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CDEA4 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE0E4 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CE348 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C039AC54 (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C039D034 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A6EF4 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C03A8450 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C03A8C50 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C03A919C (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3)
{
  int v3; // r13d
  char *DeviceExtension; // rsi
  char *v7; // r15
  char *DriverObjectExtension; // rax
  int v9; // eax
  __int64 v10; // r8
  struct _DEVICE_OBJECT *started; // r14
  __int64 v12; // r8
  char v13; // cl
  const UNICODE_STRING *p_DriverName; // rdi
  wchar_t *UnicodeSubstring; // rax
  PDRIVER_OBJECT v16; // r14
  char v17; // cl
  ULONG v18; // edi
  __int64 v19; // rdx
  int DevicePropertyString; // eax
  __int64 v21; // r12
  struct _KMUTANT *v22; // rdi
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  void (__fastcall *v25)(_QWORD); // rax
  void (__fastcall *v26)(_QWORD); // rax
  void (__fastcall *v27)(_QWORD); // rax
  void (__fastcall *v28)(_QWORD); // rax
  void *v29; // rcx
  struct _ERESOURCE *v30; // rcx
  _DWORD *v31; // rcx
  struct _DEVICE_OBJECT *v32; // rcx
  char v33; // r13
  void *v34; // rdi
  __int64 v35; // rdx
  int RegistryValues; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // eax
  NTSTATUS v40; // eax
  __int64 v41; // rdi
  char v42; // al
  struct _DEVICE_OBJECT *v43; // rax
  PDEVICE_OBJECT v44; // rax
  bool v45; // zf
  struct _DEVICE_OBJECT *v46; // rcx
  PDEVICE_OBJECT v47; // rdx
  int DeviceRegistryPaths; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  int v52; // ecx
  NTSTATUS DeviceProperty; // eax
  _DWORD *v54; // rdi
  NTSTATUS v55; // eax
  GUID *v56; // rdi
  int v57; // eax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v59; // al
  struct _DEVICE_OBJECT *v60; // r14
  __int64 Pool2; // rax
  unsigned __int16 *v62; // rcx
  int v63; // edx
  int v64; // edi
  bool v65; // al
  int AgpStatus; // eax
  char v67; // al
  int v68; // eax
  struct _DEVICE_OBJECT *v69; // rdi
  char v70; // al
  int v71; // eax
  char *v72; // rdi
  unsigned int v73; // edx
  __int16 v74; // r10
  char **v75; // r9
  char *v76; // rax
  signed __int64 v77; // rcx
  __int16 v78; // r10
  const wchar_t **v79; // r9
  const wchar_t *v80; // rax
  char *v81; // rcx
  _DWORD *v82; // rdx
  unsigned __int64 v83; // r8
  int v84; // eax
  __int64 v85; // r13
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  char **v89; // rcx
  __int64 v90; // rax
  NTSTATUS v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  bool v95; // cl
  int v96; // eax
  int v97; // edi
  int v98; // r12d
  __int64 v99; // r14
  _QWORD *v100; // rcx
  PVOID *v101; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v103; // rdi
  unsigned int v104; // esi
  struct _DEVICE_OBJECT *v105; // r15
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-580h]
  char v111; // [rsp+50h] [rbp-558h]
  char v112; // [rsp+51h] [rbp-557h]
  char v113; // [rsp+52h] [rbp-556h]
  char v114; // [rsp+53h] [rbp-555h]
  char v115; // [rsp+54h] [rbp-554h]
  char v116; // [rsp+55h] [rbp-553h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+58h] [rbp-550h] BYREF
  char v118; // [rsp+60h] [rbp-548h]
  char v119; // [rsp+61h] [rbp-547h]
  char v120; // [rsp+62h] [rbp-546h]
  char v121; // [rsp+63h] [rbp-545h]
  char v122; // [rsp+64h] [rbp-544h]
  int v123; // [rsp+68h] [rbp-540h]
  int v124; // [rsp+6Ch] [rbp-53Ch]
  char v125; // [rsp+70h] [rbp-538h]
  char v126; // [rsp+71h] [rbp-537h]
  char v127; // [rsp+72h] [rbp-536h] BYREF
  char v128; // [rsp+73h] [rbp-535h]
  ULONG ResultLength; // [rsp+74h] [rbp-534h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-530h]
  char *v131; // [rsp+80h] [rbp-528h]
  unsigned int v132; // [rsp+88h] [rbp-520h] BYREF
  int v133; // [rsp+8Ch] [rbp-51Ch]
  ULONG RequiredSize; // [rsp+90h] [rbp-518h] BYREF
  int v135; // [rsp+94h] [rbp-514h] BYREF
  ULONG ReturnedProductType; // [rsp+98h] [rbp-510h] BYREF
  __int64 v137; // [rsp+A0h] [rbp-508h] BYREF
  ULONG Type; // [rsp+A8h] [rbp-500h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+B0h] [rbp-4F8h]
  void *Source1; // [rsp+B8h] [rbp-4F0h]
  PVOID P; // [rsp+C0h] [rbp-4E8h]
  __int64 v142; // [rsp+C8h] [rbp-4E0h] BYREF
  int v143; // [rsp+D0h] [rbp-4D8h]
  int v144; // [rsp+D4h] [rbp-4D4h]
  const wchar_t *v145; // [rsp+D8h] [rbp-4D0h] BYREF
  int v146; // [rsp+E0h] [rbp-4C8h]
  _QWORD v147[2]; // [rsp+E8h] [rbp-4C0h] BYREF
  UNICODE_STRING String1; // [rsp+F8h] [rbp-4B0h] BYREF
  UNICODE_STRING v149; // [rsp+108h] [rbp-4A0h] BYREF
  UNICODE_STRING v150; // [rsp+118h] [rbp-490h] BYREF
  UNICODE_STRING v151; // [rsp+128h] [rbp-480h] BYREF
  _QWORD v152[2]; // [rsp+138h] [rbp-470h] BYREF
  __int64 v153; // [rsp+148h] [rbp-460h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp-458h] BYREF
  _QWORD v155[14]; // [rsp+160h] [rbp-448h] BYREF
  int v156[4]; // [rsp+1D0h] [rbp-3D8h] BYREF
  __int64 v157; // [rsp+1E0h] [rbp-3C8h]
  __int64 v158; // [rsp+1E8h] [rbp-3C0h] BYREF
  int v159; // [rsp+1F0h] [rbp-3B8h]
  _DWORD v160[2]; // [rsp+200h] [rbp-3A8h] BYREF
  _BYTE v161[24]; // [rsp+208h] [rbp-3A0h] BYREF
  __int64 v162; // [rsp+220h] [rbp-388h]
  int v163; // [rsp+228h] [rbp-380h]
  int v164; // [rsp+22Ch] [rbp-37Ch]
  int v165; // [rsp+230h] [rbp-378h]
  int v166; // [rsp+234h] [rbp-374h]
  int v167; // [rsp+238h] [rbp-370h]
  int v168; // [rsp+23Ch] [rbp-36Ch]
  _DWORD VersionInformation[72]; // [rsp+240h] [rbp-368h] BYREF
  __int64 v170; // [rsp+360h] [rbp-248h]
  __int64 v171; // [rsp+368h] [rbp-240h]
  _QWORD v172[10]; // [rsp+370h] [rbp-238h] BYREF
  int v173; // [rsp+3C0h] [rbp-1E8h]
  int v174; // [rsp+3C4h] [rbp-1E4h]
  int v175; // [rsp+3C8h] [rbp-1E0h]
  int v176; // [rsp+3CCh] [rbp-1DCh]
  const wchar_t *v177; // [rsp+3D0h] [rbp-1D8h]
  __int128 v178; // [rsp+3E0h] [rbp-1C8h] BYREF
  __int128 v179; // [rsp+3F0h] [rbp-1B8h]
  int v180; // [rsp+400h] [rbp-1A8h]
  __int128 v181; // [rsp+408h] [rbp-1A0h] BYREF
  __int64 v182; // [rsp+418h] [rbp-190h]
  wchar_t v183; // [rsp+420h] [rbp-188h]
  wchar_t Str1[20]; // [rsp+428h] [rbp-180h] BYREF
  _OWORD v185[2]; // [rsp+450h] [rbp-158h] BYREF
  __int64 v186; // [rsp+470h] [rbp-138h]
  wchar_t v187; // [rsp+478h] [rbp-130h]
  _OWORD v188[2]; // [rsp+480h] [rbp-128h] BYREF
  wchar_t v189; // [rsp+4A0h] [rbp-108h]
  _OWORD v190[2]; // [rsp+4A8h] [rbp-100h] BYREF
  __int64 v191; // [rsp+4C8h] [rbp-E0h]
  int v192; // [rsp+4D0h] [rbp-D8h]
  _OWORD v193[2]; // [rsp+4D8h] [rbp-D0h] BYREF
  __int64 v194; // [rsp+4F8h] [rbp-B0h]
  _OWORD v195[4]; // [rsp+500h] [rbp-A8h] BYREF
  int v196; // [rsp+540h] [rbp-68h]
  WCHAR Data[20]; // [rsp+550h] [rbp-58h] BYREF

  v158 = 0LL;
  LOBYTE(v3) = 0;
  v159 = 0;
  v183 = aDriverVgpu[12];
  DeviceExtension = 0LL;
  v181 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = DeviceObject;
  v151.Buffer = (wchar_t *)&v181;
  v7 = 0LL;
  v188[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v189 = aDriverWddmwarp[16];
  String1.Buffer = (wchar_t *)v188;
  v182 = *(_QWORD *)L"VGPU";
  v147[1] = v193;
  v193[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v187 = aDriverBasicdis[20];
  v194 = *(_QWORD *)L"der";
  v152[1] = v185;
  v188[1] = *(_OWORD *)L"WddmWarp";
  v192 = *(_DWORD *)L"r";
  DriverObject = ClientIdentificationAddress;
  v185[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v137 = 0LL;
  v193[1] = *(_OWORD *)L"BasicRender";
  v116 = 0;
  DeviceObjecta = 0LL;
  v186 = *(_QWORD *)L"play";
  ResultLength = 0;
  v185[1] = *(_OWORD *)L"BasicDisplay";
  v114 = 1;
  v123 = v3;
  v190[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v111 = 0;
  v191 = *(_QWORD *)L"ender";
  v112 = 0;
  v128 = 0;
  v115 = 0;
  v113 = 0;
  v122 = 0;
  v125 = 0;
  v120 = 0;
  v126 = 0;
  v127 = 0;
  v118 = 0;
  v121 = 0;
  v119 = 0;
  v124 = 3;
  *(_QWORD *)&v151.Length = 1703960LL;
  *(_QWORD *)&String1.Length = 2228256LL;
  v147[0] = 2621478LL;
  v152[0] = 2752552LL;
  v190[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v149.Length = 2883626LL;
  v149.Buffer = (wchar_t *)v190;
  v195[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v195[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v195[2] = *(_OWORD *)L"omputeAccelerator";
  v196 = *(_DWORD *)L"r";
  v150.Buffer = (wchar_t *)v195;
  v195[3] = *(_OWORD *)L"celerator";
  *(_QWORD *)&v150.Length = 4456514LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      a3,
      ClientIdentificationAddress,
      DeviceObject,
      0);
  v153 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v131 = DriverObjectExtension;
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    goto LABEL_9;
  }
  v9 = DpiDxgkDdiAddDevice((__int64)DriverObjectExtension, (__int64)DeviceObject, &v137);
  LODWORD(started) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v131 + 18), v9);
LABEL_9:
    v13 = 0;
    LOBYTE(v12) = 0;
LABEL_29:
    v21 = (__int64)v131;
    v22 = (struct _KMUTANT *)(v131 + 72);
    goto LABEL_30;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v116 = 1;
  LOBYTE(v10) = 1;
  UnicodeSubstring = (wchar_t *)RtlFindUnicodeSubstring(p_DriverName, v147, v10);
  v16 = DriverObject;
  if ( UnicodeSubstring == DriverObject->DriverName.Buffer )
  {
    v17 = 1;
    v113 = 1;
    v125 = 1;
    v120 = 1;
    goto LABEL_15;
  }
  if ( !RtlCompareUnicodeString(&String1, p_DriverName, 1u) )
  {
    v120 = 1;
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  if ( !RtlCompareUnicodeString(&v149, p_DriverName, 1u) || !RtlCompareUnicodeString(&v150, p_DriverName, 1u) )
  {
    v119 = 1;
    goto LABEL_14;
  }
  if ( !RtlCompareUnicodeString(&v151, p_DriverName, 1u) )
  {
    v126 = 1;
    goto LABEL_14;
  }
  if ( (wchar_t *)RtlFindUnicodeSubstring(p_DriverName, v152, 1LL) != v16->DriverName.Buffer )
  {
    if ( dword_1C0140A00 != 5 || (v121 = 1, ((dword_1C0140A04 - 192) & 0xFFFFFFFD) != 0) )
      v121 = 0;
    v132 = 0;
    v118 = v131[134];
    memset(v155, 0, sizeof(v155));
    v35 = *((_QWORD *)v131 + 6);
    v155[2] = L"Start";
    LODWORD(v155[1]) = 292;
    v155[3] = &v132;
    LODWORD(v155[4]) = 67108868;
    LODWORD(v155[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v35, v155, 0LL, 0LL);
    started = (struct _DEVICE_OBJECT *)RegistryValues;
    if ( RegistryValues >= 0 )
    {
      if ( v132 != 3 )
      {
        WdLogSingleEntry1(2LL, v132);
        LODWORD(started) = -1073741637;
        goto LABEL_27;
      }
      goto LABEL_14;
    }
LABEL_25:
    v19 = (__int64)started;
    goto LABEL_26;
  }
  Source1 = 0LL;
  v122 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(DeviceObject, DevicePropertyHardwareID, (__int64)&ResultLength);
  started = (struct _DEVICE_OBJECT *)DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_25;
  v34 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v113 = 1;
    if ( byte_1C0140492 )
    {
      v114 = 0;
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(4LL, 0LL);
    }
  }
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( (int)started < 0 )
    goto LABEL_27;
  v17 = v113;
LABEL_15:
  if ( !v137 )
  {
    v133 = 4;
    v18 = 496;
    v124 = 2;
    if ( v17 )
    {
      LODWORD(started) = -1073741637;
      v19 = -1073741637LL;
LABEL_26:
      WdLogSingleEntry1(2LL, v19);
LABEL_27:
      LOBYTE(v12) = 0;
      v13 = 0;
LABEL_28:
      LOBYTE(v3) = v123;
      goto LABEL_29;
    }
    goto LABEL_92;
  }
  v18 = 5752;
  v133 = 2;
  v124 = 0;
  v37 = *((_QWORD *)v131 + 77);
  if ( !v37 )
    goto LABEL_92;
  if ( v17 )
  {
    LODWORD(started) = -1073741637;
    v38 = -1073741637LL;
LABEL_83:
    WdLogSingleEntry2(2LL, v37, v38);
    goto LABEL_27;
  }
  v39 = DpiDxgkDdiLinkDevice((__int64)v131, (__int64)TargetDevice, v137, (int *)&v158);
  LODWORD(started) = v39;
  if ( v39 < 0 )
  {
    v38 = v39;
    v37 = *((_QWORD *)v131 + 77);
    goto LABEL_83;
  }
  if ( HIDWORD(v158) > 0x100 )
  {
    started = (struct _DEVICE_OBJECT *)-1073741756LL;
LABEL_88:
    v19 = (__int64)started;
    goto LABEL_26;
  }
  if ( HIDWORD(v158) && !(_BYTE)v159 )
  {
    v18 = 2744;
    v133 = 3;
    v124 = 1;
  }
LABEL_92:
  v40 = IoCreateDevice(DriverObject, v18, 0LL, 0x23u, v118 == 0 ? 0x100 : 0, 0, &DeviceObjecta);
  started = (struct _DEVICE_OBJECT *)v40;
  if ( v40 < 0 )
    goto LABEL_88;
  v41 = (__int64)v131;
  v124 |= (unsigned int)DeviceObjecta & 0xFFFF00;
  DeviceExtension = (char *)DeviceObjecta->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v133;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 4) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 5) = v41;
  *((_QWORD *)DeviceExtension + 6) = v137;
  DeviceExtension[480] = v113;
  v42 = v119;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v42;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v43 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v44 = IoAttachDeviceToDeviceStack(DeviceObjecta, v43);
  *((_QWORD *)DeviceExtension + 20) = v44;
  if ( !v44 )
  {
    v19 = -1073741810LL;
    LODWORD(started) = -1073741810;
    goto LABEL_26;
  }
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v45 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v45 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
    goto LABEL_227;
  v46 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  v7 = DeviceExtension;
  wcscpy(Str1, L"ComputeAccelerator");
  RequiredSize = 0;
  Type = 0;
  if ( IoGetDevicePropertyData(v46, &DEVPKEY_Device_Class, 0, 0, 0x28u, Data, &RequiredSize, &Type) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Data);
    if ( DestinationString.Length >= 0x13u && !wcsncmp_0(Str1, DestinationString.Buffer, 0x12uLL) )
      DeviceExtension[2698] = 1;
  }
  DeviceExtension[2693] = v120;
  DeviceExtension[1154] = v122;
  DeviceExtension[1155] = v125;
  DeviceExtension[1159] = v118;
  DeviceExtension[2694] = v126;
  DeviceExtension[2695] = v121;
  *((_DWORD *)DeviceExtension + 680) = 0;
  *((_QWORD *)DeviceExtension + 36) = &DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C0140491 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
  v47 = TargetDevice;
  *(_QWORD *)(DeviceExtension + 500) = v158;
  *((_DWORD *)DeviceExtension + 127) = v159;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObjecta, (__int64)v47, v41);
  started = (struct _DEVICE_OBJECT *)DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
    goto LABEL_105;
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v41 + 232) )
    {
      v51 = DpiAcpiRegisterAcpiCallbacks(DeviceObjecta);
      v52 = (unsigned __int8)v123;
      if ( v51 >= 0 )
        v52 = 1;
      v123 = v52;
    }
    DeviceExtension[1157] = 1;
  }
  started = TargetDevice;
  DeviceProperty = IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
  if ( DeviceProperty < 0 )
  {
    WdLogSingleEntry1(3LL, DeviceProperty);
    *((_DWORD *)DeviceExtension + 286) = -1;
  }
  v54 = DeviceExtension + 1148;
  v55 = IoGetDeviceProperty(started, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  if ( v55 < 0 || *v54 == -1 )
  {
    WdLogSingleEntry1(3LL, v55);
    *v54 = -1;
  }
  v56 = (GUID *)(DeviceExtension + 544);
  LODWORD(started) = IoGetDeviceProperty(
                       started,
                       DevicePropertyBusTypeGuid,
                       0x10u,
                       DeviceExtension + 544,
                       &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    WdLogSingleEntry1(4LL, DeviceObjecta);
    *v56 = GUID_BUS_TYPE_INVALID;
  }
  if ( !v113 )
  {
    v57 = DpiFdoDetectPostDevice((__int64)DeviceObjecta, &v127);
    started = (struct _DEVICE_OBJECT *)v57;
    if ( v57 < 0 )
      goto LABEL_105;
    if ( v127 )
    {
      WdLogSingleEntry1(4LL, DeviceObjecta);
      *((_WORD *)DeviceExtension + 576) = 257;
      byte_1C0140808 = 1;
      if ( byte_1C0140491 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(TargetDevice);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v56 = (GUID *)(DeviceExtension + 544);
      }
    }
  }
  v135 = 0;
  v59 = (int)DpiReadPnpRegistryValue((__int64)DeviceObjecta, L"SoftGPUAdapter", (char *)&v135, 4u, 2u) >= 0 && v135;
  DeviceExtension[2692] = v59;
  if ( DeviceExtension[1159] )
  {
    *((_DWORD *)DeviceExtension + 281) = 5140;
    *((_QWORD *)DeviceExtension + 141) = 139LL;
    *((_QWORD *)DeviceExtension + 142) = 0LL;
    *((_DWORD *)DeviceExtension + 280) = 0;
    goto LABEL_210;
  }
  if ( RtlCompareMemory(v56, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(v56, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v157 = 0LL;
      WdLogSingleEntry1(4LL, DeviceObjecta);
      if ( !DeviceExtension[1157] )
      {
LABEL_158:
        LODWORD(started) = -1073741637;
        v49 = -1073741637LL;
        goto LABEL_106;
      }
      *((_DWORD *)DeviceExtension + 280) = 2;
      v180 = 0;
      BYTE1(v156[2]) = 0;
      HIWORD(v156[2]) = 0;
      strcpy((char *)v156, "AeiC_HID");
      v156[3] = 0;
      v178 = 0LL;
      v179 = 0LL;
      v68 = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFF, v156, 0x18u, &v178, 0x24u);
      if ( v68 >= 0 )
        *(_QWORD *)(DeviceExtension + 1124) = v179;
      else
        WdLogSingleEntry1(2LL, v68);
      v180 = 0;
      strcpy((char *)v156, "AeiC_SUB");
      BYTE1(v156[2]) = 0;
      HIWORD(v156[2]) = 0;
      v156[3] = 0;
      v178 = 0LL;
      v179 = 0LL;
      if ( (int)DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFF, v156, 0x18u, &v178, 0x24u) >= 0 )
        *(_QWORD *)(DeviceExtension + 1132) = v179;
      else
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
      v180 = 0;
      strcpy((char *)v156, "AeiC_HRV");
      BYTE1(v156[2]) = 0;
      HIWORD(v156[2]) = 0;
      v156[3] = 0;
      v178 = 0LL;
      v179 = 0LL;
      LODWORD(started) = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFF, v156, 0x18u, &v178, 0x24u);
      if ( (int)started >= 0 )
      {
        *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v179;
      }
      else
      {
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
        LODWORD(started) = 0;
      }
      if ( DeviceExtension[1152] )
      {
        v69 = IoGetAttachedDeviceReference(TargetDevice);
        started = (struct _DEVICE_OBJECT *)(int)DpiSetDeviceUsageType(v69);
        ObfDereferenceObject(v69);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL, started);
          LODWORD(started) = 0;
        }
      }
    }
    else if ( RtlCompareMemory(v56, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      WdLogSingleEntry1(4LL, DeviceObjecta);
      if ( DeviceExtension[2694] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
        *((_DWORD *)DeviceExtension + 285) = 1;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
    }
    else
    {
      if ( !DeviceExtension[480] )
      {
        v70 = DeviceExtension[2695];
        if ( !v70 && !g_OSTestSigningEnabled )
          goto LABEL_158;
        v45 = g_OSTestSigningEnabled == 0;
        *((_DWORD *)DeviceExtension + 280) = 3;
        if ( v45 || v70 )
          goto LABEL_210;
        P = 0LL;
        v71 = DpiGetDevicePropertyString(TargetDevice, DevicePropertyCompatibleIDs, (__int64)&ResultLength);
        LODWORD(started) = v71;
        if ( v71 < 0 || (v72 = (char *)P) == 0LL )
        {
          WdLogSingleEntry1(2LL, v71);
          goto LABEL_210;
        }
        v73 = 0;
        if ( DeviceExtension[2692] )
        {
          *((_DWORD *)DeviceExtension + 281) = 5140;
          v74 = *(_WORD *)v72;
          v75 = (char **)v172;
          v172[0] = L"SoftGPU_Full_D3D12";
          v172[3] = L"SoftGPU_Full_D3D9L";
          v172[6] = L"SoftGPU_Rod";
          v172[9] = L"SoftGPU_Dod";
          v177 = L"SoftGPU_MCDM";
          v170 = 135LL;
          v171 = 0LL;
          v172[1] = 128LL;
          v172[2] = 0LL;
          v172[4] = 136LL;
          v172[5] = 0LL;
          v172[7] = 137LL;
          v172[8] = 0LL;
          v173 = 134;
          v174 = 4660;
          v175 = 22136;
          v176 = 39612;
          while ( 1 )
          {
            v76 = *v75;
            if ( v74 )
              break;
LABEL_193:
            if ( !*(_WORD *)v76 )
              goto LABEL_196;
            ++v73;
            v75 += 3;
            if ( v73 >= 5 )
              goto LABEL_195;
          }
          v77 = v72 - v76;
          while ( *(_WORD *)v76 )
          {
            if ( *(_WORD *)&v76[v77] == *(_WORD *)v76 )
            {
              v76 += 2;
              if ( *(_WORD *)&v76[v77] )
                continue;
            }
            goto LABEL_193;
          }
LABEL_196:
          *((_DWORD *)DeviceExtension + 282) = *((_DWORD *)&v170 + 6 * (int)v73);
          *((_DWORD *)DeviceExtension + 284) = *((_DWORD *)&v170 + 6 * (int)v73 + 1);
          *((_DWORD *)DeviceExtension + 283) = v172[3 * (int)v73 - 1];
          *((_DWORD *)DeviceExtension + 285) = *((_DWORD *)&v171 + 6 * (int)v73 + 1);
        }
        else
        {
          v78 = *(_WORD *)P;
          v145 = L"MCDMTestDevice";
          v79 = &v145;
          v143 = 5140;
          v144 = 256;
          v146 = 2697;
          while ( 1 )
          {
            v80 = *v79;
            if ( v78 )
              break;
LABEL_203:
            if ( !*v80 )
              goto LABEL_206;
            ++v73;
            v79 += 3;
            if ( v73 )
              goto LABEL_207;
          }
          v81 = (char *)((_BYTE *)P - (_BYTE *)v80);
          while ( *v80 )
          {
            if ( *(_WORD *)&v81[(_QWORD)v80] == *v80 )
            {
              if ( *(_WORD *)&v81[(_QWORD)++v80] )
                continue;
            }
            goto LABEL_203;
          }
LABEL_206:
          *((_DWORD *)DeviceExtension + 281) = *(&v143 + 6 * (int)v73);
          *((_DWORD *)DeviceExtension + 282) = *(&v144 + 6 * (int)v73);
          DeviceExtension[LODWORD(v147[3 * (int)v73])] = 1;
LABEL_207:
          if ( !*((_DWORD *)DeviceExtension + 282) )
          {
            ExFreePoolWithTag(v72, 0);
            goto LABEL_158;
          }
        }
LABEL_195:
        ExFreePoolWithTag(v72, 0);
        goto LABEL_210;
      }
      *((_DWORD *)DeviceExtension + 280) = 3;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      if ( DeviceExtension[1154] )
      {
        *((_DWORD *)DeviceExtension + 282) = 141;
      }
      else if ( DeviceExtension[2693] )
      {
        *((_DWORD *)DeviceExtension + 282) = 140;
      }
    }
LABEL_210:
    if ( DeviceExtension[1152] )
      goto LABEL_214;
    goto LABEL_211;
  }
  WdLogSingleEntry1(4LL, DeviceObjecta);
  v60 = TargetDevice;
  DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
  if ( !*((_QWORD *)DeviceExtension + 77) )
  {
    v49 = -1073741127LL;
    LODWORD(started) = -1073741127;
    goto LABEL_106;
  }
  Pool2 = ExAllocatePool2(256LL, 256LL, 1953656900LL);
  *((_QWORD *)DeviceExtension + 139) = Pool2;
  if ( !Pool2 )
    goto LABEL_137;
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))DeviceExtension + 77))(
    *((_QWORD *)DeviceExtension + 71),
    0LL,
    Pool2,
    0LL,
    256);
  v62 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
  *((_DWORD *)DeviceExtension + 280) = 1;
  v63 = *v62;
  *((_DWORD *)DeviceExtension + 281) = v63;
  v64 = v62[1];
  *((_DWORD *)DeviceExtension + 282) = v64;
  *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v62 + 8);
  if ( (v62[7] & 0x7F) == 0 )
  {
    *((_DWORD *)DeviceExtension + 283) = v62[22];
    *((_DWORD *)DeviceExtension + 284) = v62[23];
  }
  v65 = v63 == 22611 && v64 == 4097;
  DeviceExtension[2696] = v65;
  DpiQueryBusInterface(v60, (__int64)(DeviceExtension + 624));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
  AgpStatus = DpiGetAgpStatus(DeviceObjecta);
  if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
    WdLogSingleEntry1(3LL, AgpStatus);
  LODWORD(started) = DpiGetVgaStatus(DeviceObjecta);
  v67 = DeviceExtension[1152];
  if ( (int)started < 0 )
  {
    if ( v67 )
      WdLogSingleEntry1(3LL, DeviceObjecta);
    goto LABEL_210;
  }
  if ( !v67 && !byte_1C0140808 )
  {
    WdLogSingleEntry1(3LL, DeviceObjecta);
    DeviceExtension[1152] = 1;
    byte_1C0140809 = 1;
  }
  if ( DeviceExtension[1152] )
  {
    if ( byte_1C0140495 )
      DeviceExtension[1156] = 1;
    goto LABEL_210;
  }
LABEL_211:
  if ( !DeviceExtension[480] && DeviceExtension[1154] )
  {
    WdLogSingleEntry1(4LL, DeviceObjecta);
    LODWORD(started) = -1071774664;
    goto LABEL_270;
  }
LABEL_214:
  if ( DeviceExtension[2692] && DeviceExtension[2693] )
  {
    LODWORD(started) = -1073741811;
    v49 = -1073741811LL;
    goto LABEL_106;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
  v82 = DeviceExtension + 1312;
  *((_WORD *)DeviceExtension + 648) = 64;
  v83 = 7LL;
  if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
  {
    *v82 = 1;
    v83 = 6LL;
    v82 = DeviceExtension + 1316;
  }
  memset64(v82, 0x100000001uLL, v83 >> 1);
  if ( (v83 & 1) != 0 )
    v82[v83 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 1384), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObjecta);
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 45, 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2600), 0);
  *((_QWORD *)DeviceExtension + 314) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 313) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 324) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 323) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 339) = DeviceExtension + 2704;
  *((_QWORD *)DeviceExtension + 338) = DeviceExtension + 2704;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 153) = 0LL;
  *((_DWORD *)DeviceExtension + 292) = 1;
  *((_QWORD *)DeviceExtension + 147) = 0LL;
  *((_DWORD *)DeviceExtension + 296) = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
  v45 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 681) = 65540;
  if ( v45 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v84 = DpiFdoInitializeFdo(DeviceObjecta);
      started = (struct _DEVICE_OBJECT *)v84;
      if ( v84 < 0 )
        goto LABEL_105;
      v111 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)DeviceObjecta->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_227:
  v85 = (__int64)v131;
  DeviceExtension[57] = v118;
  KeWaitForSingleObject((PVOID)(v85 + 72), Executive, 0, 0, 0LL);
  v112 = 1;
  if ( !v7 || !*((_DWORD *)v7 + 126) || (v86 = DpiLdaLinkDeviceToChain(DeviceObjecta), LODWORD(started) = v86, v86 >= 0) )
  {
    v89 = *(char ***)(v85 + 64);
    if ( *v89 != (char *)(v85 + 56) )
      goto LABEL_282;
    *(_QWORD *)DeviceExtension = v85 + 56;
    *((_QWORD *)DeviceExtension + 1) = v89;
    *v89 = DeviceExtension;
    *(_QWORD *)(v85 + 64) = DeviceExtension;
    ++*(_DWORD *)(v85 + 128);
    v128 = 1;
    if ( *((_QWORD *)DeviceExtension + 21) )
    {
LABEL_237:
      KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
      if ( v7 )
      {
        if ( !*((_QWORD *)v7 + 182) )
        {
          v92 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
          *((_QWORD *)v7 + 182) = v92;
          if ( !v92 )
          {
LABEL_240:
            v87 = -1073741801LL;
            LODWORD(started) = -1073741801;
            v88 = 6LL;
            goto LABEL_231;
          }
          *(_DWORD *)(v92 + 8) = 1;
          KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 182));
        }
        if ( !*((_QWORD *)v7 + 183) )
        {
          v93 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
          *((_QWORD *)v7 + 183) = v93;
          if ( !v93 )
            goto LABEL_240;
          *(_DWORD *)(v93 + 8) = 1;
          KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 183));
        }
        *((_DWORD *)v7 + 368) = 0;
        memset(v7 + 1480, 0, 0x400uLL);
      }
      KeReleaseMutex((PRKMUTEX)(v85 + 72), 0);
      v112 = 0;
      *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
      if ( v7 )
      {
        *((_QWORD *)v7 + 17) = DpiFdoDispatchPower;
        if ( v7[1152] )
        {
          *(_BYTE *)(*((_QWORD *)v7 + 21) + 108LL) = 1;
          AcquireMiniportListMutex();
          if ( qword_1C0140740 && qword_1C0140740 != qword_1C0140748 )
            WdLogSingleEntry2(2LL, DeviceObjecta, (int)started);
          qword_1C0140740 = (__int64)DeviceObjecta;
          v94 = *((_QWORD *)v7 + 6);
          v142 = 0LL;
          started = (struct _DEVICE_OBJECT *)(int)DpiDxgkDdiExchangePreStartInfo(v85, v94, &v142);
          _InterlockedExchange64(&qword_1C01404D8, 0LL);
          KeReleaseMutex(Mutex, 0);
          if ( (int)started < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v85 + 1144), started);
            goto LABEL_271;
          }
          if ( *((_DWORD *)v7 + 4) == 1953656900 && *((_DWORD *)v7 + 5) == 2 )
          {
            v95 = (v142 & 0x200000000LL) != 0;
            v7[2741] = BYTE4(v142) & 1;
            v7[2742] = v95;
          }
        }
      }
      if ( v113 && v122 )
      {
        qword_1C0140748 = (__int64)DeviceObjecta;
        if ( !qword_1C0140740 )
          qword_1C0140740 = (__int64)DeviceObjecta;
        memset(&VersionInformation[1], 0, 0x118uLL);
        VersionInformation[0] = 284;
        if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0
          && (ReturnedProductType = 0,
              RtlGetProductInfo(
                VersionInformation[1],
                VersionInformation[2],
                LOWORD(VersionInformation[69]),
                HIWORD(VersionInformation[69]),
                &ReturnedProductType))
          && ReturnedProductType == 187
          || (unsigned int)ExGetFirmwareType() == 2
          || byte_1C0140493 )
        {
          *(_WORD *)(v7 + 2741) = 257;
        }
      }
      if ( DeviceExtension[57] )
      {
        DeviceObjecta->Flags |= *(_DWORD *)(*((_QWORD *)DeviceExtension + 20) + 48LL) & 0x2014;
      }
      else
      {
        DeviceObjecta->Flags |= 4u;
        DeviceObjecta->Flags |= 0x2000u;
      }
      DeviceObjecta->Flags &= ~0x4000u;
      DeviceObjecta->Flags &= ~0x80u;
      WdLogSingleEntry1(4LL, DeviceObjecta);
LABEL_270:
      if ( !v7 )
        goto LABEL_274;
      goto LABEL_271;
    }
    v90 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
    *((_QWORD *)DeviceExtension + 21) = v90;
    if ( v90 )
    {
      *(_DWORD *)(v90 + 104) = 1;
      *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
      v91 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      started = (struct _DEVICE_OBJECT *)v91;
      if ( v91 >= 0 )
      {
        v115 = 1;
        goto LABEL_237;
      }
LABEL_105:
      v49 = (__int64)started;
LABEL_106:
      v50 = 2LL;
LABEL_107:
      WdLogSingleEntry1(v50, v49);
      goto LABEL_270;
    }
LABEL_137:
    v49 = -1073741801LL;
    LODWORD(started) = -1073741801;
    v50 = 6LL;
    goto LABEL_107;
  }
  v87 = v86;
  v88 = 2LL;
LABEL_231:
  WdLogSingleEntry1(v88, v87);
LABEL_271:
  if ( *((_DWORD *)v7 + 4) == 1953656900 && *((_DWORD *)v7 + 5) == 2 )
    DxgkLogInternalTriageEvent(
      *((_QWORD *)v7 + 489),
      131077,
      -1,
      (__int64)L"Adapter AddDevice has completed with status %1",
      (int)started,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_274:
  v96 = (int)started;
  v13 = v112;
  LOBYTE(v12) = v111;
  v97 = v124;
  v98 = v124;
  LOBYTE(v3) = v123;
  RequiredSize = (unsigned int)started;
  if ( (int)started < 0 )
  {
    LOBYTE(v96) = v123;
    v123 = v96;
    if ( v128 != 1 )
      goto LABEL_28;
    v99 = (__int64)v131;
    v22 = (struct _KMUTANT *)(v131 + 72);
    KeWaitForSingleObject(v131 + 72, Executive, 0, 0, 0LL);
    v100 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v101 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v101 == DeviceExtension )
      {
        *v101 = v100;
        v100[1] = v101;
        --*(_DWORD *)(v99 + 128);
        if ( v7 && *((_DWORD *)v7 + 126) )
          DpiLdaUnLinkDeviceFromChain(DeviceObjecta);
        KeReleaseMutex(v22, 0);
        LOBYTE(v12) = v111;
        LODWORD(started) = RequiredSize;
        v13 = v112;
        v124 = v98;
        v21 = (__int64)v131;
LABEL_30:
        if ( v13 == 1 )
        {
          KeReleaseMutex(v22, 0);
          LOBYTE(v12) = v111;
        }
        if ( DeviceObjecta )
        {
          if ( (_BYTE)v12 == 1 )
            DpiFdoResetFdo();
          if ( v7 )
          {
            v23 = (_DWORD *)*((_QWORD *)v7 + 182);
            if ( v23 && v23[2] == 1 )
            {
              ExFreePoolWithTag(v23, 0);
              *((_QWORD *)v7 + 182) = 0LL;
            }
            v24 = (_DWORD *)*((_QWORD *)v7 + 183);
            if ( v24 && v24[2] == 1 )
            {
              ExFreePoolWithTag(v24, 0);
              *((_QWORD *)v7 + 183) = 0LL;
            }
            if ( (_BYTE)v3 == 1 )
              DpiAcpiUnregisterAcpiCallbacks(DeviceObjecta);
            v25 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 73);
            if ( v25 )
            {
              v25(*((_QWORD *)v7 + 71));
              memset(v7 + 560, 0, 0x40uLL);
            }
            v26 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 81);
            if ( v26 )
            {
              v26(*((_QWORD *)v7 + 79));
              *((_OWORD *)v7 + 39) = 0LL;
              *((_OWORD *)v7 + 40) = 0LL;
              *((_OWORD *)v7 + 41) = 0LL;
            }
            v27 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 87);
            if ( v27 )
            {
              v27(*((_QWORD *)v7 + 85));
              memset(v7 + 672, 0, 0xB8uLL);
            }
            v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 110);
            if ( v28 )
            {
              v28(*((_QWORD *)v7 + 108));
              memset(v7 + 856, 0, 0x58uLL);
            }
            RtlFreeUnicodeString((PUNICODE_STRING)v7 + 32);
            RtlFreeUnicodeString((PUNICODE_STRING)v7 + 33);
            v29 = (void *)*((_QWORD *)v7 + 139);
            if ( v29 )
            {
              ExFreePoolWithTag(v29, 0);
              *((_QWORD *)v7 + 139) = 0LL;
            }
          }
          if ( DeviceExtension )
          {
            v30 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
            if ( v30 )
            {
              if ( v115 == 1 )
                ExDeleteResourceLite(v30);
              v31 = (_DWORD *)*((_QWORD *)DeviceExtension + 21);
              if ( v31[26] == 1 && v31 )
              {
                ExFreePoolWithTag(v31, 0);
                *((_QWORD *)DeviceExtension + 21) = 0LL;
              }
            }
            v32 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
            if ( v32 )
              IoDetachDevice(v32);
          }
          IoDeleteDevice(DeviceObjecta);
          DeviceObjecta = 0LL;
        }
        if ( v116 == 1 )
        {
          DpiDxgkDdiRemoveDevice(v21, v137, v12);
          v33 = v114;
        }
        else
        {
          v33 = v114;
          if ( !v114 )
            goto LABEL_295;
          if ( !*(_QWORD *)(v21 + 1344)
            || (DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL), (v103 = DiagnosticInfoArgs) == 0) )
          {
LABEL_293:
            if ( (_DWORD)started != -1071774664 )
              DxgCreateLiveDumpWithWdLogs2(403LL, 2049LL, (int)started, 0LL, 0LL, 0LL);
            goto LABEL_295;
          }
          v104 = *(_DWORD *)(DiagnosticInfoArgs + 216);
          v105 = TargetDevice;
          *(_QWORD *)DiagnosticInfoArgs = v137;
          if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v21 + 1344))(v105, DiagnosticInfoArgs) >= 0 )
          {
            if ( *(_DWORD *)(v103 + 220) > v104 )
              *(_DWORD *)(v103 + 220) = 0;
            DxgCreateLiveDumpWithDriverBlob(
              v105,
              0x1B0u,
              *(int *)(v103 + 8),
              (int)started,
              0LL,
              0LL,
              (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v103);
            v33 = 0;
          }
          DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v103);
        }
        if ( v33 )
          goto LABEL_293;
LABEL_295:
        v97 = v124;
        goto LABEL_296;
      }
    }
LABEL_282:
    __fastfail(3u);
  }
LABEL_296:
  memset(v161, 0, sizeof(v161));
  v164 = 0;
  v106 = DxgkDiagCalcDuration1us(&v153);
  v160[0] = 6;
  v160[1] = 64;
  v163 = 0;
  v162 = 0LL;
  memset(v161, 0, sizeof(v161));
  v165 = 34;
  v166 = v97;
  v167 = v106;
  v168 = (int)started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v160, 0x100000000LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    *(_DWORD *)Exclusive = (_DWORD)started;
    McTemplateK0ppq_EtwWriteTransfer(
      v107,
      &EventExitDpiAddDevice,
      v108,
      DriverObject,
      TargetDevice,
      *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
