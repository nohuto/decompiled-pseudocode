/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BB16C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00D60C0 (_wcsicmp.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
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
  __int64 v11; // rax
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
  __int64 v27; // rax
  WCHAR *v28; // r15
  _WORD *v29; // rsi
  __int64 v30; // rcx
  _WORD *v31; // rax
  unsigned __int16 v32; // ax
  int v33; // r8d
  unsigned int v34; // r12d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  _WORD *v37; // rdx
  unsigned int v38; // r14d
  void *v39; // rax
  void *v40; // rdx
  int v41; // ecx
  const void *v42; // rcx
  void *v43; // rax
  const void *v44; // rcx
  unsigned int v45; // eax
  void *v46; // rdx
  void *v47; // rcx
  void *v48; // rdx
  void *v49; // rdx
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  wchar_t v56; // [rsp+6Ch] [rbp-94h]
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v58; // [rsp+74h] [rbp-8Ch] BYREF
  PCWSTR v59; // [rsp+78h] [rbp-88h]
  __int128 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  void *Source2[2]; // [rsp+90h] [rbp-70h]
  SIZE_T Length[2]; // [rsp+A0h] [rbp-60h]
  ULONG v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h]
  struct _RTL_QUERY_REGISTRY_TABLE v67; // [rsp+E0h] [rbp-20h] BYREF
  int (*v68)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+118h] [rbp+18h] BYREF
  int v69; // [rsp+120h] [rbp+20h]
  const wchar_t *v70; // [rsp+128h] [rbp+28h]
  void **v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  unsigned __int64 v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  unsigned __int64 v75; // [rsp+150h] [rbp+50h]
  int v76; // [rsp+158h] [rbp+58h]
  __int128 v77; // [rsp+160h] [rbp+60h]
  __int128 v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+180h] [rbp+80h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+190h] [rbp+90h] BYREF
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  int v82; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v83; // [rsp+1D8h] [rbp+D8h]
  __int64 v84; // [rsp+1E0h] [rbp+E0h]
  int v85; // [rsp+1E8h] [rbp+E8h]
  __int64 v86; // [rsp+1F0h] [rbp+F0h]
  int v87; // [rsp+1F8h] [rbp+F8h]
  __int64 v88; // [rsp+200h] [rbp+100h] BYREF
  int v89; // [rsp+208h] [rbp+108h]
  const wchar_t *v90; // [rsp+210h] [rbp+110h]
  int *v91; // [rsp+218h] [rbp+118h]
  int v92; // [rsp+220h] [rbp+120h]
  int *v93; // [rsp+228h] [rbp+128h]
  int v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int v96; // [rsp+240h] [rbp+140h]
  const wchar_t *v97; // [rsp+248h] [rbp+148h]
  int *v98; // [rsp+250h] [rbp+150h]
  int v99; // [rsp+258h] [rbp+158h]
  int *v100; // [rsp+260h] [rbp+160h]
  int v101; // [rsp+268h] [rbp+168h]
  __int64 v102; // [rsp+270h] [rbp+170h]
  int v103; // [rsp+278h] [rbp+178h]
  const wchar_t *v104; // [rsp+280h] [rbp+180h]
  int *v105; // [rsp+288h] [rbp+188h]
  int v106; // [rsp+290h] [rbp+190h]
  int *v107; // [rsp+298h] [rbp+198h]
  int v108; // [rsp+2A0h] [rbp+1A0h]
  int (*v109)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2A8h] [rbp+1A8h]
  int v110; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v111; // [rsp+2B8h] [rbp+1B8h]
  __int64 v112; // [rsp+2C0h] [rbp+1C0h]
  int v113; // [rsp+2C8h] [rbp+1C8h]
  __int64 v114; // [rsp+2D0h] [rbp+1D0h]
  int v115; // [rsp+2D8h] [rbp+1D8h]
  int (*v116)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v117; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v118; // [rsp+2F0h] [rbp+1F0h]
  __int64 v119; // [rsp+2F8h] [rbp+1F8h]
  int v120; // [rsp+300h] [rbp+200h]
  __int64 v121; // [rsp+308h] [rbp+208h]
  int v122; // [rsp+310h] [rbp+210h]
  int (*v123)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+318h] [rbp+218h]
  int v124; // [rsp+320h] [rbp+220h]
  const wchar_t *v125; // [rsp+328h] [rbp+228h]
  __int64 v126; // [rsp+330h] [rbp+230h]
  int v127; // [rsp+338h] [rbp+238h]
  __int64 v128; // [rsp+340h] [rbp+240h]
  int v129; // [rsp+348h] [rbp+248h]
  __int64 v130; // [rsp+350h] [rbp+250h]
  int v131; // [rsp+358h] [rbp+258h]
  const wchar_t *v132; // [rsp+360h] [rbp+260h]
  unsigned int *v133; // [rsp+368h] [rbp+268h]
  int v134; // [rsp+370h] [rbp+270h]
  int *v135; // [rsp+378h] [rbp+278h]
  int v136; // [rsp+380h] [rbp+280h]
  __int64 v137; // [rsp+388h] [rbp+288h]
  int v138; // [rsp+390h] [rbp+290h]
  __int128 v139; // [rsp+398h] [rbp+298h]
  __int128 v140; // [rsp+3A8h] [rbp+2A8h]
  __int64 v141; // [rsp+3B8h] [rbp+2B8h]
  struct _RTL_QUERY_REGISTRY_TABLE v142; // [rsp+3C0h] [rbp+2C0h] BYREF
  int (*v143)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+3F8h] [rbp+2F8h]
  int v144; // [rsp+400h] [rbp+300h]
  const wchar_t *v145; // [rsp+408h] [rbp+308h]
  __int64 v146; // [rsp+410h] [rbp+310h]
  int v147; // [rsp+418h] [rbp+318h]
  __int64 v148; // [rsp+420h] [rbp+320h]
  int v149; // [rsp+428h] [rbp+328h]
  __int64 v150; // [rsp+430h] [rbp+330h]
  int v151; // [rsp+438h] [rbp+338h]
  const wchar_t *v152; // [rsp+440h] [rbp+340h]
  int *v153; // [rsp+448h] [rbp+348h]
  int v154; // [rsp+450h] [rbp+350h]
  int *v155; // [rsp+458h] [rbp+358h]
  int v156; // [rsp+460h] [rbp+360h]
  __int64 v157; // [rsp+468h] [rbp+368h]
  int v158; // [rsp+470h] [rbp+370h]
  const wchar_t *v159; // [rsp+478h] [rbp+378h]
  int *v160; // [rsp+480h] [rbp+380h]
  int v161; // [rsp+488h] [rbp+388h]
  int *v162; // [rsp+490h] [rbp+390h]
  int v163; // [rsp+498h] [rbp+398h]
  __int64 v164; // [rsp+4A0h] [rbp+3A0h]
  int v165; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v166; // [rsp+4B0h] [rbp+3B0h]
  unsigned int *v167; // [rsp+4B8h] [rbp+3B8h]
  int v168; // [rsp+4C0h] [rbp+3C0h]
  int *v169; // [rsp+4C8h] [rbp+3C8h]
  int v170; // [rsp+4D0h] [rbp+3D0h]
  __int64 v171; // [rsp+4D8h] [rbp+3D8h]
  int v172; // [rsp+4E0h] [rbp+3E0h]
  __int128 v173; // [rsp+4E8h] [rbp+3E8h]
  __int128 v174; // [rsp+4F8h] [rbp+3F8h]
  __int64 v175; // [rsp+508h] [rbp+408h]

  Environment = 0LL;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v83 = L"Settings";
  v90 = L"MultiDisplayDriver";
  v59 = Path;
  v91 = &v55;
  v5 = Path;
  v53 = 0;
  v55 = 0;
  v93 = &v53;
  v97 = L"MirrorDriver";
  RegistryValues = 0;
  v51 = 0;
  v98 = &v51;
  v8 = 0;
  v52 = 0;
  v100 = &v53;
  v104 = L"AccDriver";
  v105 = &v52;
  v107 = &v53;
  v111 = L"Device Description";
  v118 = L"HardwareInformation.AdapterString";
  v54 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v81 = 0LL;
  v82 = 1;
  v84 = 0LL;
  v85 = 0;
  v86 = 0LL;
  v87 = 0;
  v88 = 0LL;
  v89 = 288;
  v92 = 67108868;
  v94 = 4;
  v95 = 0LL;
  v96 = 288;
  v99 = 67108868;
  v101 = 4;
  v102 = 0LL;
  v103 = 288;
  v106 = 67108868;
  v108 = 4;
  v109 = __EnumDisplayQueryRoutine;
  v110 = 16;
  v112 = 0LL;
  v113 = 0;
  v114 = 0LL;
  v115 = 0;
  v116 = __EnumDisplayQueryRoutine;
  v117 = 16;
  v119 = 0LL;
  v120 = 0;
  v121 = 0LL;
  v122 = 0;
  v125 = L"HardwareInformation.ChipType";
  v132 = L"TSCompatible";
  v133 = &v54;
  v135 = &v53;
  v134 = 67108868;
  v9 = a3 == 0;
  v141 = 0LL;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v88;
  v123 = __EnumDisplayQueryRoutine;
  v131 = 288;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v136 = 4;
  v124 = 16;
  v126 = 0LL;
  v127 = 0;
  v128 = 0LL;
  v129 = 0;
  v130 = 0LL;
  v137 = 0LL;
  v138 = 0;
  v139 = 0LL;
  v140 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 67) )
  {
    ResultLength = 0;
    v18 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues == -1073741789 )
    {
      if ( ResultLength
        && (v19 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                              260LL,
                              ResultLength,
                              1936876615)) != 0LL )
      {
        v63 = 0;
        RegistryValues = ZwQueryKey(v5, KeyNameInformation, v19, ResultLength, &v63);
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
              v58 = *(_DWORD *)L"eo";
              v56 = aVideo[6];
              v64 = *(_QWORD *)L"\\Video";
              if ( 2 * v22 == -14
                || (v23 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                    260LL,
                                    2 * v22 + 14,
                                    1936876615),
                    (v18 = (WCHAR *)v23) == 0LL) )
              {
                RegistryValues = -1073741670;
              }
              else
              {
                memmove(v23, v19 + 1, (unsigned int)(2 * Environment));
                v24 = v58;
                *(_QWORD *)&v18[Environment] = v64;
                *(_DWORD *)&v18[Environment + 4] = v24;
                v18[Environment + 6] = v56;
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
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v19);
        if ( v18 )
        {
          v67.Flags = 16;
          v67.EntryContext = 0LL;
          v67.QueryRoutine = __EnumDisplayQueryRoutine;
          v67.DefaultType = 0;
          v67.Name = L"DeviceDesc";
          v67.DefaultData = 0LL;
          v70 = L"Driver";
          v67.DefaultLength = 0;
          v71 = Src;
          v68 = 0LL;
          v79 = 0LL;
          *(_OWORD *)Src = 0LL;
          v69 = 304;
          v72 = 16777217;
          v73 = 0LL;
          v74 = 0;
          v75 = 0LL;
          v76 = 0;
          v77 = 0LL;
          v78 = 0LL;
          RegistryValues = RtlQueryRegistryValues(0, v18, &v67, Context, 0LL);
          if ( RegistryValues >= 0 )
          {
            v8 = 1;
            if ( LOWORD(Src[0]) )
            {
              v26 = (unsigned int)LOWORD(Src[0]) + 12;
              v64 = *(_QWORD *)L"Class\\";
              WORD6(v66) = aClass[6];
              v27 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      260LL,
                      (unsigned int)LOWORD(Src[0]) + 14,
                      1936876615);
              v28 = (WCHAR *)v27;
              if ( v27 )
              {
                *(_QWORD *)v27 = v64;
                *(_DWORD *)(v27 + 8) = *(_DWORD *)L"s\\";
                memmove((void *)(v27 + 12), Src[1], LOWORD(Src[0]));
                v142.Flags = 1;
                v142.QueryRoutine = 0LL;
                *(WCHAR *)((char *)v28 + v26) = 0;
                v142.EntryContext = 0LL;
                v142.DefaultType = 0;
                v142.DefaultData = 0LL;
                v142.Name = L"Settings";
                v142.DefaultLength = 0;
                v143 = __DisplayDriverQueryRoutine;
                v145 = L"InstalledDisplayDrivers";
                v152 = L"MirrorDriver";
                v153 = &v51;
                v155 = &v53;
                v159 = L"AccDriver";
                v160 = &v52;
                v162 = &v53;
                v166 = L"TSCompatible";
                v167 = &v54;
                v169 = &v53;
                v146 = 0LL;
                v147 = 0;
                v148 = 0LL;
                v149 = 0;
                v150 = 0LL;
                v151 = 288;
                v154 = 67108868;
                v156 = 4;
                v157 = 0LL;
                v158 = 288;
                v161 = 67108868;
                v163 = 4;
                v164 = 0LL;
                v165 = 288;
                v168 = 67108868;
                v170 = 4;
                v171 = 0LL;
                v172 = 0;
                v144 = 16;
                v173 = 0LL;
                v175 = 0LL;
                v174 = 0LL;
                RtlQueryRegistryValues(2u, v28, &v142, Context, 0LL);
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v28);
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
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v18);
          if ( v8 )
          {
            v29 = Context[26];
            if ( v29 )
            {
              if ( *((_DWORD *)Context + 67) )
              {
                v30 = 0x7FFFLL;
                v66 = 0LL;
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
                  v32 = -2 - 2 * v30;
                }
                else
                {
                  v29 = (_WORD *)*((_QWORD *)&v66 + 1);
                  v32 = v66;
                }
                if ( v30 )
                {
                  v33 = v32;
                  v34 = 0;
                  v35 = 0;
                  v36 = (v32 >> 1) - 1;
                  if ( v36 )
                  {
                    v37 = v29;
                    while ( 1 )
                    {
                      ++v35;
                      if ( *v37 == 59 )
                        break;
                      ++v37;
                      if ( v35 >= v36 )
                        goto LABEL_77;
                    }
                    v34 = v35;
                  }
LABEL_77:
                  v38 = v33 + 2 * (1 - v34);
                  if ( v38
                    && (v39 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                        260LL,
                                        v38,
                                        1936876615),
                        (Environment = (unsigned __int64)v39) != 0) )
                  {
                    memmove(v39, &v29[v34], v38);
                    v40 = Context[26];
                    if ( v40 )
                      NSInstrumentation::CLeakTrackingAllocator::Free(
                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                        v40);
                    Context[26] = (void *)Environment;
                    Environment = 0LL;
                    *((_DWORD *)Context + 67) = v38;
                  }
                  else
                  {
                    RegistryValues = -1073741670;
                    *((_DWORD *)Context + 67) = Environment;
                  }
                }
              }
            }
          }
        }
        v5 = (WCHAR *)v59;
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
    v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            260LL,
            0xAuLL,
            1936876615);
    Context[25] = (void *)v11;
    if ( !v11 )
      goto LABEL_115;
    *(_QWORD *)v11 = *(_QWORD *)L"cdd";
    *(_WORD *)(v11 + 8) = 0;
    *((_DWORD *)Context + 66) = 10;
    RegistryValues = Environment;
  }
  else
  {
    if ( v52 == (_DWORD)Environment && v51 == (_DWORD)Environment )
    {
      v68 = __DisplayDriverQueryRoutine;
      v67.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)Environment;
      v67.Name = L"Settings";
      v25 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v68;
      v70 = L"InstalledDisplayDrivers";
      v67.Flags = 1;
      v79 = 0LL;
      v67.EntryContext = (PVOID)Environment;
      if ( v4 )
        v25 = &v67;
      v67.DefaultType = Environment;
      v67.DefaultData = (PVOID)Environment;
      v67.DefaultLength = Environment;
      v69 = 16;
      v71 = (void **)Environment;
      v72 = Environment;
      v73 = Environment;
      v74 = Environment;
      v75 = Environment;
      v76 = Environment;
      v77 = 0LL;
      v78 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v25, Context, (PVOID)Environment);
    }
    if ( RegistryValues < 0 )
      goto LABEL_115;
  }
  v12 = v51;
  v13 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v52 != (_DWORD)Environment )
    v12 = 1;
  v51 = v12;
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  GreDeviceIoControlImpl(v13, 0x23203Bu, 0LL, 0, &InputBuffer, 0x30u, &v58, 1u, 1);
  v14 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || Source2[0] == (void *)Environment )
  {
    v15 = Environment;
    LODWORD(InputBuffer) = v55;
    LOBYTE(v15) = v51 != (_DWORD)Environment;
    Source2[0] = Context[25];
    v16 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(Source2[1]) = *((_DWORD *)Context + 66);
    Length[0] = (SIZE_T)Context[26];
    LODWORD(Length[1]) = *((_DWORD *)Context + 67);
    DWORD1(InputBuffer) = (v52 != 0 ? 2 : 0) | v15;
    *((_QWORD *)&InputBuffer + 1) = __PAIR64__(v54, Environment);
    GreDeviceIoControlImpl(v16, 0x23203Fu, &InputBuffer, 0x30u, (PVOID)Environment, Environment, &v58, 1u, 1);
    goto LABEL_11;
  }
  if ( v55 != (_DWORD)InputBuffer
    || (v41 = Environment, LOBYTE(v41) = v51 != (_DWORD)Environment, v41 != (BYTE4(InputBuffer) & 1))
    || (v52 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v54 != HIDWORD(InputBuffer) )
  {
    v55 = InputBuffer;
    v51 = BYTE4(InputBuffer) & 1;
    v52 = (DWORD1(InputBuffer) >> 1) & 1;
    v54 = HIDWORD(InputBuffer);
  }
  v42 = Context[25];
  if ( v42 && LODWORD(Source2[1]) == *((_DWORD *)Context + 66) )
  {
    if ( RtlCompareMemory(v42, Source2[0], LODWORD(Source2[1])) == *((_DWORD *)Context + 66) )
      goto LABEL_102;
    v14 = (unsigned int)Source2[1];
  }
  if ( Context[25] )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      Context[25]);
    v14 = (unsigned int)Source2[1];
  }
  if ( v14 )
  {
    v43 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    260LL,
                    v14,
                    1936876615);
    v14 = (unsigned int)Source2[1];
  }
  else
  {
    v43 = (void *)Environment;
  }
  Context[25] = v43;
  if ( v43 )
    memmove(v43, Source2[0], v14);
  else
    RegistryValues = -1073741670;
