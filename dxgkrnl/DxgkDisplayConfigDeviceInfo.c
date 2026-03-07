__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 DeviceInterfaces; // r15
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int TargetBaseType; // eax
  DXGADAPTER *v23; // rbx
  DXGADAPTER *v24; // rbx
  struct _DEVICE_OBJECT *v25; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  PZZWSTR v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // edx
  int v30; // eax
  DXGADAPTER *v31; // rbx
  int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // r8
  bool *v36; // rcx
  bool *v37; // rcx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  DXGADAPTER *v46; // rdi
  __int64 v47; // rdx
  int MonitorHandle; // eax
  PZZWSTR v49; // rsi
  int PseudoSpecializedState; // eax
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  PZZWSTR v55; // rbx
  __int64 v56; // rax
  struct _UNICODE_STRING *p_DestinationString; // r8
  __int64 v58; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v59; // rdx
  __int128 v60; // xmm0
  unsigned int v61; // r9d
  struct DXGGLOBAL *v62; // rax
  unsigned int v63; // edx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v64; // eax
  __int64 v65; // rax
  DXGADAPTER *v66; // rbx
  __int64 v67; // r9
  DXGADAPTER *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int IsBoostRefreshRateEnabledByDefault; // eax
  bool v75; // al
  __int64 v76; // rax
  int v77; // eax
  int v78; // eax
  __int64 v79; // r8
  unsigned int v80; // edx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v83; // rcx
  int v84; // eax
  const wchar_t *v85; // r9
  struct _LUID v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 HighPart; // rcx
  __int64 LowPart; // rcx
  int v94; // eax
  __int64 v95; // rdi
  int v96; // eax
  struct DXGADAPTER *v97; // rcx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rbx
  __int64 v104; // rax
  unsigned int v105; // ecx
  MONITOR_MGR *v106; // rdi
  DXGADAPTER *v107; // rdi
  __int64 v108; // r13
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE MonitorInstance; // eax
  __int64 v110; // rdi
  char v111; // bl
  PZZWSTR v112; // rdi
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE LinkInfo; // eax
  __int64 v114; // r13
  __int64 v115; // rbx
  const wchar_t *v116; // r9
  int IsMonitorAndDriverWCGCapable; // eax
  int v118; // eax
  __int64 v119; // rdx
  int v120; // eax
  int IsAutoColorManagementSupported; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v122; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  __int64 Value; // rcx
  int v125; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v126; // eax
  int SDRWhiteLevel; // eax
  int v128; // eax
  __int64 v129; // r13
  struct _LUID *v130; // rdx
  __int64 v131; // r8
  struct DXGGLOBAL *v132; // rax
  __int64 v133; // rax
  struct DXGGLOBAL *v134; // rax
  DXGADAPTER *v135; // rbx
  unsigned int v136; // edx
  DXGADAPTER *v137; // rbx
  DXGADAPTER *v138; // rdx
  int v139; // ecx
  int v140; // eax
  int v141; // ecx
  unsigned int v142; // edx
  struct _LUID v143; // rcx
  unsigned int v144; // edx
  int v145; // ecx
  struct DXGGLOBAL *v146; // rax
  char *v147; // rdi
  unsigned int v148; // ebx
  unsigned int v149; // ebx
  int v150; // esi
  unsigned int v151; // ecx
  unsigned int *v152; // rbx
  unsigned int *v153; // rsi
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  int v159; // eax
  DXGADAPTER *v160; // r15
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // rcx
  __int64 v164; // r8
  int v166; // eax
  __int64 v167; // rcx
  int v168; // r9d
  int v169; // r8d
  int v170; // edx
  unsigned int v171; // eax
  PZZWSTR v172; // r14
  int v173; // eax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  __int64 RemlockSizea; // [rsp+28h] [rbp-E0h]
  int v176; // [rsp+30h] [rbp-D8h]
  __int64 v177; // [rsp+30h] [rbp-D8h]
  struct _UNICODE_STRING *v178; // [rsp+38h] [rbp-D0h]
  __int64 v179; // [rsp+38h] [rbp-D0h]
  unsigned int v180; // [rsp+38h] [rbp-D0h]
  unsigned int v181; // [rsp+40h] [rbp-C8h]
  bool v182[4]; // [rsp+58h] [rbp-B0h] BYREF
  char v183; // [rsp+5Ch] [rbp-ACh]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v184; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v185[4]; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v186; // [rsp+68h] [rbp-A0h]
  PZZWSTR SymbolicLinkList_8[2]; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v188; // [rsp+88h] [rbp-80h] BYREF
  DXGADAPTER *v189[3]; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v191; // [rsp+B8h] [rbp-50h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v192[4]; // [rsp+C8h] [rbp-40h] BYREF
  DXGADAPTER *v193; // [rsp+D8h] [rbp-30h]
  struct _LUID v194; // [rsp+E0h] [rbp-28h] BYREF
  int v195; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v196; // [rsp+F0h] [rbp-18h]
  char v197; // [rsp+F8h] [rbp-10h]
  _OWORD v198[2]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v199[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v200[16]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v201; // [rsp+298h] [rbp+190h]
  DXGADAPTER *v202; // [rsp+2A0h] [rbp+198h]
  char v203; // [rsp+2A8h] [rbp+1A0h]
  __int64 v204; // [rsp+2B0h] [rbp+1A8h]
  __int64 v205; // [rsp+2D8h] [rbp+1D0h]
  __int64 v206; // [rsp+2E0h] [rbp+1D8h]
  char v207; // [rsp+2E8h] [rbp+1E0h]
  __int64 v208; // [rsp+2F0h] [rbp+1E8h]
  _QWORD v209[10]; // [rsp+318h] [rbp+210h] BYREF

  v183 = a1;
  v189[0] = 0LL;
  memset(v209, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v209[1]);
  v6 = 1;
  v195 = -1;
  v209[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v209[6]) = -1;
  LODWORD(v209[3]) = 39;
  v196 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v197 = 1;
    v195 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v197 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v195, 2184);
  LODWORD(v10) = -1073741811;
  if ( a2 )
  {
    v11 = *a2;
    LODWORD(DeviceInterfaces) = 0;
    if ( (unsigned int)v11 <= 0x64 )
    {
      if ( (_DWORD)v11 != 100 )
      {
        if ( (unsigned int)v11 <= 8 )
        {
          if ( (_DWORD)v11 == 8 )
          {
LABEL_16:
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
            if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
            {
              v21 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
              *(_QWORD *)(v21 + 24) = (int)a2[3];
              *(_QWORD *)(v21 + 32) = a2[2];
              goto LABEL_18;
            }
            v182[1] = 0;
            v30 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v182[1], 0);
            v10 = v30;
            if ( v30 < 0 )
              goto LABEL_50;
            v31 = v189[0];
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v189[0], 0LL);
            if ( *a2 == 7 )
              v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v199, 0LL);
            else
              v32 = COREADAPTERACCESS::AcquireExclusive((__int64)v199, 1LL);
            if ( v32 < 0 )
            {
              WdLogSingleEntry3(3LL, v31, *((int *)v31 + 102), *((unsigned int *)v31 + 101));
              LODWORD(v10) = -1073741811;
LABEL_70:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
              goto LABEL_71;
            }
            if ( !DXGADAPTER::IsDisplayAdapter(v31) || !*(_BYTE *)(*((_QWORD *)v31 + 365) + 290LL) )
            {
              WdLogSingleEntry3(3LL, v31, *((int *)v31 + 102), *((unsigned int *)v31 + 101));
              LODWORD(v10) = -1073741637;
              goto LABEL_70;
            }
            if ( *a2 == 7 )
            {
              v182[0] = 0;
              if ( !a1 )
              {
                WdLogSingleEntry1(1LL, 5356LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5356LL, 0LL, 0LL, 0LL, 0LL);
              }
              v33 = a2[4];
              a2[5] = 0;
              LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled((__int64)v31, v33, v182);
              if ( (int)DeviceInterfaces >= 0 )
                a2[5] = v182[0] | a2[5] & 0xFFFFFFFE;
            }
            else
            {
              if ( a1 || *a2 != 8 )
              {
                WdLogSingleEntry1(1LL, 5373LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
                  5373LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v34 = a2[4];
              v182[0] = 0;
              if ( (int)CheckGivenTargetIsPartOfCloneGroup(v31, v34, (unsigned __int8 *)v182) >= 0 && v182[0] )
              {
                WdLogSingleEntry3(3LL, *((int *)v31 + 102), *((unsigned int *)v31 + 101), a2[4]);
                LODWORD(v10) = -1073741649;
                goto LABEL_70;
              }
              LOBYTE(v35) = a2[5] & 1;
              LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(v31, a2[4], v35, v209);
            }
            goto LABEL_73;
          }
          v13 = v11 - 2;
          if ( !v13 )
          {
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5260LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5260LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
            goto LABEL_48;
          }
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5190LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5190LL, 0LL, 0LL, 0LL, 0LL);
            }
            memset(v199, 0, sizeof(v199));
            v28 = 0;
            LODWORD(DeviceInterfaces) = -1071774970;
            do
            {
              if ( v28 >= 0x10 )
                break;
              if ( v199[38] )
              {
                WdLogSingleEntry1(1LL, 5202LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PathForTarget.Descriptors[0].pDevMode == NULL",
                  5202LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              memset(v199, 0, sizeof(v199));
              v29 = a2[4];
              v182[2] = 0;
              v182[1] = 0;
              v182[0] = 0;
              LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)(a2 + 2),
                                            v29,
                                            (__int64)v182,
                                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v199[18],
                                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v199[18] + 1,
                                            (__int64)&v199[33] + 4);
              if ( (int)DeviceInterfaces >= 0 )
              {
                v199[9] = *((_QWORD *)a2 + 1);
                HIDWORD(v199[10]) = a2[4];
                HIDWORD(v199[2]) = 65537;
                LODWORD(v199[10]) = v28;
                LODWORD(v199[30]) = -13434880;
                BYTE1(v199[23]) = (!v182[0] ? 4 : 0) | (!v182[1] ? 2 : 0) | !v182[2];
                v199[7] = 0xCF00000000000LL;
                LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(
                                              (__int64)v199,
                                              (const struct _LUID *)a2 + 1,
                                              0,
                                              1u,
                                              0);
                if ( (int)DeviceInterfaces >= 0 )
                {
                  DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v199[11], a2 + 8);
                  *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 7);
                }
                BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v199);
                ++v28;
              }
            }
            while ( (_DWORD)DeviceInterfaces == -1071774970 );
            goto LABEL_19;
          }
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 2;
            if ( v16 )
            {
              if ( v16 != 1 )
              {
LABEL_18:
                LODWORD(DeviceInterfaces) = -1073741811;
                goto LABEL_19;
              }
              goto LABEL_16;
            }
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5270LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5270LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
LABEL_48:
            LODWORD(DeviceInterfaces) = TargetBaseType;
            goto LABEL_19;
          }
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
          if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
          {
            WdLogSingleEntry3(3LL, a2[2], (int)a2[3], -1073741811LL);
            goto LABEL_337;
          }
          v23 = v189[0];
          DestinationString.Buffer = (wchar_t *)v189[0];
          LOBYTE(v191) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v23 + 50) == 1 )
          {
            v24 = v189[0];
            v25 = (struct _DEVICE_OBJECT *)*((_QWORD *)v189[0] + 27);
            if ( v25 )
            {
              SymbolicLinkList_8[0] = 0LL;
              DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v25);
              DeviceInterfaces = IoGetDeviceInterfaces(
                                   &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                   DeviceAttachmentBaseRef,
                                   0,
                                   SymbolicLinkList_8);
              ObfDereferenceObject(DeviceAttachmentBaseRef);
              if ( (int)DeviceInterfaces >= 0 )
              {
                wcsncpy_s((wchar_t *)a2 + 10, 0x80uLL, SymbolicLinkList_8[0], 0xFFFFFFFFFFFFFFFFuLL);
                v27 = SymbolicLinkList_8[0];
                *((_WORD *)a2 + 11) = 92;
                ExFreePoolWithTag(v27, 0);
              }
              else
              {
                WdLogSingleEntry2(3LL, DeviceAttachmentBaseRef, DeviceInterfaces);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v189[0]);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x had no FDO",
                (__int64)v24,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(DeviceInterfaces) = -1073741275;
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, v189[0], -1073741130LL);
            LODWORD(DeviceInterfaces) = -1073741130;
          }
