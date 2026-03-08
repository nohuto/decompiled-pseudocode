/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0020740
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00227EC (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00D7164 (DrvAddMirrorDriversToRemoteList.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C000EFA0 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00DAB80 (_wcsicmp.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(void **Context, WCHAR *Path, int a3)
{
  unsigned __int64 Environment; // r15
  int v4; // esi
  WCHAR *v5; // r12
  NTSTATUS RegistryValues; // edi
  char v8; // r13
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  _QWORD *v11; // rax
  int v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned int v14; // edx
  int v15; // edx
  struct _DEVICE_OBJECT *v16; // rcx
  const wchar_t *v17; // rcx
  WCHAR *v18; // rsi
  _DWORD *v19; // r14
  unsigned int v20; // ecx
  _WORD *v21; // r8
  unsigned int v22; // eax
  void *v23; // rax
  unsigned int v24; // eax
  struct _RTL_QUERY_REGISTRY_TABLE *v25; // r8
  __int64 v26; // r14
  WCHAR *v27; // rax
  WCHAR *v28; // r15
  _WORD *v29; // rsi
  __int64 v30; // rdx
  _WORD *v31; // rax
  unsigned __int16 v32; // cx
  int v33; // r8d
  unsigned int v34; // r12d
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  _WORD *v38; // rax
  unsigned int v39; // r14d
  void *v40; // rax
  void *v41; // rdx
  int v42; // ecx
  const void *v43; // rcx
  void *v44; // rax
  const void *v45; // rcx
  unsigned int v46; // eax
  void *v47; // rdx
  void *v48; // rcx
  void *v49; // rdx
  void *v50; // rdx
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-9Ch] BYREF
  int v56; // [rsp+68h] [rbp-98h] BYREF
  wchar_t v57; // [rsp+6Ch] [rbp-94h]
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+74h] [rbp-8Ch] BYREF
  PCWSTR v60; // [rsp+78h] [rbp-88h]
  __int128 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  void *Source2[2]; // [rsp+90h] [rbp-70h]
  SIZE_T Length[2]; // [rsp+A0h] [rbp-60h]
  ULONG v64; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h]
  struct _RTL_QUERY_REGISTRY_TABLE v68; // [rsp+E0h] [rbp-20h] BYREF
  int (*v69)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+118h] [rbp+18h] BYREF
  int v70; // [rsp+120h] [rbp+20h]
  const wchar_t *v71; // [rsp+128h] [rbp+28h]
  void **v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+138h] [rbp+38h]
  unsigned __int64 v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  unsigned __int64 v76; // [rsp+150h] [rbp+50h]
  int v77; // [rsp+158h] [rbp+58h]
  __int128 v78; // [rsp+160h] [rbp+60h]
  __int128 v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+80h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+190h] [rbp+90h] BYREF
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  int v83; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v84; // [rsp+1D8h] [rbp+D8h]
  __int64 v85; // [rsp+1E0h] [rbp+E0h]
  int v86; // [rsp+1E8h] [rbp+E8h]
  __int64 v87; // [rsp+1F0h] [rbp+F0h]
  int v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h] BYREF
  int v90; // [rsp+208h] [rbp+108h]
  const wchar_t *v91; // [rsp+210h] [rbp+110h]
  int *v92; // [rsp+218h] [rbp+118h]
  int v93; // [rsp+220h] [rbp+120h]
  int *v94; // [rsp+228h] [rbp+128h]
  int v95; // [rsp+230h] [rbp+130h]
  __int64 v96; // [rsp+238h] [rbp+138h]
  int v97; // [rsp+240h] [rbp+140h]
  const wchar_t *v98; // [rsp+248h] [rbp+148h]
  int *v99; // [rsp+250h] [rbp+150h]
  int v100; // [rsp+258h] [rbp+158h]
  int *v101; // [rsp+260h] [rbp+160h]
  int v102; // [rsp+268h] [rbp+168h]
  __int64 v103; // [rsp+270h] [rbp+170h]
  int v104; // [rsp+278h] [rbp+178h]
  const wchar_t *v105; // [rsp+280h] [rbp+180h]
  int *v106; // [rsp+288h] [rbp+188h]
  int v107; // [rsp+290h] [rbp+190h]
  int *v108; // [rsp+298h] [rbp+198h]
  int v109; // [rsp+2A0h] [rbp+1A0h]
  int (*v110)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2A8h] [rbp+1A8h]
  int v111; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v112; // [rsp+2B8h] [rbp+1B8h]
  __int64 v113; // [rsp+2C0h] [rbp+1C0h]
  int v114; // [rsp+2C8h] [rbp+1C8h]
  __int64 v115; // [rsp+2D0h] [rbp+1D0h]
  int v116; // [rsp+2D8h] [rbp+1D8h]
  int (*v117)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v118; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v119; // [rsp+2F0h] [rbp+1F0h]
  __int64 v120; // [rsp+2F8h] [rbp+1F8h]
  int v121; // [rsp+300h] [rbp+200h]
  __int64 v122; // [rsp+308h] [rbp+208h]
  int v123; // [rsp+310h] [rbp+210h]
  int (*v124)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+318h] [rbp+218h]
  int v125; // [rsp+320h] [rbp+220h]
  const wchar_t *v126; // [rsp+328h] [rbp+228h]
  __int64 v127; // [rsp+330h] [rbp+230h]
  int v128; // [rsp+338h] [rbp+238h]
  __int64 v129; // [rsp+340h] [rbp+240h]
  int v130; // [rsp+348h] [rbp+248h]
  __int64 v131; // [rsp+350h] [rbp+250h]
  int v132; // [rsp+358h] [rbp+258h]
  const wchar_t *v133; // [rsp+360h] [rbp+260h]
  unsigned int *v134; // [rsp+368h] [rbp+268h]
  int v135; // [rsp+370h] [rbp+270h]
  int *v136; // [rsp+378h] [rbp+278h]
  int v137; // [rsp+380h] [rbp+280h]
  __int64 v138; // [rsp+388h] [rbp+288h]
  int v139; // [rsp+390h] [rbp+290h]
  __int128 v140; // [rsp+398h] [rbp+298h]
  __int128 v141; // [rsp+3A8h] [rbp+2A8h]
  __int64 v142; // [rsp+3B8h] [rbp+2B8h]
  struct _RTL_QUERY_REGISTRY_TABLE v143; // [rsp+3C0h] [rbp+2C0h] BYREF
  int (*v144)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+3F8h] [rbp+2F8h]
  int v145; // [rsp+400h] [rbp+300h]
  const wchar_t *v146; // [rsp+408h] [rbp+308h]
  __int64 v147; // [rsp+410h] [rbp+310h]
  int v148; // [rsp+418h] [rbp+318h]
  __int64 v149; // [rsp+420h] [rbp+320h]
  int v150; // [rsp+428h] [rbp+328h]
  __int64 v151; // [rsp+430h] [rbp+330h]
  int v152; // [rsp+438h] [rbp+338h]
  const wchar_t *v153; // [rsp+440h] [rbp+340h]
  int *v154; // [rsp+448h] [rbp+348h]
  int v155; // [rsp+450h] [rbp+350h]
  int *v156; // [rsp+458h] [rbp+358h]
  int v157; // [rsp+460h] [rbp+360h]
  __int64 v158; // [rsp+468h] [rbp+368h]
  int v159; // [rsp+470h] [rbp+370h]
  const wchar_t *v160; // [rsp+478h] [rbp+378h]
  int *v161; // [rsp+480h] [rbp+380h]
  int v162; // [rsp+488h] [rbp+388h]
  int *v163; // [rsp+490h] [rbp+390h]
  int v164; // [rsp+498h] [rbp+398h]
  __int64 v165; // [rsp+4A0h] [rbp+3A0h]
  int v166; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v167; // [rsp+4B0h] [rbp+3B0h]
  unsigned int *v168; // [rsp+4B8h] [rbp+3B8h]
  int v169; // [rsp+4C0h] [rbp+3C0h]
  int *v170; // [rsp+4C8h] [rbp+3C8h]
  int v171; // [rsp+4D0h] [rbp+3D0h]
  __int64 v172; // [rsp+4D8h] [rbp+3D8h]
  int v173; // [rsp+4E0h] [rbp+3E0h]
  __int128 v174; // [rsp+4E8h] [rbp+3E8h]
  __int128 v175; // [rsp+4F8h] [rbp+3F8h]
  __int64 v176; // [rsp+508h] [rbp+408h]

  Environment = 0LL;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v84 = L"Settings";
  v91 = L"MultiDisplayDriver";
  v60 = Path;
  v92 = &v56;
  v5 = Path;
  v54 = 0;
  v56 = 0;
  v94 = &v54;
  v98 = L"MirrorDriver";
  RegistryValues = 0;
  v52 = 0;
  v99 = &v52;
  v8 = 0;
  v53 = 0;
  v101 = &v54;
  v105 = L"AccDriver";
  v106 = &v53;
  v108 = &v54;
  v112 = L"Device Description";
  v119 = L"HardwareInformation.AdapterString";
  v55 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v82 = 0LL;
  v83 = 1;
  v85 = 0LL;
  v86 = 0;
  v87 = 0LL;
  v88 = 0;
  v89 = 0LL;
  v90 = 288;
  v93 = 67108868;
  v95 = 4;
  v96 = 0LL;
  v97 = 288;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v104 = 288;
  v107 = 67108868;
  v109 = 4;
  v110 = __EnumDisplayQueryRoutine;
  v111 = 16;
  v113 = 0LL;
  v114 = 0;
  v115 = 0LL;
  v116 = 0;
  v117 = __EnumDisplayQueryRoutine;
  v118 = 16;
  v120 = 0LL;
  v121 = 0;
  v122 = 0LL;
  v123 = 0;
  v126 = L"HardwareInformation.ChipType";
  v133 = L"TSCompatible";
  v134 = &v55;
  v136 = &v54;
  v135 = 67108868;
  v9 = a3 == 0;
  v142 = 0LL;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v89;
  v124 = __EnumDisplayQueryRoutine;
  v132 = 288;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v137 = 4;
  v125 = 16;
  v127 = 0LL;
  v128 = 0;
  v129 = 0LL;
  v130 = 0;
  v131 = 0LL;
  v138 = 0LL;
  v139 = 0;
  v140 = 0LL;
  v141 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 65) )
  {
    ResultLength = 0;
    v18 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues == -1073741789 )
    {
      if ( ResultLength
        && (v19 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    gpLeakTrackingAllocator,
                    0x104uLL,
                    ResultLength,
                    0x73726447u)) != 0LL )
      {
        v64 = 0;
        RegistryValues = ZwQueryKey(v5, KeyNameInformation, v19, ResultLength, &v64);
        if ( RegistryValues >= 0 )
        {
          v20 = 0;
          if ( *v19 >> 1 )
          {
            v21 = v19 + 1;
            do
            {
              v9 = *v21 == 92;
              v22 = v20;
              ++v21;
              if ( !v9 )
                v22 = Environment;
              ++v20;
              Environment = v22;
            }
            while ( v20 < *v19 >> 1 );
            if ( v22 )
            {
              v59 = *(_DWORD *)L"eo";
              v57 = aVideo[6];
              v65 = *(_QWORD *)L"\\Video";
              if ( 2 * v22 == -14
                || (v23 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                            gpLeakTrackingAllocator,
                            0x104uLL,
                            2 * v22 + 14,
                            0x73726447u),
                    (v18 = (WCHAR *)v23) == 0LL) )
              {
                RegistryValues = -1073741670;
              }
              else
              {
                memmove(v23, v19 + 1, (unsigned int)(2 * Environment));
                v24 = v59;
                *(_QWORD *)&v18[Environment] = v65;
                *(_DWORD *)&v18[Environment + 4] = v24;
                v18[Environment + 6] = v57;
              }
              v8 = 0;
            }
            else
            {
              v8 = 0;
            }
            Environment = 0LL;
          }
          else
          {
            v8 = 0;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
        if ( v18 )
        {
          v68.Flags = 16;
          v68.EntryContext = 0LL;
          v68.QueryRoutine = __EnumDisplayQueryRoutine;
          v68.DefaultType = 0;
          v68.Name = L"DeviceDesc";
          v68.DefaultData = 0LL;
          v71 = L"Driver";
          v68.DefaultLength = 0;
          v72 = Src;
          v69 = 0LL;
          v80 = 0LL;
          *(_OWORD *)Src = 0LL;
          v70 = 304;
          v73 = 16777217;
          v74 = 0LL;
          v75 = 0;
          v76 = 0LL;
          v77 = 0;
          v78 = 0LL;
          v79 = 0LL;
          RegistryValues = RtlQueryRegistryValues(0, v18, &v68, Context, 0LL);
          if ( RegistryValues >= 0 )
          {
            v8 = 1;
            if ( LOWORD(Src[0]) )
            {
              v26 = (unsigned int)LOWORD(Src[0]) + 12;
              v65 = *(_QWORD *)L"Class\\";
              WORD6(v67) = aClass[6];
              v27 = (WCHAR *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                               gpLeakTrackingAllocator,
                               0x104uLL,
                               (unsigned int)LOWORD(Src[0]) + 14,
                               0x73726447u);
              v28 = v27;
              if ( v27 )
              {
                *(_QWORD *)v27 = v65;
                *((_DWORD *)v27 + 2) = *(_DWORD *)L"s\\";
                memmove(v27 + 6, Src[1], LOWORD(Src[0]));
                v143.Flags = 1;
                v143.QueryRoutine = 0LL;
                *(WCHAR *)((char *)v28 + v26) = 0;
                v143.EntryContext = 0LL;
                v143.DefaultType = 0;
                v143.DefaultData = 0LL;
                v143.Name = L"Settings";
                v143.DefaultLength = 0;
                v144 = __DisplayDriverQueryRoutine;
                v146 = L"InstalledDisplayDrivers";
                v153 = L"MirrorDriver";
                v154 = &v52;
                v156 = &v54;
                v160 = L"AccDriver";
                v161 = &v53;
                v163 = &v54;
                v167 = L"TSCompatible";
                v168 = &v55;
                v170 = &v54;
                v147 = 0LL;
                v148 = 0;
                v149 = 0LL;
                v150 = 0;
                v151 = 0LL;
                v152 = 288;
                v155 = 67108868;
                v157 = 4;
                v158 = 0LL;
                v159 = 288;
                v162 = 67108868;
                v164 = 4;
                v165 = 0LL;
                v166 = 288;
                v169 = 67108868;
                v171 = 4;
                v172 = 0LL;
                v173 = 0;
                v145 = 16;
                v174 = 0LL;
                v176 = 0LL;
                v175 = 0LL;
                RtlQueryRegistryValues(2u, v28, &v143, Context, 0LL);
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v28);
              }
              else
              {
                RegistryValues = -1073741670;
              }
              Environment = 0LL;
            }
          }
          if ( Src[1] )
          {
            ExFreePoolWithTag(Src[1], 0);
            Src[1] = 0LL;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
          if ( v8 )
          {
            v29 = Context[26];
            if ( v29 )
            {
              if ( *((_DWORD *)Context + 65) )
              {
                v67 = 0LL;
                v30 = 0x7FFFLL;
                v31 = v29;
                do
                {
                  if ( !*v31 )
                    break;
                  ++v31;
                  --v30;
                }
                while ( v30 );
                RegistryValues = v30 == 0 ? 0xC000000D : 0;
                if ( v30 )
                {
                  v32 = 2 * (0x7FFF - v30);
                }
                else
                {
                  v29 = (_WORD *)*((_QWORD *)&v67 + 1);
                  v32 = v67;
                }
                if ( v30 )
                {
                  v33 = v32;
                  v34 = 0;
                  v35 = v32;
                  v36 = 0;
                  v37 = (v35 >> 1) - 1;
                  if ( v37 )
                  {
                    v38 = v29;
                    while ( 1 )
                    {
                      ++v36;
                      if ( *v38 == 59 )
                        break;
                      ++v38;
                      if ( v36 >= v37 )
                        goto LABEL_77;
                    }
                    v34 = v36;
                  }
LABEL_77:
                  v39 = v33 + 2 * (1 - v34);
                  if ( v39
                    && (v40 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                gpLeakTrackingAllocator,
                                0x104uLL,
                                v39,
                                0x73726447u),
                        (Environment = (unsigned __int64)v40) != 0) )
                  {
                    memmove(v40, &v29[v34], v39);
                    v41 = Context[26];
                    if ( v41 )
                      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v41);
                    Context[26] = (void *)Environment;
                    Environment = 0LL;
                    *((_DWORD *)Context + 65) = v39;
                  }
                  else
                  {
                    RegistryValues = -1073741670;
                    *((_DWORD *)Context + 65) = Environment;
                  }
                }
              }
            }
          }
        }
        v5 = (WCHAR *)v60;
      }
      else
      {
        RegistryValues = -1073741670;
      }
    }
    v4 = a3;
  }
  if ( ((_DWORD)Context[20] & 0x800000) != 0 )
  {
    v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0xAuLL, 0x73726447u);
    Context[25] = v11;
    if ( !v11 )
      goto LABEL_115;
    *v11 = *(_QWORD *)L"cdd";
    *((_WORD *)v11 + 4) = 0;
    *((_DWORD *)Context + 64) = 10;
    RegistryValues = Environment;
  }
  else
  {
    if ( v53 == (_DWORD)Environment && v52 == (_DWORD)Environment )
    {
      v69 = __DisplayDriverQueryRoutine;
      v68.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)Environment;
      v68.Name = L"Settings";
      v25 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v69;
      v71 = L"InstalledDisplayDrivers";
      v68.Flags = 1;
      v80 = 0LL;
      v68.EntryContext = (PVOID)Environment;
      if ( v4 )
        v25 = &v68;
      v68.DefaultType = Environment;
      v68.DefaultData = (PVOID)Environment;
      v68.DefaultLength = Environment;
      v70 = 16;
      v72 = (void **)Environment;
      v73 = Environment;
      v74 = Environment;
      v75 = Environment;
      v76 = Environment;
      v77 = Environment;
      v78 = 0LL;
      v79 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v25, Context, (PVOID)Environment);
    }
    if ( RegistryValues < 0 )
      goto LABEL_115;
  }
  v12 = v52;
  v13 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v53 != (_DWORD)Environment )
    v12 = 1;
  v52 = v12;
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  GreDeviceIoControlImpl(v13, 0x23203Bu, 0LL, 0, &InputBuffer, 0x30u, &v59, 1u, 1);
  v14 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || Source2[0] == (void *)Environment )
  {
    v15 = Environment;
    LODWORD(InputBuffer) = v56;
    LOBYTE(v15) = v52 != (_DWORD)Environment;
    Source2[0] = Context[25];
    v16 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(Source2[1]) = *((_DWORD *)Context + 64);
    Length[0] = (SIZE_T)Context[26];
    LODWORD(Length[1]) = *((_DWORD *)Context + 65);
    DWORD1(InputBuffer) = (v53 != 0 ? 2 : 0) | v15;
    *((_QWORD *)&InputBuffer + 1) = __PAIR64__(v55, Environment);
    GreDeviceIoControlImpl(v16, 0x23203Fu, &InputBuffer, 0x30u, (PVOID)Environment, Environment, &v59, 1u, 1);
    goto LABEL_11;
  }
  if ( v56 != (_DWORD)InputBuffer
    || (v42 = Environment, LOBYTE(v42) = v52 != (_DWORD)Environment, v42 != (BYTE4(InputBuffer) & 1))
    || (v53 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v55 != HIDWORD(InputBuffer) )
  {
    v56 = InputBuffer;
    v52 = BYTE4(InputBuffer) & 1;
    v53 = (DWORD1(InputBuffer) >> 1) & 1;
    v55 = HIDWORD(InputBuffer);
  }
  v43 = Context[25];
  if ( v43 && LODWORD(Source2[1]) == *((_DWORD *)Context + 64) )
  {
    if ( RtlCompareMemory(v43, Source2[0], LODWORD(Source2[1])) == *((_DWORD *)Context + 64) )
      goto LABEL_102;
    v14 = (unsigned int)Source2[1];
  }
  if ( Context[25] )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Context[25]);
    v14 = (unsigned int)Source2[1];
  }
  if ( v14 )
  {
    v44 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v14, 0x73726447u);
    v14 = (unsigned int)Source2[1];
  }
  else
  {
    v44 = (void *)Environment;
  }
  Context[25] = v44;
  if ( v44 )
    memmove(v44, Source2[0], v14);
  else
    RegistryValues = -1073741670;