LABEL_102:
  v44 = Context[26];
  if ( v44 && Length[0] )
  {
    v45 = Length[1];
    if ( LODWORD(Length[1]) == *((_DWORD *)Context + 67) )
    {
      if ( RtlCompareMemory(v44, (const void *)Length[0], LODWORD(Length[1])) == *((_DWORD *)Context + 67) )
        goto LABEL_11;
      v45 = Length[1];
    }
    v46 = Context[26];
    if ( v46 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v46);
      v45 = Length[1];
    }
    if ( v45 )
    {
      v47 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      260LL,
                      v45,
                      1936876615);
      v45 = Length[1];
    }
    else
    {
      v47 = (void *)Environment;
    }
    Context[26] = v47;
    if ( v47 )
      memmove(v47, (const void *)Length[0], v45);
    else
      RegistryValues = -1073741670;
  }
LABEL_11:
  if ( RegistryValues >= 0 )
  {
    if ( v55 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v51 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v52 != (_DWORD)Environment )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v54 != (_DWORD)Environment )
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
  DrvLogDisplayDriverEvent(1LL);
  v48 = Context[25];
  if ( v48 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v48);
    Context[25] = (void *)Environment;
  }
  v49 = Context[26];
  if ( v49 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v49);
    Context[26] = (void *)Environment;
  }
}