LABEL_32:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          goto LABEL_19;
        }
        v38 = v11 - 9;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                  goto LABEL_18;
                goto LABEL_79;
              }
              DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
              if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
              {
                v46 = v189[0];
                v47 = a2[4];
                SymbolicLinkList_8[0] = 0LL;
                MonitorHandle = MonitorGetMonitorHandle(
                                  (__int64)v189[0],
                                  v47,
                                  0LL,
                                  &DxgkDisplayConfigDeviceInfo,
                                  SymbolicLinkList_8);
                v10 = MonitorHandle;
                if ( MonitorHandle < 0 )
                {
                  WdLogSingleEntry4(2LL, *((int *)v46 + 102), *((unsigned int *)v46 + 101), a2[4], MonitorHandle);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                    *((int *)v46 + 102),
                    *((unsigned int *)v46 + 101),
                    a2[4],
                    v10,
                    0LL);
                  goto LABEL_337;
                }
                v49 = SymbolicLinkList_8[0];
                if ( !SymbolicLinkList_8[0] )
                {
                  WdLogSingleEntry1(1LL, 6406LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"MonitorHandle != NULL",
                    6406LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v182[0] = 0;
                v182[2] = 0;
                v182[1] = 0;
                PseudoSpecializedState = MonitorGetPseudoSpecializedState(v49, &v182[2], &v182[1], v182);
                DeviceInterfaces = PseudoSpecializedState;
                if ( PseudoSpecializedState >= 0 )
                {
                  a2[5] = (v182[2] ? 2 : 0) | (v182[1] ? 4 : 0) | v182[0] | a2[5] & 0xFFFFFFF8;
                }
                else
                {
                  WdLogSingleEntry1(2LL, PseudoSpecializedState);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x",
                    DeviceInterfaces,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                MonitorReleaseMonitorHandle(v46, v49, &DxgkDisplayConfigDeviceInfo);
                goto LABEL_19;
              }
LABEL_303:
              v91 = WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
              *(_QWORD *)(v91 + 24) = (int)a2[3];
              LowPart = a2[2];
              goto LABEL_158;
            }
          }
        }
