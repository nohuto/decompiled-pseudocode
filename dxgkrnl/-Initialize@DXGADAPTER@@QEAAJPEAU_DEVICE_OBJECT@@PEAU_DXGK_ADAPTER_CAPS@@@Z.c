__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 result; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _ERESOURCE *v11; // rax
  NTSTATUS v12; // eax
  int v13; // ebx
  _BYTE *DeviceExtension; // rax
  int v15; // eax
  struct _LUID *v16; // rdx
  __int64 RenderCore; // rdi
  int (__fastcall *v18)(_QWORD, __int128 *); // rax
  unsigned __int8 v19; // di
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v21; // eax
  const wchar_t *v22; // r9
  int AdapterInfo; // eax
  unsigned int v24; // eax
  const struct _GUID *v25; // rdx
  unsigned __int16 v26; // r8
  unsigned __int16 v27; // r9
  int v28; // eax
  __int64 v29; // rbx
  const wchar_t *v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned int v38; // r13d
  unsigned __int8 v39; // r8
  __int64 v40; // rbx
  const wchar_t *v41; // r9
  __int64 v42; // r8
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // ecx
  char v50; // al
  int v51; // eax
  unsigned int v52; // edi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  bool v56; // cc
  char v57; // r15
  unsigned int v58; // eax
  __int64 v59; // r9
  UINT PhysicalAdapterCapsSizeFromDdiVersion; // r12d
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rdi
  __int64 v70; // rax
  unsigned int *v71; // r13
  int v72; // eax
  unsigned int v73; // edx
  __int64 v74; // rbx
  __int64 v75; // rdi
  __int64 v76; // r15
  int v77; // eax
  unsigned int v78; // r15d
  char v79; // al
  int v80; // eax
  int v81; // eax
  unsigned int v82; // ecx
  _BYTE *v83; // r8
  int v84; // eax
  struct _DXGK_ADAPTER_CAPS *v85; // r9
  char v86; // dl
  unsigned int v87; // eax
  struct _DXGK_ADAPTER_CAPS *v88; // r13
  char v89; // dl
  char v90; // dl
  char v91; // dl
  char v92; // cl
  int v93; // r8d
  char v94; // r8
  char v95; // al
  char v96; // al
  unsigned int v97; // eax
  int v98; // ecx
  __int64 v99; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v101; // rax
  struct DXGGLOBAL *v102; // rax
  char v103; // r9
  char v104; // r8
  unsigned int v105; // ecx
  unsigned int v106; // edx
  unsigned int v107; // edi
  DXGGLOBAL *v108; // rax
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r8
  int v112; // eax
  char v113; // cl
  __int64 *v114; // r12
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  int IsEnabledDeviceUsage; // eax
  char v121; // dl
  int v122; // eax
  char *v123; // rbx
  int DisplayCore; // eax
  __int64 v125; // r15
  bool v126; // zf
  char v127; // cl
  char v128; // dl
  int v129; // eax
  char v130; // al
  unsigned __int8 IsDxgmms2; // al
  __int64 v132; // rdx
  DXGADAPTER *v133; // rcx
  unsigned int v134; // r13d
  int v135; // eax
  bool IsBddFallbackDriver; // cf
  __int64 v137; // rdx
  __int64 v138; // r8
  int v139; // eax
  DXGGLOBAL *v140; // rax
  int v141; // eax
  __int64 v142; // rbx
  int v143; // eax
  char *v144; // rax
  char *v145; // rdi
  void *v146; // rax
  void *v147; // rdi
  void *v148; // rax
  void *v149; // rdi
  _QWORD *v150; // rcx
  _QWORD *v151; // rcx
  _QWORD *v152; // rcx
  int v153; // eax
  DXGADAPTER *v154; // rcx
  __int64 v155; // rdi
  __int64 v156; // rbx
  struct DXGGLOBAL *v157; // rax
  int v158; // eax
  struct DXGGLOBAL *v159; // rax
  __int64 v160; // rdx
  DXGGLOBAL *v161; // rax
  __int64 v162; // [rsp+20h] [rbp-E0h]
  void *v163; // [rsp+28h] [rbp-D8h]
  __int64 v164; // [rsp+28h] [rbp-D8h]
  unsigned int v165; // [rsp+50h] [rbp-B0h] BYREF
  char v166; // [rsp+54h] [rbp-ACh]
  bool IsAdapterSessionized; // [rsp+55h] [rbp-ABh]
  unsigned int v168; // [rsp+58h] [rbp-A8h]
  unsigned int v169; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v170; // [rsp+60h] [rbp-A0h]
  int v171; // [rsp+64h] [rbp-9Ch] BYREF
  int v172; // [rsp+68h] [rbp-98h] BYREF
  int v173; // [rsp+6Ch] [rbp-94h]
  struct _DXGK_ADAPTER_CAPS *v174; // [rsp+70h] [rbp-90h] BYREF
  __int64 v175; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v176; // [rsp+80h] [rbp-80h] BYREF
  __int64 v177; // [rsp+B0h] [rbp-50h]
  _BYTE v178[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v179; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v180; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v181; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v182[2]; // [rsp+138h] [rbp+38h] BYREF

  v174 = a3;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 6858LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      6858LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v6 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 21) = v6;
  if ( !v6 )
  {
LABEL_5:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return 3221225495LL;
  }
  v8 = ExInitializeResourceLite(v6);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_8;
  *((_QWORD *)this + 27) = DeviceObject;
  *((_QWORD *)this + 28) = DpiGetSysMmAdapterFromDevice();
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 29) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  LODWORD(v9) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4564));
  if ( (int)v9 < 0 )
  {
    WdLogSingleEntry1(6LL, 6908LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"ZwAllocateLocallyUniqueId failed",
      6908LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v9;
  }
  v11 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 34) = v11;
  if ( !v11 )
    goto LABEL_5;
  v12 = ExInitializeResourceLite(v11);
  v9 = v12;
  if ( v12 < 0 )
  {
LABEL_8:
    WdLogSingleEntry2(3LL, this, v9);
    return (unsigned int)v9;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v13 = 0;
  *((_QWORD *)this + 5) = -1LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v173 = 0;
  v172 = 0;
  if ( DeviceExtension[481] )
  {
    v15 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v172);
    RenderCore = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry2(2LL, v15, 6955LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"InitializeParavirtualizedAdapter failed: 0x%I64x",
        RenderCore,
        6955LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    v13 = v172;
    v173 = v172;
  }
  else
  {
    AdapterInfo = DpiGetAdapterInfo(
                    (__int64)DeviceObject,
                    (char *)this + 1568,
                    (_QWORD *)this + 35,
                    (DXGADAPTER *)((char *)this + 2104));
    LODWORD(RenderCore) = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(3LL, this, AdapterInfo);
      return (unsigned int)RenderCore;
    }
  }
  *(_QWORD *)v182 = 0LL;
  v18 = (int (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 273);
  v181 = 0LL;
  if ( v18 && v18(*((_QWORD *)this + 264), &v181) >= 0 )
  {
    *(_QWORD *)((char *)this + 4636) = *((_QWORD *)&v181 + 1);
    *((_DWORD *)this + 1161) = v182[0];
  }
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v16, v182, 0LL);
  v19 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 944LL),
                                       v182[0]);
    if ( !SessionDataForSpecifiedSession
      || (v21 = DXGSESSIONDATA::AcquireSessionAdapterOrdinal(SessionDataForSpecifiedSession),
          *((_DWORD *)this + 61) = v21,
          v21 == -1) )
    {
      WdLogSingleEntry2(2LL, v182[0], -1073741801LL);
      v22 = L"Exceeded the maximum number of sessionized adapter in session 0x%I64x, returning 0x%I64x.";
      v164 = -1073741801LL;
      v162 = v182[0];
LABEL_26:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v162, v164, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v24 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2), v19);
  *((_DWORD *)this + 60) = v24;
  if ( v24 == -1 )
    return 3221225495LL;
  if ( (*((_DWORD *)this + 109) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) = 1;
  v28 = *((_DWORD *)this + 109);
  if ( (v28 & 8) != 0 && (v28 & 0x10) != 0 )
  {
    WdLogSingleEntry1(1LL, 7026LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!(IsSoftGPU() && IsWarpAdapter())",
      7026LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + 56) )
  {
    v29 = 7033LL;
    WdLogSingleEntry1(2LL, 7033LL);
    v30 = L"Miniport did not provide required DDIs";
LABEL_37:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, v29, 0LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 73) )
    *((_QWORD *)this + 73) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 134) )
    *((_QWORD *)this + 134) = W32kStub_GreSfmOpenTokenEvent;
  v31 = DXGADAPTER::CallDriverQueryInterface(this, v25, v26, v27, (char *)this + 1912, v163);
  v36 = v31;
  if ( v31 >= 0 )
  {
    if ( *((_WORD *)this + 957) >= 4u )
      goto LABEL_47;
  }
  else
  {
    v37 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = v36;
  }
  memset((char *)this + 1912, 0, 0xB8uLL);