LABEL_102:
  v45 = Context[26];
  if ( v45 && Length[0] )
  {
    v46 = Length[1];
    if ( LODWORD(Length[1]) == *((_DWORD *)Context + 65) )
    {
      if ( RtlCompareMemory(v45, (const void *)Length[0], LODWORD(Length[1])) == *((_DWORD *)Context + 65) )
        goto LABEL_11;
      v46 = Length[1];
    }
    v47 = Context[26];
    if ( v47 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v47);
      v46 = Length[1];
    }
    if ( v46 )
    {
      v48 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v46, 0x73726447u);
      v46 = Length[1];
    }
    else
    {
      v48 = (void *)Environment;
    }
    Context[26] = v48;
    if ( v48 )
      memmove(v48, (const void *)Length[0], v46);
    else
      RegistryValues = -1073741670;
  }
LABEL_11:
  if ( RegistryValues >= 0 )
  {
    if ( v56 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v52 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v53 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v55 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v17 = (const wchar_t *)Context[26];
    if ( v17 )
    {
      if ( !wcsicmp(v17, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_115:
  DrvLogDisplayDriverEvent(1);
  v49 = Context[25];
  if ( v49 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v49);
    Context[25] = (void *)Environment;
  }
  v50 = Context[26];
  if ( v50 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v50);
    Context[26] = (void *)Environment;
  }
}