LABEL_155:
        v86 = (struct _LUID)*((_QWORD *)a2 + 1);
        DeviceInterfaces = a2[4];
        v194 = v86;
        v186 = DeviceInterfaces;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, &v194);
        if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
        {
          v91 = WdLogNewEntry5_WdTrace(v88, v87, v89, v90);
          HighPart = v194.HighPart;
LABEL_157:
          *(_QWORD *)(v91 + 24) = HighPart;
          LowPart = v86.LowPart;
LABEL_158:
          *(_QWORD *)(v91 + 32) = LowPart;
          goto LABEL_337;
        }
        v94 = DxgkAcquireSessionModeChangeLock(0LL);
        v95 = v94;
        if ( v94 < 0 )
        {
          v185[0] = 0;
          WdLogSingleEntry1(2LL, v94);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
            v95,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = v95;
          goto LABEL_261;
        }
        v10 = (__int64)v189[0];
        v185[0] = 1;
        v200[1] = 0;
        v193 = v189[0];
        v202 = v189[0];
        v203 = 0;
        v204 = 0LL;
        if ( v189[0] )
        {
          _InterlockedAdd64((volatile signed __int64 *)v189[0] + 3, 1uLL);
          v10 = (__int64)v189[0];
          v201 = -1LL;
          v193 = v189[0];
        }
        v206 = v10;
        v207 = 0;
        v208 = 0LL;
        if ( v10 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(v10 + 24), 1uLL);
          v10 = (__int64)v189[0];
          v205 = -1LL;
          v193 = v189[0];
        }
        if ( *a2 == 10 || *a2 == -18 )
          v96 = COREADAPTERACCESS::AcquireExclusive((__int64)v200, 1LL);
        else
          v96 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v200, 0LL);
        if ( v96 < 0 )
        {
          WdLogSingleEntry3(2LL, v10, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->G"
                      "etLuid() = <0x%I64x, 0x%I64x>)",
            v10,
            *(int *)(v10 + 408),
            *(unsigned int *)(v10 + 404),
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
LABEL_183:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v200);
LABEL_261:
          v36 = v185;
          goto LABEL_336;
        }
        if ( !DXGADAPTER::IsDisplayAdapter((DXGADAPTER *)v10) )
        {
          WdLogSingleEntry3(3LL, v10, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404));
          LODWORD(v10) = -1073741637;
          goto LABEL_183;
        }
        v182[0] = 0;
        v98 = CheckGivenTargetIsPartOfCloneGroup(v97, DeviceInterfaces, (unsigned __int8 *)v182);
        v103 = DeviceInterfaces;
        LODWORD(DeviceInterfaces) = -1073741275;
        if ( v98 == -1073741275 )
        {
          WdLogSingleEntry4(3LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v103, -1073741275LL);
          v182[1] = 0;
        }
        else
        {
          v182[1] = v182[0];
        }
        v104 = WdLogNewEntry5_WdTrace(v100, v99, v101, v102);
        *(_QWORD *)(v104 + 24) = v103;
        *(_QWORD *)(v104 + 32) = v10;
        if ( !v10 )
          goto LABEL_181;
        v105 = v103;
        if ( (_DWORD)v103 == -1 )
          goto LABEL_181;
        if ( !*(_QWORD *)(v10 + 2920) )
        {
          WdLogSingleEntry0(1LL);
          v105 = v103;
        }
        v106 = *(MONITOR_MGR **)(*(_QWORD *)(v10 + 2920) + 112LL);
        if ( !v106 )
        {
          WdLogSingleEntry1(2LL, v10);
LABEL_181:
          LODWORD(v10) = -1073741811;
LABEL_182:
          v107 = v193;
          v108 = v186;
          WdLogSingleEntry4(2LL, *((int *)v193 + 102), *((unsigned int *)v193 + 101), v186, (int)v10);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *((int *)v107 + 102),
            *((unsigned int *)v107 + 101),
            v108,
            (int)v10,
            0LL);
          goto LABEL_183;
        }
        *(_QWORD *)v192 = 0LL;
        MonitorInstance = (unsigned int)MONITOR_MGR::_GetMonitorInstance(v106, v105, 0, (struct DXGMONITOR **)v192);
        v188 = MonitorInstance;
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v103, v106);
          LODWORD(v10) = -1073741275;
          goto LABEL_182;
        }
        if ( MonitorInstance < D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 )
        {
          WdLogSingleEntry2(2LL, v103, v106);
          LODWORD(v10) = v188;
          goto LABEL_182;
        }
        v110 = *(_QWORD *)v192;
        v111 = 0;
        if ( !*(_QWORD *)v192 )
          WdLogSingleEntry0(1LL);
        if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v110 + 280), &DxgkDisplayConfigDeviceInfo, File, 1u, 0x20u) < 0 )
          WdLogSingleEntry0(1LL);
        if ( !v110 )
        {
          WdLogSingleEntry0(1LL);
          WdLogSingleEntry1(1LL, 6038LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6038LL, 0LL, 0LL, 0LL, 0LL);
          v10 = (__int64)v193;
          LODWORD(DeviceInterfaces) = -1073741811;
LABEL_201:
          v114 = v186;
          v115 = (int)DeviceInterfaces;
          WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, (int)DeviceInterfaces);
          v116 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          goto LABEL_202;
        }
        v184.Value = 0;
        MONITOR_MGR::AcquireMonitorShared(SymbolicLinkList_8, v110);
        v112 = SymbolicLinkList_8[0];
        if ( !SymbolicLinkList_8[0] )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