LABEL_47:
  v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  v168 = v38;
  *((_DWORD *)this + 524) = v38;
  if ( v38 < 0x7000 )
  {
    if ( v38 < 0x6002 )
      goto LABEL_56;
  }
  else
  {
    if ( !*((_DWORD *)this + 418) )
      goto LABEL_56;
    if ( *((_DWORD *)this + 419) )
    {
      v39 = 0;
LABEL_55:
      DXGADAPTER::SetModeBehavior(this, v32, v39);
      goto LABEL_56;
    }
  }
  if ( *((_DWORD *)this + 418) && *((_DWORD *)this + 419) )
  {
    v39 = 1;
    goto LABEL_55;
  }
LABEL_56:
  if ( v38 - 20480 <= 5 )
  {
    v40 = 7108LL;
    WdLogSingleEntry1(2LL, 7108LL);
    v41 = L"Cannot load an M1 threshold driver on later builds.";
LABEL_58:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, v40, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *(_QWORD *)&v176.InputDataSize = 0LL;
  v176.pOutputData = (char *)this + 2216;
  *(_QWORD *)&v176.Type = 1LL;
  *(_OWORD *)&v176.OutputDataSize = 0LL;
  v176.pInputData = 0LL;
  v176.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v38);
  if ( !v176.OutputDataSize )
    return 3221225485LL;
  v43 = DXGADAPTER::DdiQueryAdapterInfo(this, &v176, v42);
  RenderCore = v43;
  if ( v43 < 0 )
  {
    WdLogSingleEntry1(2LL, v43);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Miniport failed DdiQueryAdapterInfo(DXGKQAITYPE_DRIVERCAPS) with status 0x%I64x",
      RenderCore,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)RenderCore;
  }
  v44 = *((_DWORD *)this + 638);
  if ( v44 <= 9472 )
  {
    if ( v44 < 4864 )
    {
      if ( *((_QWORD *)this + 103) )
      {
        *((_DWORD *)this + 705) = 1300;
      }
      else if ( v44 == 4608 )
      {
        *((_DWORD *)this + 705) = 1200;
      }
      else if ( *((_QWORD *)this + 99) && (*((_DWORD *)this + 567) & 4) != 0 )
      {
        *((_DWORD *)this + 705) = 1105;
      }
      else
      {
        *((_DWORD *)this + 705) = 1000;
      }
      goto LABEL_77;
    }
  }
  else if ( *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 638));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Miniport returned incorrect WDDMVersion: 0x%I64x",
      *((int *)this + 638),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v45 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v44);
  *((_DWORD *)this + 705) = v45;
  if ( v45 < 2600 )