LABEL_200:
          v110 = *(_QWORD *)v192;
          goto LABEL_201;
        }
        *(_QWORD *)&DestinationString.Length = 0LL;
        LODWORD(DestinationString.Buffer) = 0;
        LinkInfo = (unsigned int)DXGMONITOR::_GetLinkInfo(
                                   (DXGMONITOR *)SymbolicLinkList_8[0],
                                   (struct _DXGK_MONITORLINKINFO *)&DestinationString);
        v188 = LinkInfo;
        if ( LinkInfo == -1073741275 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
        }
        else
        {
          if ( LinkInfo < D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 )
          {
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
            LODWORD(DeviceInterfaces) = v188;
            goto LABEL_200;
          }
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            *((DxgMonitor::MonitorColorState **)v112 + 28),
            (const struct _DXGK_MONITORLINKINFO *)&DestinationString,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v184);
          ExReleaseResourceLite((PERESOURCE)(v112 + 12));
          KeLeaveCriticalRegion();
          v111 = (char)v184.0;
        }
        v110 = *(_QWORD *)v192;
        v182[0] = 0;
        IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(*(_QWORD *)v192, v182);
        LODWORD(DeviceInterfaces) = IsMonitorAndDriverWCGCapable;
        if ( IsMonitorAndDriverWCGCapable >= 0 )
        {
          v184.Value = 0;
          v188 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v182[2] = 0;
          v118 = IsCurrentModeAdvancedColor((struct DXGADAPTER *)v10, v186, &v184, &v188, &v182[2]);
          LODWORD(DeviceInterfaces) = v118;
          if ( v118 >= 0 )
          {
            if ( v182[1] && v182[2] )
            {
              WdLogSingleEntry1(1LL, 6089LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!bCurrentModeAdvancedColor",
                6089LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v120 = *a2;
            if ( *a2 == 9 )
            {
              if ( !v183 )
              {
                WdLogSingleEntry1(1LL, 6099LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6099LL, 0LL, 0LL, 0LL, 0LL);
              }
              v182[3] = 0;
              IsAutoColorManagementSupported = MonitorGetIsAutoColorManagementSupported(v110, &v182[3]);
              LODWORD(DeviceInterfaces) = IsAutoColorManagementSupported;
              if ( IsAutoColorManagementSupported >= 0 )
              {
                if ( (v111 & 1) == 0 && !v182[0] || v182[1] )
                  v6 = 0;
                v122.0 = v184.0;
                a2[5] = (v182[3] ? 4 : 0) | (v182[2] ? 2 : 0) | v6 & 0xFFFFFFF9 | a2[5] & 0xFFFFFFF8;
                ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v122);
                Value = v184.Value;
                a2[7] = ColorDepthFromPickedWireFormat;
                a2[6] = ConvertDmmToDisplayConfigColorEncoding(Value);
                a2[5] = a2[5] & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal() + 304780) == 0 ? 8 : 0);
                goto LABEL_259;
              }
              v115 = IsAutoColorManagementSupported;
              v114 = v186;
              WdLogSingleEntry4(
                2LL,
                *(int *)(v10 + 408),
                *(unsigned int *)(v10 + 404),
                v186,
                IsAutoColorManagementSupported);
              v116 = L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            }
            else
            {
              if ( v120 != 10 )
              {
                if ( v120 == 11 )
                {
                  if ( !v183 )
                  {
                    WdLogSingleEntry1(1LL, 6175LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"i_bGetDeviceInfo",
                      6175LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v126.Value = 1000;
                  v184.Value = 1000;
                  if ( v182[2] && (v111 & 1) != 0 )
                  {
                    SDRWhiteLevel = MonitorGetSDRWhiteLevel(v110, &v184);
                    LODWORD(DeviceInterfaces) = SDRWhiteLevel;
                    if ( SDRWhiteLevel >= 0 )
                    {
                      v126.0 = v184.0;
                    }
                    else
                    {
                      WdLogSingleEntry4(3LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, SDRWhiteLevel);
                      v126.Value = 3000;
                    }
                  }
                  a2[5] = v126.Value;
                  goto LABEL_259;
                }
                if ( v120 == -18 )
                {
                  if ( v183 )
                  {
                    WdLogSingleEntry1(1LL, 6204LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"!i_bGetDeviceInfo",
                      6204LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( a2[5] - 1000 > 0x1388 )
                  {
                    v10 = (__int64)v193;
                    LODWORD(DeviceInterfaces) = -1073741811;
                  }
                  else if ( v182[2] && (v111 & 1) != 0 )
                  {
                    v128 = MonitorSetSDRWhiteLevel(v110);
                    DeviceInterfaces = v128;
                    if ( v128 >= 0 )
                    {
                      if ( v128 )
                      {
                        if ( v128 == 255 )
                          LODWORD(DeviceInterfaces) = 0;
                      }
                      else
                      {
                        if ( !*((_BYTE *)a2 + 24) )
                          goto LABEL_259;
                        TriggerSDRWhiteLevelChangedWnf();
                        SymbolicLinkList_8[0] = 0LL;
                        memset(v198, 0, sizeof(v198));
                        LODWORD(v198[0]) = 13;
                        DXGADAPTER::IsAdapterSessionized(
                          (DXGADAPTER *)v10,
                          v130,
                          0LL,
                          (unsigned __int64 *)SymbolicLinkList_8);
                        SMgrGdiCallout(v198, SymbolicLinkList_8[0], v131, 0LL, 0LL, 0LL);
                      }
                    }
                    else
                    {
                      v129 = v186;
                      WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, v128);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                        *(int *)(v10 + 408),
                        *(unsigned int *)(v10 + 404),
                        v129,
                        DeviceInterfaces,
                        0LL);
                    }
                  }
                  else
                  {
                    LODWORD(DeviceInterfaces) = -1073741637;
                  }
                  if ( *((_BYTE *)a2 + 24) )
                    DxgkNotifyDisplayChange(0LL);
                }
LABEL_259:
                MonitorReleaseMonitorHandle(v10, v110, &DxgkDisplayConfigDeviceInfo);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v200);
                v37 = v185;
                goto LABEL_350;
              }
              if ( v183 )
              {
                WdLogSingleEntry1(1LL, 6129LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 6129LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v111 & 1) == 0 && !v182[0] || v182[1] )
              {
                LODWORD(DeviceInterfaces) = -1073741637;
                goto LABEL_259;
              }
              LOBYTE(v119) = a2[5] & 1;
              v125 = MonitorEnableDisableAdvancedColor(v110, v119);
              LODWORD(DeviceInterfaces) = v125;
              if ( v125 >= 0 )
              {
                if ( v125 == 255 && (a2[5] & 1) != v182[2] )
                  LODWORD(DeviceInterfaces) = 0;
                goto LABEL_259;
              }
              v115 = v125;
              v114 = v186;
              WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, v125);
              v116 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            }
          }
          else
          {
            v115 = v118;
            v114 = v186;
            WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, v118);
            v116 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          }
        }
        else
        {
          v115 = IsMonitorAndDriverWCGCapable;
          v114 = v186;
          WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v186, IsMonitorAndDriverWCGCapable);
          v116 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        }
LABEL_202:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v116,
          *(int *)(v10 + 408),
          *(unsigned int *)(v10 + 404),
          v114,
          v115,
          0LL);
        goto LABEL_259;
      }
LABEL_289:
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
      if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
      {
        v135 = v189[0];
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v189[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v199, 0LL) >= 0 )
        {
          if ( (*((_DWORD *)v135 + 109) & 0x100) == 0 )
          {
            WdLogSingleEntry3(3LL, v135, *((int *)v135 + 102), *((unsigned int *)v135 + 101));
            LODWORD(v10) = -1073741637;
            goto LABEL_105;
          }
          if ( *a2 == -10 )
          {
            if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                        *((ADAPTER_DISPLAY **)v135 + 365),
                        a2[4],
                        (struct _LUID *)(a2 + 5)) >= 0 )
              goto LABEL_299;
          }
          else
          {
            if ( *a2 != 100 )
            {
              WdLogSingleEntry1(1LL, 5662LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"DISPLAYCONFIG_DEVICE_INFO type not handled",
                5662LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_105;
            }
            v136 = a2[4];
            v191 = 0LL;
            DestinationString = 0LL;
            if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                        v135,
                        v136,
                        (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&DestinationString) >= 0 )
            {
              a2[5] = *(_DWORD *)(&DestinationString.MaximumLength + 1);
              goto LABEL_299;
            }
          }
        }
        WdLogSingleEntry3(3LL, v135, *((int *)v135 + 102), *((unsigned int *)v135 + 101));
        goto LABEL_105;
      }
      goto LABEL_303;
    }
    if ( (unsigned int)v11 <= 0xFFFFFFEE )
    {
      if ( (_DWORD)v11 == -18 )
        goto LABEL_155;
      if ( (unsigned int)(v11 + 31) > 1 )
      {
        if ( (unsigned int)(v11 + 27) > 1 )
        {
          if ( (_DWORD)v11 != -24 )
          {
            if ( (_DWORD)v11 != -23 )
            {
              if ( (_DWORD)v11 == -22 )
              {
                TargetBaseType = DxgkCreateLightweightDeviceAndContext((struct _LUID *)a2 + 1);
              }
              else
              {
                if ( (_DWORD)v11 != -19 )
                  goto LABEL_18;
                Global = DXGGLOBAL::GetGlobal();
                TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(
                                   Global,
                                   SendColorimetricControlToDriverCallback,
                                   a2,
                                   4LL);
              }
              goto LABEL_48;
            }
LABEL_79:
            if ( !IsCurrentProcessAdmin() )
            {
              LODWORD(v10) = -1073741790;
              goto LABEL_337;
            }
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
            if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
            {
              v52 = v189[0];
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v189[0], 0LL);
              if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v199, 1LL) < 0 )
              {
                WdLogSingleEntry3(2LL, v52, *((int *)v52 + 102), *((unsigned int *)v52 + 101));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdap"
                            "ter->GetLuid() = <0x%I64x, 0x%I64x>)",
                  (__int64)v52,
                  *((int *)v52 + 102),
                  *((unsigned int *)v52 + 101),
                  0LL,
                  0LL);
LABEL_105:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
                goto LABEL_337;
              }
              v53 = a2[4];
              SymbolicLinkList_8[0] = 0LL;
              v54 = MonitorGetMonitorHandle((__int64)v52, v53, 0LL, &DxgkDisplayConfigDeviceInfo, SymbolicLinkList_8);
              DeviceInterfaces = v54;
              if ( v54 < 0 )
              {
                WdLogSingleEntry4(2LL, *((int *)v52 + 102), *((unsigned int *)v52 + 101), a2[4], v54);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                  *((int *)v52 + 102),
                  *((unsigned int *)v52 + 101),
                  a2[4],
                  DeviceInterfaces,
                  0LL);
                LODWORD(v10) = DeviceInterfaces;
                goto LABEL_105;
              }
              v55 = SymbolicLinkList_8[0];
              if ( !SymbolicLinkList_8[0] )
              {
                WdLogSingleEntry1(1LL, 6332LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"MonitorHandle != NULL",
                  6332LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( *a2 == -23 )
              {
                v56 = *((_QWORD *)a2 + 5);
                p_DestinationString = &DestinationString;
                v58 = a2[9];
                v59 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)SymbolicLinkList_8;
                v178 = 0LL;
                DestinationString = 0LL;
                v60 = *(_OWORD *)(a2 + 5);
                LOBYTE(v176) = 0;
                *(_QWORD *)RemlockSize = v56;
              }
              else
              {
                if ( *a2 != 13 )
                  goto LABEL_116;
                SymbolicLinkList_8[0] = 0LL;
                if ( (int)RtlStringCbLengthW(
                            (const unsigned __int16 *)a2 + 28,
                            0x100uLL,
                            (unsigned __int64 *)SymbolicLinkList_8) < 0
                  || !SymbolicLinkList_8[0] )
                {
                  WdLogSingleEntry1(2LL, 6355LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
                    6355LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(DeviceInterfaces) = -1073741811;
                  goto LABEL_116;
                }
                DestinationString = 0LL;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)a2 + 28);
                v61 = a2[5];
                v60 = *(_OWORD *)(a2 + 10);
                v178 = &DestinationString;
                p_DestinationString = (struct _UNICODE_STRING *)SymbolicLinkList_8;
                LOBYTE(v176) = 1;
                v59 = v192;
                *(_OWORD *)v192 = *(_OWORD *)(a2 + 6);
                *(_QWORD *)RemlockSize = 0LL;
                v58 = v61 & 1;
              }
              *(_OWORD *)SymbolicLinkList_8 = v60;
              LODWORD(DeviceInterfaces) = MonitorSetAppOverride(
                                            v55,
                                            v59,
                                            p_DestinationString,
                                            v58,
                                            *(_QWORD *)RemlockSize,
                                            v176,
                                            v178);