LABEL_77:
    *((_DWORD *)this + 698) &= ~8u;
  v46 = *((_DWORD *)this + 698);
  if ( (v46 & 8) != 0 )
    *((_DWORD *)this + 109) |= 0x80000u;
  if ( *((_BYTE *)this + 1569) && (v46 & 0xC) == 0 )
  {
    WdLogSingleEntry1(2LL, 7188LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UMD name is missing and device is not compute only",
      7188LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225524LL;
  }
  v47 = *((_QWORD *)this + 27);
  v171 = 0;
  v48 = DpiReadPnpRegistryValue(v47, L"ACGSupported", &v171, 4LL, 2);
  v49 = v171;
  if ( v48 < 0 )
    v49 = 0;
  v171 = v49;
  if ( v49 || (v50 = 0, *((int *)this + 705) >= 2200) )
    v50 = 1;
  *((_BYTE *)this + 212) = v50;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 698) &= ~4u;
    *((_DWORD *)this + 698) &= ~0x10u;
    *((_DWORD *)this + 571) &= 0xFFFFD2FF;
    *((_BYTE *)this + 2756) = 0;
    *((_BYTE *)this + 2784) = 1;
    *((_BYTE *)this + 2758) = 1;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 567) &= ~0x100000u;
  }
  else if ( v38 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v51 = *((_DWORD *)this + 109);
      if ( (v51 & 4) == 0 && (v51 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 571) |= 0x400u;
    }
  }
  v170 = *((_DWORD *)this + 72);
  v52 = v170;
  v53 = 344LL * v170;
  v177 = v170;
  if ( !is_mul_ok(v170, 0x158uLL) )
    v53 = -1LL;
  v54 = operator new[](v53, 0x4B677844u, 64LL);
  *((_QWORD *)this + 351) = v54;
  if ( !v54 )
  {
    WdLogSingleEntry1(6LL, 7247LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGK_PHYSICALADAPTERINFO",
      7247LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v56 = *((_DWORD *)this + 638) < 0x2000;
  v57 = 0;
  v166 = 0;
  if ( v56 || v38 < 0x5005 )
  {
    v71 = (unsigned int *)((char *)this + 2284);
LABEL_142:
    if ( v52 )
    {
      v74 = v177;
      v75 = 0LL;
      do
      {
        *(_WORD *)(v75 + *((_QWORD *)this + 351)) = *((_WORD *)this + 1146);
        *(_DWORD *)(v75 + *((_QWORD *)this + 351) + 16) ^= (*(_DWORD *)(v75 + *((_QWORD *)this + 351) + 16) ^ (*v71 >> 7)) & 1;
        *(_DWORD *)(v75 + *((_QWORD *)this + 351) + 16) ^= (*(_DWORD *)(v75 + *((_QWORD *)this + 351) + 16) ^ (*v71 >> 5)) & 2;
        *(_WORD *)(v75 + *((_QWORD *)this + 351) + 2) = *((_WORD *)this + 1144);
        *(_QWORD *)(v75 + *((_QWORD *)this + 351) + 8) = *((_QWORD *)this + 27);
        if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
        {
          v76 = *((_QWORD *)this + 351);
          *(_DWORD *)(v75 + v76 + 16) ^= (*(_DWORD *)(v75 + v76 + 16) ^ (DXGADAPTER::IsGpuVaIoMmuSupported(this) << 6)) & 0x40;
          if ( (*(_DWORD *)(v75 + v76 + 16) & 0x42) != 0 )
            *(_WORD *)(v75 + v76 + 48) = 257;
        }
        v75 += 344LL;
        --v74;
      }
      while ( v74 );
      v13 = v173;
    }
    goto LABEL_149;
  }
  *((_DWORD *)this + 704) = 0;
  v58 = 0;
  v165 = 0;
  if ( v52 )
  {
    PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(v38);
    while ( 1 )
    {
      *(_QWORD *)&v179.Type = 15LL;
      *(_QWORD *)&v179.InputDataSize = 4LL;
      v179.pOutputData = (void *)(v59 + 344LL * (unsigned int)v55);
      *(_QWORD *)&v179.Flags.0 = 0LL;
      HIDWORD(v179.hKmdProcessHandle) = 0;
      v179.pInputData = &v165;
      v179.OutputDataSize = PhysicalAdapterCapsSizeFromDdiVersion;
      v61 = DXGADAPTER::DdiQueryAdapterInfo(this, &v179, v55);
      if ( v61 < 0 )
        break;
      if ( v38 >= 0xC003 )
      {
        v62 = *((_QWORD *)this + 351);
        v63 = 344LL * v165;
        if ( (*(_DWORD *)(v63 + v62 + 16) & 0x20) != 0 )
        {
          v64 = *(unsigned int *)(v63 + v62 + 24);
          if ( (unsigned int)v64 >= *(unsigned __int16 *)(v63 + v62) )
          {
            WdLogSingleEntry3(2LL, this, v64, *(unsigned __int16 *)(v63 + v62));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: VirtualCopyEngineSupported but node index is invalid (VirtualCopyIndex:%u, NumEx"
                        "ecutionNodes:%u)",
              (__int64)this,
              *(unsigned int *)(344LL * v165 + *((_QWORD *)this + 351) + 24),
              *(unsigned __int16 *)(344LL * v165 + *((_QWORD *)this + 351)),
              0LL,
              0LL);
            return 3221225485LL;
          }
          if ( (*((_DWORD *)this + 571) & 0x2000) == 0 )
          {
            WdLogSingleEntry2(2LL, this, 7300LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: IoMmuSecureModeRequired must be set for a device exposing a virtual copy engine",
              (__int64)this,
              7300LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
      }
      if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
      {
        v65 = v165;
        v66 = *((_QWORD *)this + 351);
        v67 = 344LL * v165;
        if ( (*(_DWORD *)(v67 + v66 + 16) & 2) != 0 )
        {
          *(_BYTE *)(v67 + v66 + 49) = 1;
          v65 = v165;
        }
        v68 = *((_QWORD *)this + 351);
        v69 = 344LL * v65;
        if ( (*(_DWORD *)(v69 + v68 + 16) & 0x40) != 0 )
        {
          if ( !DXGADAPTER::IsGpuVaIoMmuSupported(this) )
          {
            WdLogSingleEntry1(2LL, this);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: GpuVaIommuRequired is set for a physical adapter, but not in IOMMU_CAPS",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
          *(_BYTE *)(v69 + v68 + 49) = 1;
          *(_BYTE *)(344LL * v165 + *((_QWORD *)this + 351) + 48) = 1;
          v65 = v165;
        }
        v52 = v170;
      }
      else
      {
        v65 = v165;
      }
      v59 = *((_QWORD *)this + 351);
      v70 = v65;
      v55 = v65 + 1;
      v58 = *(unsigned __int16 *)(344 * v70 + v59) + *((_DWORD *)this + 704);
      v165 = v55;
      *((_DWORD *)this + 704) = v58;
      if ( (unsigned int)v55 >= v52 )
      {
        v57 = v166;
        goto LABEL_119;
      }
    }
    WdLogSingleEntry1(4LL, v61);
    v57 = 1;
  }
  else
  {
LABEL_119:
    if ( *((int *)this + 705) <= 2400 && v58 > 0x40 )
    {
      WdLogSingleEntry3(2LL, this, 64LL, v58);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter 0x%I64x: Exceeded maximum number of %I64d nodes on pre-WDDM 2.5 adapter. Total node count: %I64d",
        (__int64)this,
        64LL,
        *((unsigned int *)this + 704),
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)this + 570) & 1) == 0 )
    {
      WdLogSingleEntry2(2LL, this, 7341LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter 0x%I64x: SchedulingCaps.MultiEngineAware is not set by WDDMv2 driver",
        (__int64)this,
        7341LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  v71 = (unsigned int *)((char *)this + 2284);
  if ( (*((_DWORD *)this + 571) & 0x800) != 0 )
  {
    v169 = 0;
    if ( v52 )
    {
      while ( 1 )
      {
        v175 = 0LL;
        v176.pInputData = &v169;
        v176.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v176.pOutputData = &v175;
        v176.InputDataSize = 4;
        v176.OutputDataSize = 8;
        v72 = DXGADAPTER::DdiQueryAdapterInfo(this, &v176, v55);
        RenderCore = v72;
        if ( v72 < 0 )
          break;
        if ( (v175 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(2LL, v175);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Frame buffer reserve size must be a multiple of PAGE_SIZE. Size=%I64u",
            v175,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_QWORD *)(344LL * v169 + *((_QWORD *)this + 351) + 56) = v175;
        v73 = v169;
        v55 = *(_QWORD *)(344LL * v169 + *((_QWORD *)this + 351) + 56);
        if ( v55 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v169, v55);
          if ( (int)result < 0 )
            return result;
          v73 = v169;
        }
        v52 = v170;
        v169 = v73 + 1;
        if ( v73 + 1 >= v170 )
          goto LABEL_135;
      }
      WdLogSingleEntry1(2LL, v72);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to query frame buffer save area size. Status 0x%I64x",
        RenderCore,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
  }
LABEL_135:
  if ( v57 )
    goto LABEL_142;
LABEL_149:
  if ( *((int *)this + 705) >= 2400 )
  {
    if ( *((_DWORD *)this + 698) >= 0x80u )
    {
      v40 = 7422LL;
      WdLogSingleEntry1(2LL, 7422LL);
      v41 = L"Driver should not set MiscCaps.Reserved bits";
      goto LABEL_58;
    }
    *((_BYTE *)this + 2874) = *((_BYTE *)this + 2792) & 1;
  }
  v77 = *((_DWORD *)this + 698);
  if ( (v77 & 0x10) != 0 && !*((_QWORD *)this + 174) )
  {
    v40 = 7433LL;
    WdLogSingleEntry1(2LL, 7433LL);
    v41 = L"Driver sets IndependentVidPnVSyncControl cap but does not support DxgkDdiControlInterrupt3, returning failure";
    goto LABEL_58;
  }
  if ( *((_BYTE *)this + 3020) )
    *((_DWORD *)this + 698) = v77 & 0xFFFFFFEF;
  v78 = v168;
  if ( v168 >= 0x3001 )
  {
    v80 = *((_DWORD *)this + 638);
    if ( v80 != 4096
      && v80 != 4608
      && v80 != 4864
      && v80 != 0x2000
      && v80 != 8448
      && v80 != 8704
      && v80 != 8960
      && v80 != 9216
      && v80 != 9472
      && v80 != 9728
      && v80 != 9984
      && v80 != 10240
      && v80 != 10496
      && v80 != 12288
      && v80 != 12544 )
    {
      WdLogSingleEntry1(2LL, *((int *)this + 638));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Miniport returned unknown WDDM version 0x%I64x",
        *((int *)this + 638),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225561LL;
    }
  }
  else
  {
    *((_DWORD *)this + 638) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 888) || (v79 = 1, (*((_DWORD *)this + 109) & 8) != 0) )
    v79 = 0;
  *((_BYTE *)this + 2832) = v79;
  if ( v79 )
  {
    if ( *((int *)this + 638) < 4608
      && (*((_DWORD *)this + 686)
       || *((_DWORD *)this + 687)
       || *((_BYTE *)this + 2752)
       || *((_BYTE *)this + 2753)
       || *((_BYTE *)this + 2754)
       || (*((_DWORD *)this + 567) & 0x10000000) != 0
       || (*((_DWORD *)this + 570) & 0x14) != 0
       || *((_BYTE *)this + 2755)
       || *((_BYTE *)this + 2757)
       || *((_BYTE *)this + 2758)) )
    {
      v40 = 7516LL;
      WdLogSingleEntry1(2LL, 7516LL);
      v41 = L"Driver reports WDDM version less than 1.2 but implements some WDDM 1.2 features.";
      goto LABEL_58;
    }
    v81 = *((_DWORD *)this + 638);
    if ( v81 >= 4864 )
    {
      if ( v81 >= 0x2000 )
        goto LABEL_201;
    }
    else if ( (*((_DWORD *)this + 569) & 0x10) != 0
           || (*v71 & 0x10) != 0
           || *((_BYTE *)this + 2759)
           || *((_DWORD *)this + 690) )
    {
      v40 = 7531LL;
      WdLogSingleEntry1(2LL, 7531LL);
      v41 = L"Driver reports WDDM version less than 1.3 but implements some WDDM 1.3 features.";
      goto LABEL_58;
    }
    if ( *((_BYTE *)this + 2764) )
    {
      v40 = 7559LL;
      WdLogSingleEntry1(2LL, 7559LL);
      v41 = L"Pre-WDDM 2.0 driver should not set the HybridIntegrated cap.";
      goto LABEL_58;
    }
  }
LABEL_201:
  v82 = *v71;
  if ( (*v71 & 0x10000) != 0 )
  {
    if ( (*v71 & 0x8010) != 0x8010 )
    {
      v40 = 7573LL;
      WdLogSingleEntry1(2LL, 7573LL);
      v41 = L"Driver reports CrossAdapterResourceScanout but does not report lower tier support.";
      goto LABEL_58;
    }
  }
  else if ( (v82 & 0x8000) != 0 && (v82 & 0x10) == 0 )
  {
    v40 = 7581LL;
    WdLogSingleEntry1(2LL, 7581LL);
    v41 = L"Driver reports CrossAdapterResourceTexture but does not report lower tier support.";
    goto LABEL_58;
  }
  v83 = (char *)this + 2759;
  if ( v78 >= 0x4000 )
  {
    if ( v78 >= 0x5011 )
      goto LABEL_214;
  }
  else
  {
    v82 &= ~0x10u;
    *v83 = 0;
    *v71 = v82;
  }
  v84 = *((_DWORD *)this + 109);
  if ( (v84 & 1) != 0 && (v82 & 0x10) != 0 && (v84 & 0x1000) != 0 )
    *((_BYTE *)this + 2764) = 1;
LABEL_214:
  v85 = v174;
  *(_BYTE *)v174 ^= (*(_BYTE *)v174 ^ (4 * *((_BYTE *)this + 2752))) & 4;
  v86 = *(_BYTE *)v85 & 0xF7 | (*((_BYTE *)this + 2758) != 0 ? 8 : 0);
  *(_BYTE *)v85 = v86;
  v87 = *v71;
  v88 = v174;
  v89 = (v86 ^ (32 * (v87 >> 4))) & 0x20 ^ v86;
  *(_BYTE *)v174 = v89;
  v90 = (v89 ^ (*v83 << 6)) & 0x40 ^ v89;
  *(_BYTE *)v88 = v90;
  v91 = v90 & 0xEF;
  *((_DWORD *)v88 + 1) = *((_DWORD *)this + 563);
  v92 = *((_BYTE *)v88 + 1) ^ (*((_BYTE *)v88 + 1) ^ *((_BYTE *)this + 2764)) & 1;
  *((_BYTE *)v88 + 1) = v92;
  *((_DWORD *)v88 + 2) = *((_DWORD *)this + 638);
  v93 = *((_DWORD *)this + 698) >> 3;
  *(_BYTE *)v88 = v91;
  v94 = v92 ^ (v92 ^ (32 * v93)) & 0x20;
  *((_BYTE *)v88 + 1) = v94;
  if ( v78 >= 0x5021 )
  {
    v91 |= 16 * (*((_BYTE *)this + 2784) & 1);
    *(_BYTE *)v88 = v91;
  }
  if ( *((_BYTE *)this + 209) )
    goto LABEL_247;
  if ( (v91 & 0x40) != 0 )
  {
    if ( v78 < 0x5005 && (*((_DWORD *)this + 418) || *((_DWORD *)this + 419)) )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports device 0x%I64x is hybrid discrete device but it has VidPn source and target.",
        *((_QWORD *)this + 27),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v95 = v94 ^ (v94 ^ (2 * *((_BYTE *)this + 2787))) & 2;
    *((_BYTE *)v88 + 1) = v95;
    v96 = v95 & 1;
    goto LABEL_224;
  }
  v96 = v94 & 1;
  if ( (v94 & 1) != 0 )
  {
LABEL_224:
    if ( (v91 & 0x20) == 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7658LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports device 0x%I64x as hybrid device but does not support cross adapter resource.",
        *((_QWORD *)this + 27),
        7658LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( v96 )
  {
    if ( (v91 & 0x40) != 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7665LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports both HybridIntegrated and HybridDiscrete caps 0x%I64x",
        *((_QWORD *)this + 27),
        7665LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !*((_DWORD *)this + 419) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7673LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports the HybridIntegrated cap, but the adapter has no outputs. 0x%I64x",
        *((_QWORD *)this + 27),
        7673LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( *((_BYTE *)this + 2754) && (!*((_QWORD *)this + 100) || !*((_QWORD *)this + 101) || !*((_QWORD *)this + 102)) )
  {
    v40 = 7687LL;
    WdLogSingleEntry1(2LL, 7687LL);
    v41 = L"Driver reports SupportPerEngineTDR cap but does not fill in all of the required DDIs.";
    goto LABEL_58;
  }
  if ( (*((_DWORD *)this + 567) & 4) != 0 && !*((_QWORD *)this + 99) )
  {
    v40 = 7694LL;
    WdLogSingleEntry1(2LL, 7694LL);
    v41 = L"Driver reports SupportKernelModeCommandBuffer cap but does not fill in the pfnRenderKm DDI.";
    goto LABEL_58;
  }
  if ( *((_BYTE *)this + 2757) && (!*((_QWORD *)this + 104) || !*((_QWORD *)this + 105)) )
  {
    v40 = 7702LL;
    WdLogSingleEntry1(2LL, 7702LL);
    v41 = L"Driver reports SupportRuntimePowerManagement cap but does not fill in the pfnSetPowerComponentFState or pfnPow"
           "erRuntimeControlRequest DDI.";
    goto LABEL_58;
  }
  if ( v78 < 0x300C && *((_QWORD *)this + 104) && *((_QWORD *)this + 105) )
    *((_BYTE *)this + 2757) = 1;
LABEL_247:
  *((_WORD *)this + 1417) = 0;
  *((_BYTE *)this + 2836) = 0;
  if ( !*((_BYTE *)this + 2756) )
    goto LABEL_285;
  if ( v78 < 0x300B )
  {
    v40 = 7724LL;
    WdLogSingleEntry1(2LL, 7724LL);
    v41 = L"Driver reports SupportMultiPlaneOverlay cap but it is not compiled with expected header files.";
    goto LABEL_58;
  }
  if ( v78 < 0x4000 )
  {
    *((_BYTE *)this + 2834) = 1;
    goto LABEL_267;
  }
  if ( v78 == 0x4000 )
  {
    *((_BYTE *)this + 2835) = 1;
    goto LABEL_267;
  }
  v97 = *((_DWORD *)this + 690);
  if ( !v97 )
  {
    v40 = 7737LL;
    WdLogSingleEntry1(2LL, 7737LL);
    v41 = L"Driver reports SupportMultiPlaneOverlay cap but doesn't report any overlay planes or panel fitter.";
    goto LABEL_58;
  }
  if ( v97 <= 8 )
  {
    if ( v78 > 0x5000 )
      *((_BYTE *)this + 2836) = 1;
    goto LABEL_267;
  }
  v98 = *((_DWORD *)this + 638);
  if ( v98 < 8704 )
  {
    if ( v98 < 0x2000 || v97 != 10 )
    {
      v40 = 7760LL;
      WdLogSingleEntry1(2LL, 7760LL);
      goto LABEL_260;
    }
    *((_DWORD *)this + 690) = 8;
  }
  else if ( v97 > 0xA )
  {
    v40 = 7747LL;
    WdLogSingleEntry1(2LL, 7747LL);
LABEL_260:
    v41 = L"Driver reports more than the supported number of overlay planes.";
    goto LABEL_58;
  }
LABEL_267:
  v99 = *((_QWORD *)this + 108);
  if ( !v99 && !*((_QWORD *)this + 124) && !*((_QWORD *)this + 128) )
  {
    v40 = 7776LL;
    WdLogSingleEntry1(2LL, 7776LL);
LABEL_271:
    v41 = L"Driver reports SupportMultiPlaneOverlay cap but does not fill in all of the required DDIs.";
    goto LABEL_58;
  }
  if ( v78 > 0x4002 && !*((_QWORD *)this + 112) && !*((_QWORD *)this + 123) && !*((_QWORD *)this + 127) )
  {
    v40 = 7788LL;
    WdLogSingleEntry1(2LL, 7788LL);
    goto LABEL_271;
  }
  if ( !*((_BYTE *)this + 2755) )
  {
    v40 = 7798LL;
    WdLogSingleEntry1(2LL, 7798LL);
    v41 = L"Driver reports SupportMultiPlaneOverlay cap but DirectFlip is not supported.";
    goto LABEL_58;
  }
  if ( v99 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(Global, 1LL, 1LL);
  }
  if ( *((_QWORD *)this + 124) )
  {
    v101 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v101, 2LL, 1LL);
  }
  if ( *((_QWORD *)this + 128) )
  {
    v102 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v102, 3LL, 1LL);
  }
LABEL_285:
  v103 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 2872) = 0;
  if ( v103 )
    goto LABEL_298;
  v104 = 0;
  if ( v78 >= 0x700A && *((int *)this + 638) >= 8704 && (!*((_QWORD *)this + 82) || *((_QWORD *)this + 145)) )
  {
    *((_BYTE *)this + 2872) = 1;
    v104 = 1;
  }
  if ( *((int *)this + 638) < 8960 )
  {
LABEL_298:
    *((_DWORD *)this + 566) &= 0xFFFFFFE3;
  }
  else
  {
    v105 = (*((_DWORD *)this + 566) >> 3) & 1;
    v106 = (*((_DWORD *)this + 566) >> 2) & 1;
    if ( v106 < v105 || v105 < ((*((_DWORD *)this + 566) >> 4) & 1u) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports support higher level of colorSpaceTransform but not lower levels on device 0x%I64x, returning 0x%I64x.",
        *((_QWORD *)this + 27),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !v104 && v106 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ColorSpaceTransform is supported on the device 0x%I64x which does not have pfnSetTargetGamma, returning 0x%I64x.",
        *((_QWORD *)this + 27),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 133LL) && !v103 )
  {
    v107 = *((_DWORD *)this + 638) >= 0x2000;
    v108 = DXGGLOBAL::GetGlobal();
    v109 = DXGGLOBAL::DeferredInitialize(v108, v107);
    RenderCore = v109;
    if ( v109 < 0 )
    {
      WdLogSingleEntry1(2LL, v109);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGGLOBAL::DeferredInitialize failed (Status = 0x%I64x).",
        RenderCore,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v88);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 353) ^= (**((_DWORD **)this + 353) ^ v13) & 0x20000;
    **((_DWORD **)this + 353) ^= (**((_DWORD **)this + 353) ^ v13) & 0x18000;
    **((_DWORD **)this + 353) ^= (**((_DWORD **)this + 353) ^ v13) & 0x100000;
    **((_DWORD **)this + 353) ^= (**((_DWORD **)this + 353) ^ v13) & 0xC0000;
    *((_BYTE *)this + 2837) = 0;
  }
  if ( *((int *)this + 638) < 9216 )
    goto LABEL_308;
  v110 = *((_QWORD *)this + 166);
  if ( !*((_QWORD *)this + 165) )
  {
    if ( !v110 )
    {
LABEL_308:
      *((_QWORD *)this + 165) = W32kStub_UserRemoveWindowedSwapChain;
      *((_QWORD *)this + 166) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_309;
    }
LABEL_313:
    v40 = 7930LL;
    WdLogSingleEntry1(2LL, 7930LL);
    v41 = L"Driver cannot support only one of DdiQueryDiagnosticTypesSupport and DdiControlDiagnosticReporting.";
    goto LABEL_58;
  }
  if ( !v110 )
    goto LABEL_313;
LABEL_309:
  if ( (unsigned int)Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage() )
  {
    LODWORD(v174) = 0;
    memset(&v180, 0, 24);
    v180.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS|0x20;
    v180.pOutputData = &v174;
    *(_OWORD *)&v180.OutputDataSize = 0LL;
    v180.OutputDataSize = 4;
    v112 = DXGADAPTER::DdiQueryAdapterInfo(this, &v180, v111);
    v113 = *((_BYTE *)this + 2891) & 0xFD;
    if ( v112 >= 0 )
      *((_BYTE *)this + 2891) = v113 | (2 * ((unsigned __int8)v174 & 1));
    else
      *((_BYTE *)this + 2891) = v113;
  }
  result = DXGADAPTER::CheckMcdmDdiOverall(this);
  if ( (int)result >= 0 )
  {
    DXGADAPTER::InitializeDriverDiagnosticReporting(this);
    v114 = (__int64 *)((char *)this + 2928);
    RenderCore = (int)ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 366, v115, v116);
    v119 = *((_QWORD *)this + 366);
    if ( (int)RenderCore < 0 )
    {
      if ( v119 )
      {
        WdLogSingleEntry1(1LL, 7972LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore == NULL", 7972LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create ADAPTER_RENDER on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( v119 )
    {
      if ( IsAdapterSessionized )
      {
        v29 = 7989LL;
        WdLogSingleEntry1(2LL, 7989LL);
        v30 = L"Render capable adapter should NOT be sessionized!";
        goto LABEL_37;
      }
      IsEnabledDeviceUsage = Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage();
      v121 = *((_BYTE *)this + 2891);
      if ( !IsEnabledDeviceUsage
        || (v122 = *((_DWORD *)this + 698), v121 &= ~1u, *((_BYTE *)this + 2891) = v121, (v122 & 0xC) == 0) )
      {
        *((_BYTE *)this + 2891) = v121 | 1;
      }
    }
    v123 = (char *)this + 2920;
    DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 365, v117, v118);
    v125 = DisplayCore;
    if ( DisplayCore < 0 )
    {
      if ( *(_QWORD *)v123 )
      {
        WdLogSingleEntry1(1LL, 8015LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore == NULL", 8015LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, v125);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create ADAPTER_DISPLAY on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        v125,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v125;
    }
    if ( *v114 )
    {
      v126 = *(_QWORD *)v123 == 0LL;
    }
    else
    {
      v126 = *(_QWORD *)v123 == 0LL;
      if ( !*(_QWORD *)v123 )
      {
        WdLogSingleEntry2(2LL, this, -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
          (__int64)this,
          -1073741735LL,
          0LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
    }
    v127 = *(_BYTE *)v88 & 0xFE | !v126;
    *(_BYTE *)v88 = v127;
    v128 = v127 & 0xFD | (*v114 != 0 ? 2 : 0);
    *(_BYTE *)v88 = v128;
    if ( *(_QWORD *)v123 )
      v129 = *(_DWORD *)(*(_QWORD *)v123 + 24LL);
    else
      LOBYTE(v129) = 0;
    v130 = v128 & 0x7F | ((_BYTE)v129 << 7);
    *(_BYTE *)v88 = v130;
    if ( (v130 & 1) != 0 )
      *((_BYTE *)v88 + 1) = (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0) | *((_BYTE *)v88 + 1) & 0xFB;
    else
      *((_BYTE *)v88 + 1) &= ~4u;
    if ( !*v114 )
      *((_DWORD *)this + 567) |= 1u;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(this);
    v134 = v168;
    if ( IsDxgmms2 )
    {
      v135 = *((_DWORD *)this + 109);
      if ( (v135 & 4) == 0
        && (v135 & 8) == 0
        && v132
        && v168 >= 0x5008
        && (!*((_QWORD *)this + 113) || !*((_QWORD *)this + 125)) )
      {
        v40 = 8072LL;
        WdLogSingleEntry1(2LL, 8072LL);
        v41 = L"Driver is compiled against DXGKDDI_INTERFACE_VERSION_WDDM2_0_M2_2_1 or greater, but does not fill in the p"
               "fnCalibrateGpuClock or pfnSetStablePowerState DDI.";
        goto LABEL_58;
      }
    }
    if ( *((_BYTE *)this + 2832) && DXGADAPTER::IsFullWDDMAdapter(v133) && *((int *)this + 638) >= 4608 )
    {
      if ( !*((_BYTE *)this + 2755) )
      {
        v40 = 8087LL;
        WdLogSingleEntry1(2LL, 8087LL);
        v41 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 full adapter features.";
        goto LABEL_58;
      }
    }
    else if ( !*((_BYTE *)this + 2755) )
    {
      goto LABEL_361;
    }
    if ( *((_BYTE *)this + 209) )
    {
LABEL_362:
      *((_QWORD *)this + 113) = 0LL;
LABEL_363:
      IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
      v139 = *((_DWORD *)this + 109);
      *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
      if ( (v139 & 0x10) != 0 && !*(_QWORD *)v123 )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v178);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v178);
        if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 119) )
        {
          WdLogSingleEntry2(2LL, this, -1073741735LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
            (__int64)this,
            -1073741735LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 4) = -1LL;
          v140 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetWarpAdapter(v140, this);
        }
        if ( v178[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v178);
      }
      if ( *((_BYTE *)this + 209)
        || (v141 = DXGADAPTER::InitializePowerManagement(this, v137, v138), v125 = v141, v141 >= 0) )
      {
        if ( *((_BYTE *)this + 2832) )
        {
          if ( *((int *)this + 638) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v143 = *((_DWORD *)this + 109);
            if ( (v143 & 4) == 0 && (v143 & 0x20) == 0 && (*((_DWORD *)this + 569) & 0x10) == 0 )
            {
              v40 = 8168LL;
              WdLogSingleEntry1(2LL, 8168LL);
              v41 = L"WDDM 1.3 driver must support independent flip.";
              goto LABEL_58;
            }
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v141);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to initialize power management for the adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this,
          v125,
          0LL,
          0LL,
          0LL);
      }
      if ( (*((_DWORD *)this + 109) & 0x10) != 0 )
        *((_BYTE *)this + 2875) = 1;
      if ( v134 >= 0xA008 )
        *((_BYTE *)this + 2875) = 1;
      v142 = operator new[](0x28uLL, 0x4B677844u, 64LL);
      if ( v142 )
      {
        *(_OWORD *)v142 = 0LL;
        *(_OWORD *)(v142 + 16) = 0LL;
        *(_QWORD *)(v142 + 32) = 0LL;
      }
      else
      {
        v142 = 0LL;
      }
      *((_QWORD *)this + 591) = v142;
      if ( !v142 )
      {
        WdLogSingleEntry1(2LL, 8206LL);
        v22 = L"Failed to allocate MockDriverState object";
        v164 = 0LL;
        v162 = 8206LL;
        goto LABEL_26;
      }
      *(_QWORD *)(v142 + 24) = this;
      if ( *(_BYTE *)(v142 + 32) )
      {
        v144 = (char *)operator new[](0xAA8uLL, 0x4B677844u, 64LL);
        v145 = v144;
        if ( v144 )
        {
          memset(v144, 0, 0xAA8uLL);
          `vector constructor iterator'(
            v145 + 56,
            16LL,
            160LL,
            (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
        }
        else
        {
          v145 = 0LL;
        }
        *(_QWORD *)v142 = v145;
        v146 = (void *)operator new[](0x68uLL, 0x4B677844u, 64LL);
        v147 = v146;
        if ( v146 )
          memset(v146, 0, 0x68uLL);
        else
          v147 = 0LL;
        *(_QWORD *)(v142 + 8) = v147;
        v148 = (void *)operator new[](0xC48uLL, 0x4B677844u, 64LL);
        v149 = v148;
        if ( v148 )
          memset(v148, 0, 0xC48uLL);
        else
          v149 = 0LL;
        v150 = *(_QWORD **)v142;
        *(_QWORD *)(v142 + 16) = v149;
        if ( !v150 || !*(_QWORD *)(v142 + 8) || !v149 )
        {
          WdLogSingleEntry1(2LL, 8213LL);
          v22 = L"Failed to initialize MockDriverState object";
          v164 = 0LL;
          v162 = 8213LL;
          goto LABEL_26;
        }
        *v150 = *(_QWORD *)(v142 + 24);
        v150[5] = MockDriverStateCreatePlaneLiveDump;
        v150[6] = v150;
        v150[3] = 0LL;
        v151 = *(_QWORD **)(v142 + 8);
        *v151 = *(_QWORD *)(v142 + 24);
        v151[5] = MockDriverStateCreateFbrLiveDump;
        v151[6] = v151;
        v151[3] = 0LL;
        v152 = *(_QWORD **)(v142 + 16);
        *v152 = *(_QWORD *)(v142 + 24);
        v152[5] = MockDriverStateCreateDurationLiveDump;
        v152[6] = v152;
        v152[3] = 0LL;
      }
      v153 = *((_DWORD *)this + 698) >> 3;
      *((_BYTE *)this + 4736) = 0;
      if ( (v153 & 1) != 0 )
        Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage();
      LODWORD(v9) = DXGADAPTER::InitializeVSyncPhaseState(this);
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry1(6LL, 8232LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VSync Phase Timer state",
          8232LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v9;
      }
      if ( (int)DXGADAPTER::InitializeCABCStateV2(v154) < 0 )
      {
        WdLogSingleEntry1(2LL, 8247LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to initialize CABC State",
          8247LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v155 = *v114;
      if ( *v114 && !*((_BYTE *)this + 209) )
      {
        v156 = *(_QWORD *)(v155 + 736);
        v157 = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v156 + 8) + 912LL))(
          *(_QWORD *)(v155 + 744),
          (__int64)v157 + 1328);
      }
      if ( (*((_DWORD *)this + 109) & 1) != 0 )
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 123) = *(_QWORD *)((char *)this + 404);
      if ( (int)v125 < 0 )
        return (unsigned int)v125;
      if ( v170 <= 1 )
        goto LABEL_422;
      v158 = *((_DWORD *)this + 103);
      if ( v158 == 4318 )
      {
        v159 = DXGGLOBAL::GetGlobal();
        v160 = 7LL;
      }
      else
      {
        if ( v158 != 4098 )
        {
LABEL_422:
          v161 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::RecordFeatureUsageWddmVersion(v161, this);
          return (unsigned int)v125;
        }
        v159 = DXGGLOBAL::GetGlobal();
        v160 = 8LL;
      }
      DXGGLOBAL::RecordFeatureUsage(v159, v160, 1LL);
      goto LABEL_422;
    }
    if ( !v132
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v132 + 760) + 8LL) + 704LL))(*(_QWORD *)(v132 + 768)) )
    {
      *(_WORD *)((char *)this + 2755) = 0;
    }
LABEL_361:
    if ( !*((_BYTE *)this + 209) )
      goto LABEL_363;
    goto LABEL_362;
  }
  return result;
}