LABEL_116:
              MonitorReleaseMonitorHandle(v52, v55, &DxgkDisplayConfigDeviceInfo);
LABEL_299:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
              goto LABEL_19;
            }
            goto LABEL_303;
          }
          v62 = DXGGLOBAL::GetGlobal();
          v63 = a2[4];
          if ( !*((_BYTE *)v62 + 304880) )
          {
            *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 1);
            a2[7] = v63;
            goto LABEL_19;
          }
          *(_QWORD *)&DestinationString.Length = *((_QWORD *)a2 + 1);
          DestinationString.Buffer = (wchar_t *)v63;
          SymbolicLinkList_8[0] = 0LL;
          LODWORD(SymbolicLinkList_8[1]) = 0;
          LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                        (struct DXGGLOBAL *)((char *)v62 + 304832),
                                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&DestinationString,
                                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)SymbolicLinkList_8);
          if ( (int)DeviceInterfaces < 0 )
            goto LABEL_19;
          *(PZZWSTR *)(a2 + 5) = SymbolicLinkList_8[0];
          v64 = (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)SymbolicLinkList_8[1];
LABEL_121:
          a2[7] = v64;
          goto LABEL_19;
        }
        if ( a2[1] < 0x18 )
        {
LABEL_123:
          v65 = WdLogNewEntry5_WdTrace(v11, v7, v8, v9);
          LODWORD(v10) = -1073741789;
          *(_QWORD *)(v65 + 24) = a2[1];
          *(_QWORD *)(v65 + 32) = -1073741789LL;
          goto LABEL_337;
        }
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
        if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
          goto LABEL_303;
        v66 = v189[0];
        if ( !DXGADAPTER::IsDisplayAdapter(v189[0]) )
        {
          v67 = *((unsigned int *)v66 + 101);
          v68 = v66;
          v69 = *((int *)v66 + 102);
LABEL_150:
          WdLogSingleEntry3(3LL, v68, v69, v67);
          LODWORD(v10) = -1073741637;
          goto LABEL_337;
        }
        if ( *a2 != -26 )
        {
          v182[1] = 0;
          v77 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v182[1], 0);
          v10 = v77;
          if ( v77 < 0 )
          {
LABEL_50:
            WdLogSingleEntry1(3LL, v10);
LABEL_71:
            v36 = &v182[1];
LABEL_336:
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v36);
            goto LABEL_337;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v66, 0LL);
          v78 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v199, 0LL);
          LODWORD(v10) = v78;
          if ( v78 < 0 )
          {
            WdLogSingleEntry4(3LL, v66, *((int *)v66 + 102), *((unsigned int *)v66 + 101), v78);
            goto LABEL_70;
          }
          LOBYTE(v79) = *((_BYTE *)a2 + 20) != 0;
          LODWORD(DeviceInterfaces) = MonitorEnableBoostRefreshRateEnabledByDefault(v66, a2[4], v79);
          if ( (_DWORD)DeviceInterfaces == -1073741802 )
          {
            v80 = a2[4];
            v184.Value = 0;
            SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                                     v66,
                                                     v80,
                                                     (unsigned int *)&v184);
            LODWORD(DeviceInterfaces) = SourceConnectedToTargetInClientVidPn;
            if ( SourceConnectedToTargetInClientVidPn == -1071774884
              || SourceConnectedToTargetInClientVidPn == -1071774912 )
            {
              LODWORD(DeviceInterfaces) = 0;
            }
            else if ( SourceConnectedToTargetInClientVidPn >= 0 )
            {
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v66 + 365), v184.Value);
              if ( *((_BYTE *)a2 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
                LODWORD(DeviceInterfaces) = -1073741802;
            }
          }
LABEL_73:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
          v37 = &v182[1];
LABEL_350:
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v37);
          goto LABEL_19;
        }
        v182[0] = 0;
        DestinationString.Buffer = (wchar_t *)v66;
        LOBYTE(v191) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
        if ( *((_DWORD *)v66 + 50) == 1 )
        {
          IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault((__int64)v189[0], a2[4], v182);
          LODWORD(DeviceInterfaces) = IsBoostRefreshRateEnabledByDefault;
          if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
          {
            LODWORD(DeviceInterfaces) = 0;
            v75 = 0;
          }
          else
          {
            if ( IsBoostRefreshRateEnabledByDefault < 0 )
              goto LABEL_32;
            v75 = v182[0];
          }
          *((_BYTE *)a2 + 20) = v75;
          goto LABEL_32;
        }
LABEL_134:
        v76 = WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
        LODWORD(v10) = -1073741130;
        *(DXGADAPTER **)(v76 + 24) = v189[0];
        *(_QWORD *)(v76 + 32) = -1073741130LL;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
        goto LABEL_337;
      }
      if ( a2[1] < 0x18 )
        goto LABEL_123;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
      if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
        goto LABEL_303;
      if ( !DXGADAPTER::IsDisplayAdapter(v189[0]) )
      {
        v67 = *(unsigned int *)(v83 + 404);
        v68 = (DXGADAPTER *)v83;
        v69 = *(int *)(v83 + 408);
        goto LABEL_150;
      }
      if ( *a2 != -30 )
      {
        v184.Value = 0;
        GetCabcOptionFromRegistry((unsigned int *)&v184);
        a2[5] = v184.Value;
        goto LABEL_19;
      }
      v84 = TriggerCabcV2Wnf(a2[5]);
      DeviceInterfaces = v84;
      if ( v84 >= 0 )
      {
LABEL_19:
        LODWORD(v10) = DeviceInterfaces;
        goto LABEL_337;
      }
      WdLogSingleEntry1(2LL, v84);
      v85 = L"TriggerCabcV2Wnf failed 0x%I64x";
      v179 = 0LL;
      v177 = 0LL;
      RemlockSizea = DeviceInterfaces;
LABEL_280:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v85, RemlockSizea, v177, v179, 0LL, 0LL);
      goto LABEL_19;
    }
    if ( (_DWORD)v11 != -16 )
    {
      switch ( (_DWORD)v11 )
      {
        case 0xFFFFFFF2:
          v146 = DXGGLOBAL::GetGlobal();
          v147 = (char *)v146 + 1384;
          *(_QWORD *)&DestinationString.Length = (char *)v146 + 1384;
          LOBYTE(DestinationString.Buffer) = 0;
          if ( v146 == (struct DXGGLOBAL *)-1384LL )
          {
            WdLogSingleEntry1(1LL, 592LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(struct _KTHREAD **)(*(_QWORD *)&DestinationString.Length + 24LL) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)&DestinationString.Length);
          v148 = *((_DWORD *)v147 + 17);
          LOBYTE(DestinationString.Buffer) = 0;
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)&DestinationString.Length);
          a2[6] = v148;
          SymbolicLinkList_8[0] = (PZZWSTR)v147;
          LOBYTE(SymbolicLinkList_8[1]) = 0;
          if ( *((struct _KTHREAD **)v147 + 3) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)SymbolicLinkList_8[0]);
          LOBYTE(SymbolicLinkList_8[1]) = 0;
          v149 = 0xFFFFFFFF >> (32 - v147[68]) << (32 - v147[68]);
          DXGFASTMUTEX::Release((struct _KTHREAD **)SymbolicLinkList_8[0]);
          a2[8] = v149;
          LOBYTE(v192[2]) = 0;
          *(_QWORD *)v192 = v147;
          if ( *((struct _KTHREAD **)v147 + 3) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( LOBYTE(v192[2]) )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v192, 0LL, 0LL);
          DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)v192);
          v150 = 32 - *((_DWORD *)v147 + 17);
          LOBYTE(v192[2]) = 0;
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)v192);
          v151 = a2[9];
          a2[7] = v150;
          if ( (v151 & 2) != 0 )
            goto LABEL_19;
          v152 = a2 + 5;
          v153 = a2 + 4;
          if ( (v151 & 1) == 0 )
          {
            LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                          (DXGADAPTERSOURCEHASH *)v147,
                                          (const struct _LUID *)a2 + 1,
                                          *v153,
                                          a2 + 5);
            if ( (int)DeviceInterfaces >= 0 )
              goto LABEL_19;
            WdLogSingleEntry3(2LL, (int)a2[3], a2[2], *v153);
            v85 = L"Failed to find has for adapter <0x%I64x, 0x%I64x>, source:0x%I64x";
            v179 = *v153;
            v177 = a2[2];
            RemlockSizea = (int)a2[3];
            goto LABEL_280;
          }
          LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                        (DXGADAPTERSOURCEHASH *)v147,
                                        *v152,
                                        (struct _LUID *)a2 + 1,
                                        a2 + 4);
          if ( (int)DeviceInterfaces >= 0 )
            goto LABEL_19;
          WdLogSingleEntry1(2LL, *v152);
          v133 = *v152;
          v85 = L"Failed to find source/adapter from hash 0x%I64x";
          v179 = 0LL;
          v177 = 0LL;
          break;
        case 0xFFFFFFF3:
          v142 = a2[4];
          v143 = (struct _LUID)*((_QWORD *)a2 + 1);
          v182[3] = 0;
          v182[0] = 0;
          v182[1] = 0;
          v184.Value = 0;
          v192[0] = D3DKMDT_VOT_HD15;
          v188 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                        v143,
                                        v142,
                                        (__int64)&v182[1],
                                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v184,
                                        v192,
                                        (__int64)&v188);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v144 = (v182[0] ? 2 : 0) | v182[3] | a2[8] & 0xFFFFFFFC;
            v145 = -v182[1];
            a2[5] = v184.Value;
            a2[6] = v192[0];
            v64 = v188;
            a2[8] = v145 & 4 | v144 & 0xFFFFFFFB;
            goto LABEL_121;
          }
          WdLogSingleEntry3(2LL, (int)a2[3], a2[2], a2[4]);
          v85 = L"Failed DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_INFO_INTERNAL for adapter <0x%I64x, 0x%I64x>, target:0x%I64x";
          v179 = a2[4];
          v177 = a2[2];
          RemlockSizea = (int)a2[3];
          goto LABEL_280;
        case 0xFFFFFFF4:
          a2[5] = 0;
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)a2 + 1);
          if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
            goto LABEL_303;
          v137 = v189[0];
          DestinationString.Buffer = (wchar_t *)v189[0];
          LOBYTE(v191) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v137 + 50) == 1 )
          {
            v138 = v189[0];
            a2[5] ^= (a2[5] ^ (*((_DWORD *)v189[0] + 566) >> 2)) & 1;
            v139 = a2[5] ^ ((unsigned __int8)a2[5] ^ (unsigned __int8)(*((_DWORD *)v138 + 566) >> 2)) & 2;
            a2[5] = v139;
            v140 = v139 ^ ((unsigned __int8)v139 ^ (unsigned __int8)(*((_DWORD *)v138 + 566) >> 2)) & 4;
            a2[5] = v140;
            v141 = v140 ^ ((unsigned __int8)v140 ^ (unsigned __int8)(32 * *((_DWORD *)v138 + 566))) & 0x20;
            a2[5] = v141;
            a2[5] = v141 ^ ((unsigned __int8)v141 ^ (unsigned __int8)(8 * *((_DWORD *)v138 + 566))) & 0x10;
            goto LABEL_32;
          }
          goto LABEL_134;
        case 0xFFFFFFF6:
          goto LABEL_289;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            WdLogSingleEntry1(1LL, 5565LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5565LL, 0LL, 0LL, 0LL, 0LL);
          }
          LODWORD(DeviceInterfaces) = 0;
          if ( g_OSTestSigningEnabled && !a2[5] )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal() + 339) = 0;
            goto LABEL_19;
          }
          if ( a2[5] - 1 <= 3 )
          {
            v134 = DXGGLOBAL::GetGlobal();
            if ( a2[5] != 1 )
            {
              switch ( a2[5] )
              {
                case 2u:
                  v6 = 2;
                  break;
                case 3u:
                  v6 = 3;
                  break;
                case 4u:
                  v6 = 4;
                  break;
              }
            }
            *((_DWORD *)v134 + 339) = v6;
            goto LABEL_19;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          WdLogSingleEntry2(2LL, (int)a2[5], -1073741811LL);
          v133 = (int)a2[5];
          v85 = L"Caller specified a wrong rotataion mode 0x%I64x, returning 0x%I64x.";
          v179 = 0LL;
          v177 = -1073741811LL;
          break;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            WdLogSingleEntry1(1LL, 5555LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5555LL, 0LL, 0LL, 0LL, 0LL);
          }
          v132 = DXGGLOBAL::GetGlobal();
          a2[5] = ConvertDmmToDisplayConfigRotation(*((unsigned int *)v132 + 339));
          LODWORD(DeviceInterfaces) = 0;
          goto LABEL_19;
        default:
          goto LABEL_18;
      }
      RemlockSizea = v133;
      goto LABEL_280;
    }
    v86 = (struct _LUID)*((_QWORD *)a2 + 1);
    v154 = a2[4];
    SymbolicLinkList_8[0] = (PZZWSTR)v86;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v189, (const struct _LUID *)SymbolicLinkList_8);
    if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v189) )
    {
      v91 = WdLogNewEntry5_WdTrace(v156, v155, v157, v158);
      HighPart = SHIDWORD(SymbolicLinkList_8[0]);
      goto LABEL_157;
    }
    v182[0] = 0;
    v159 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v182, 0);
    v10 = v159;
    if ( v159 < 0 )
    {
      WdLogSingleEntry1(2LL, v159);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_335:
      v36 = v182;
      goto LABEL_336;
    }
    v160 = v189[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v189[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v199, 1LL) >= 0 )
    {
      if ( DXGADAPTER::IsDisplayAdapter(v160) )
      {
        if ( *((int *)v160 + 638) >= 9216 && (*((_DWORD *)v160 + 566) & 8) != 0 )
        {
          SymbolicLinkList_8[0] = 0LL;
          LOBYTE(v162) = 1;
          v166 = MonitorGetMonitorHandle(
                   v161,
                   (unsigned int)v154,
                   v162,
                   &DxgkDisplayConfigDeviceInfo,
                   SymbolicLinkList_8);
          v10 = v166;
          if ( v166 >= 0 )
          {
            v167 = (__int64)(a2 + 11);
            v181 = a2[15];
            v168 = (_DWORD)a2 + 36;
            v169 = (_DWORD)a2 + 28;
            v180 = a2[14];
            v170 = (_DWORD)a2 + 20;
            v171 = a2[13];
            v172 = SymbolicLinkList_8[0];
            v173 = MonitorSetAdvancedColorParams(SymbolicLinkList_8[0], v170, v169, v168, v167, v171, v180, v181);
            v10 = v173;
            if ( v173 >= 0 )
            {
              MonitorReleaseMonitorHandle(v160, v172, &DxgkDisplayConfigDeviceInfo);
              if ( (_DWORD)v10 != 255 )
                LODWORD(v10) = 255;
              LODWORD(DeviceInterfaces) = v10;
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
              v37 = v182;
              goto LABEL_350;
            }
            WdLogSingleEntry4(2LL, *((int *)v160 + 102), *((unsigned int *)v160 + 101), v154, v173);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v160 + 102),
              *((unsigned int *)v160 + 101),
              v154,
              v10,
              0LL);
            MonitorReleaseMonitorHandle(v160, v172, &DxgkDisplayConfigDeviceInfo);
          }
          else
          {
            WdLogSingleEntry4(2LL, *((int *)v160 + 102), *((unsigned int *)v160 + 101), v154, v166);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v160 + 102),
              *((unsigned int *)v160 + 101),
              v154,
              v10,
              0LL);
          }
          goto LABEL_334;
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v160, *((int *)v160 + 102), *((unsigned int *)v160 + 101));
      }
      LODWORD(v10) = -1073741637;
    }
    else
    {
      WdLogSingleEntry3(2LL, v160, *((int *)v160 + 102), *((unsigned int *)v160 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->GetLu"
                  "id() = <0x%I64x, 0x%I64x>)",
        (__int64)v160,
        *((int *)v160 + 102),
        *((unsigned int *)v160 + 101),
        0LL,
        0LL);
      LODWORD(v10) = -1073741811;
    }
LABEL_334:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v199);
    goto LABEL_335;
  }
  WdLogSingleEntry1(1LL, 5104LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pRequestPacket != NULL", 5104LL, 0LL, 0LL, 0LL, 0LL);
LABEL_337:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195);
  if ( v197 )
  {
    LOBYTE(v163) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v163, &EventProfilerExit, v164, v195);
  }
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v189);
  return (unsigned int)v10;
}
