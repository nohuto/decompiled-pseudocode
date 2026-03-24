/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001A85C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001DEE0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001EBB0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00C31D0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001D00C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00B7374 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00C5384 (_wcsicmp.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(PVOID Context, WCHAR *Path, int a3)
{
  unsigned int v3; // r12d
  int v4; // esi
  WCHAR *v5; // r14
  NTSTATUS RegistryValues; // edi
  char v8; // r13
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // r15
  unsigned int v14; // ecx
  _WORD *v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // eax
  struct _RTL_QUERY_REGISTRY_TABLE *v19; // r8
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rcx
  unsigned int v22; // r9d
  struct _DEVICE_OBJECT *v23; // rcx
  const wchar_t *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  const WCHAR *v28; // r15
  _WORD *v29; // rsi
  __int64 v30; // rcx
  _WORD *v31; // rax
  unsigned __int16 v32; // dx
  int v33; // r8d
  unsigned int v34; // ecx
  unsigned int v35; // eax
  _WORD *v36; // rdx
  unsigned int v37; // r14d
  void *v38; // rax
  void *v39; // r15
  const void *v40; // rcx
  __int64 v41; // rcx
  void *v42; // rax
  const void *v43; // rcx
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v54; // [rsp+78h] [rbp-88h]
  ULONG ResultLength; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+98h] [rbp-68h] BYREF
  void *Source2[2]; // [rsp+A8h] [rbp-58h]
  SIZE_T Length[2]; // [rsp+B8h] [rbp-48h]
  ULONG v61; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h]
  struct _RTL_QUERY_REGISTRY_TABLE v63; // [rsp+F0h] [rbp-10h] BYREF
  int (*v64)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+128h] [rbp+28h] BYREF
  int v65; // [rsp+130h] [rbp+30h]
  const wchar_t *v66; // [rsp+138h] [rbp+38h]
  void **v67; // [rsp+140h] [rbp+40h]
  int v68; // [rsp+148h] [rbp+48h]
  __int64 v69; // [rsp+150h] [rbp+50h]
  int v70; // [rsp+158h] [rbp+58h]
  __int64 v71; // [rsp+160h] [rbp+60h]
  int v72; // [rsp+168h] [rbp+68h]
  __int128 v73; // [rsp+170h] [rbp+70h]
  __int128 v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+190h] [rbp+90h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  int v78; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v79; // [rsp+1E8h] [rbp+E8h]
  __int64 v80; // [rsp+1F0h] [rbp+F0h]
  int v81; // [rsp+1F8h] [rbp+F8h]
  __int64 v82; // [rsp+200h] [rbp+100h]
  int v83; // [rsp+208h] [rbp+108h]
  __int64 v84; // [rsp+210h] [rbp+110h] BYREF
  int v85; // [rsp+218h] [rbp+118h]
  const wchar_t *v86; // [rsp+220h] [rbp+120h]
  int *v87; // [rsp+228h] [rbp+128h]
  int v88; // [rsp+230h] [rbp+130h]
  int *v89; // [rsp+238h] [rbp+138h]
  int v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  int v92; // [rsp+250h] [rbp+150h]
  const wchar_t *v93; // [rsp+258h] [rbp+158h]
  int *v94; // [rsp+260h] [rbp+160h]
  int v95; // [rsp+268h] [rbp+168h]
  int *v96; // [rsp+270h] [rbp+170h]
  int v97; // [rsp+278h] [rbp+178h]
  __int64 v98; // [rsp+280h] [rbp+180h]
  int v99; // [rsp+288h] [rbp+188h]
  const wchar_t *v100; // [rsp+290h] [rbp+190h]
  int *v101; // [rsp+298h] [rbp+198h]
  int v102; // [rsp+2A0h] [rbp+1A0h]
  int *v103; // [rsp+2A8h] [rbp+1A8h]
  int v104; // [rsp+2B0h] [rbp+1B0h]
  int (*v105)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2B8h] [rbp+1B8h]
  int v106; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v107; // [rsp+2C8h] [rbp+1C8h]
  __int64 v108; // [rsp+2D0h] [rbp+1D0h]
  int v109; // [rsp+2D8h] [rbp+1D8h]
  __int64 v110; // [rsp+2E0h] [rbp+1E0h]
  int v111; // [rsp+2E8h] [rbp+1E8h]
  int (*v112)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v113; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v114; // [rsp+300h] [rbp+200h]
  __int64 v115; // [rsp+308h] [rbp+208h]
  int v116; // [rsp+310h] [rbp+210h]
  __int64 v117; // [rsp+318h] [rbp+218h]
  int v118; // [rsp+320h] [rbp+220h]
  int (*v119)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+328h] [rbp+228h]
  int v120; // [rsp+330h] [rbp+230h]
  const wchar_t *v121; // [rsp+338h] [rbp+238h]
  __int64 v122; // [rsp+340h] [rbp+240h]
  int v123; // [rsp+348h] [rbp+248h]
  __int64 v124; // [rsp+350h] [rbp+250h]
  int v125; // [rsp+358h] [rbp+258h]
  __int64 v126; // [rsp+360h] [rbp+260h]
  int v127; // [rsp+368h] [rbp+268h]
  const wchar_t *v128; // [rsp+370h] [rbp+270h]
  int *v129; // [rsp+378h] [rbp+278h]
  int v130; // [rsp+380h] [rbp+280h]
  int *v131; // [rsp+388h] [rbp+288h]
  int v132; // [rsp+390h] [rbp+290h]
  __int64 v133; // [rsp+398h] [rbp+298h]
  int v134; // [rsp+3A0h] [rbp+2A0h]
  __int128 v135; // [rsp+3A8h] [rbp+2A8h]
  __int128 v136; // [rsp+3B8h] [rbp+2B8h]
  __int64 v137; // [rsp+3C8h] [rbp+2C8h]
  struct _RTL_QUERY_REGISTRY_TABLE v138; // [rsp+3D0h] [rbp+2D0h] BYREF
  int (*v139)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+408h] [rbp+308h]
  int v140; // [rsp+410h] [rbp+310h]
  const wchar_t *v141; // [rsp+418h] [rbp+318h]
  __int64 v142; // [rsp+420h] [rbp+320h]
  int v143; // [rsp+428h] [rbp+328h]
  __int64 v144; // [rsp+430h] [rbp+330h]
  int v145; // [rsp+438h] [rbp+338h]
  __int64 v146; // [rsp+440h] [rbp+340h]
  int v147; // [rsp+448h] [rbp+348h]
  const wchar_t *v148; // [rsp+450h] [rbp+350h]
  int *v149; // [rsp+458h] [rbp+358h]
  int v150; // [rsp+460h] [rbp+360h]
  int *v151; // [rsp+468h] [rbp+368h]
  int v152; // [rsp+470h] [rbp+370h]
  __int64 v153; // [rsp+478h] [rbp+378h]
  int v154; // [rsp+480h] [rbp+380h]
  const wchar_t *v155; // [rsp+488h] [rbp+388h]
  int *v156; // [rsp+490h] [rbp+390h]
  int v157; // [rsp+498h] [rbp+398h]
  int *v158; // [rsp+4A0h] [rbp+3A0h]
  int v159; // [rsp+4A8h] [rbp+3A8h]
  __int64 v160; // [rsp+4B0h] [rbp+3B0h]
  int v161; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v162; // [rsp+4C0h] [rbp+3C0h]
  int *v163; // [rsp+4C8h] [rbp+3C8h]
  int v164; // [rsp+4D0h] [rbp+3D0h]
  int *v165; // [rsp+4D8h] [rbp+3D8h]
  int v166; // [rsp+4E0h] [rbp+3E0h]
  __int64 v167; // [rsp+4E8h] [rbp+3E8h]
  int v168; // [rsp+4F0h] [rbp+3F0h]
  __int128 v169; // [rsp+4F8h] [rbp+3F8h]
  __int128 v170; // [rsp+508h] [rbp+408h]
  __int64 v171; // [rsp+518h] [rbp+418h]

  v3 = 0;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v86 = L"MultiDisplayDriver";
  v5 = Path;
  v48 = a3;
  v87 = &v52;
  KeyHandle = Path;
  v50 = 0;
  v52 = 0;
  v89 = &v50;
  v93 = L"MirrorDriver";
  RegistryValues = 0;
  v47 = 0;
  v94 = &v47;
  v8 = 0;
  v49 = 0;
  v96 = &v50;
  v100 = L"AccDriver";
  v101 = &v49;
  v103 = &v50;
  v107 = L"Device Description";
  v114 = L"HardwareInformation.AdapterString";
  v51 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v77 = 0LL;
  v78 = 1;
  v79 = L"Settings";
  v80 = 0LL;
  v81 = 0;
  v82 = 0LL;
  v83 = 0;
  v84 = 0LL;
  v85 = 288;
  v88 = 67108868;
  v90 = 4;
  v91 = 0LL;
  v92 = 288;
  v95 = 67108868;
  v97 = 4;
  v98 = 0LL;
  v99 = 288;
  v102 = 67108868;
  v104 = 4;
  v105 = __EnumDisplayQueryRoutine;
  v106 = 16;
  v108 = 0LL;
  v109 = 0;
  v110 = 0LL;
  v111 = 0;
  v112 = __EnumDisplayQueryRoutine;
  v113 = 16;
  v115 = 0LL;
  v116 = 0;
  v117 = 0LL;
  v118 = 0;
  v119 = __EnumDisplayQueryRoutine;
  v120 = 16;
  v121 = L"HardwareInformation.ChipType";
  v128 = L"TSCompatible";
  v129 = &v51;
  v131 = &v50;
  v130 = 67108868;
  v9 = a3 == 0;
  v137 = 0LL;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v84;
  v127 = 288;
  v132 = 4;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v122 = 0LL;
  v123 = 0;
  v124 = 0LL;
  v125 = 0;
  v126 = 0LL;
  v133 = 0LL;
  v134 = 0;
  v135 = 0LL;
  v136 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 67) )
  {
    ResultLength = 0;
    v11 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues == -1073741789 )
    {
      v12 = (_DWORD *)PALLOCMEM2(ResultLength);
      if ( v12 )
      {
        v61 = 0;
        RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, v12, ResultLength, &v61);
        if ( RegistryValues >= 0 )
        {
          LODWORD(v13) = 0;
          v14 = 0;
          if ( *v12 >> 1 )
          {
            v15 = v12 + 1;
            do
            {
              v9 = *v15 == 92;
              v16 = v14;
              ++v15;
              if ( !v9 )
                v16 = v13;
              ++v14;
              v13 = v16;
            }
            while ( v14 < *v12 >> 1 );
            if ( v16 )
            {
              v17 = 2 * v16;
              v56 = *(_DWORD *)L"eo";
              v54 = aVideo[6];
              v62 = *(_QWORD *)L"\\Video";
              v11 = (char *)PALLOCMEM2(2 * v16 + 14);
              if ( v11 )
              {
                memmove(v11, v12 + 1, v17);
                v18 = v56;
                v8 = 0;
                *(_QWORD *)&v11[2 * v13] = v62;
                *(_DWORD *)&v11[2 * v13 + 8] = v18;
                *(_WORD *)&v11[2 * v13 + 12] = v54;
              }
              else
              {
                RegistryValues = -1073741670;
                v8 = 0;
              }
            }
          }
        }
        Win32FreePool(v12);
      }
      else
      {
        RegistryValues = -1073741670;
      }
      if ( v11 )
      {
        v63.Flags = 16;
        v63.EntryContext = 0LL;
        v63.QueryRoutine = __EnumDisplayQueryRoutine;
        v63.DefaultType = 0;
        v63.Name = L"DeviceDesc";
        v63.DefaultData = 0LL;
        v66 = L"Driver";
        v63.DefaultLength = 0;
        v67 = Src;
        v64 = 0LL;
        v75 = 0LL;
        *(_OWORD *)Src = 0LL;
        v65 = 304;
        v68 = 16777217;
        v69 = 0LL;
        v70 = 0;
        v71 = 0LL;
        v72 = 0;
        v73 = 0LL;
        v74 = 0LL;
        RegistryValues = RtlQueryRegistryValues(0, (PCWSTR)v11, &v63, Context, 0LL);
        if ( RegistryValues >= 0 )
        {
          v8 = 1;
          if ( LOWORD(Src[0]) )
          {
            v26 = (unsigned int)LOWORD(Src[0]) + 12;
            v62 = *(_QWORD *)L"Class\\";
            v27 = PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 14);
            v28 = (const WCHAR *)v27;
            if ( v27 )
            {
              *(_QWORD *)v27 = v62;
              *(_DWORD *)(v27 + 8) = *(_DWORD *)L"s\\";
              memmove((void *)(v27 + 12), Src[1], LOWORD(Src[0]));
              v3 = 0;
              v138.Flags = 1;
              v138.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v28 + v26) = 0;
              v150 = 67108868;
              v147 = 288;
              v152 = 4;
              v138.Name = L"Settings";
              v154 = 288;
              v139 = __DisplayDriverQueryRoutine;
              v141 = L"InstalledDisplayDrivers";
              v148 = L"MirrorDriver";
              v149 = &v47;
              v151 = &v50;
              v155 = L"AccDriver";
              v156 = &v49;
              v158 = &v50;
              v162 = L"TSCompatible";
              v163 = &v51;
              v165 = &v50;
              v157 = 67108868;
              v159 = 4;
              v161 = 288;
              v164 = 67108868;
              v166 = 4;
              v138.EntryContext = 0LL;
              v138.DefaultType = 0;
              v138.DefaultData = 0LL;
              v138.DefaultLength = 0;
              v140 = 16;
              v142 = 0LL;
              v143 = 0;
              v144 = 0LL;
              v145 = 0;
              v146 = 0LL;
              v153 = 0LL;
              v160 = 0LL;
              v167 = 0LL;
              v168 = 0;
              v169 = 0LL;
              v171 = 0LL;
              v170 = 0LL;
              RtlQueryRegistryValues(2u, v28, &v138, Context, 0LL);
              Win32FreePool(v28);
            }
            else
            {
              RegistryValues = -1073741670;
              v3 = 0;
            }
          }
        }
        if ( Src[1] )
        {
          ExFreePoolWithTag(Src[1], 0);
          Src[1] = 0LL;
        }
        Win32FreePool(v11);
        if ( v8 )
        {
          v29 = (_WORD *)*((_QWORD *)Context + 26);
          if ( v29 )
          {
            if ( *((_DWORD *)Context + 67) )
            {
              *(_OWORD *)Src = 0LL;
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
                v32 = 2 * (v30 != 0 ? 0x7FFF - v30 : 0);
              }
              else
              {
                v29 = Src[1];
                v32 = (unsigned __int16)Src[0];
              }
              if ( v30 )
              {
                v33 = v32;
                v34 = 0;
                v35 = (v32 >> 1) - 1;
                if ( v32 >> 1 != 1 )
                {
                  v36 = v29;
                  while ( 1 )
                  {
                    ++v34;
                    if ( *v36 == 59 )
                      break;
                    ++v36;
                    if ( v34 >= v35 )
                      goto LABEL_71;
                  }
                  v3 = v34;
                }
LABEL_71:
                v37 = v33 + 2 * (1 - v3);
                v38 = (void *)PALLOCMEM2(v37);
                v39 = v38;
                if ( v38 )
                {
                  memmove(v38, &v29[v3], v37);
                  Win32FreePool(*((_QWORD *)Context + 26));
                  *((_QWORD *)Context + 26) = v39;
                  *((_DWORD *)Context + 67) = v37;
                }
                else
                {
                  RegistryValues = -1073741670;
                  *((_DWORD *)Context + 67) = 0;
                }
              }
            }
          }
        }
      }
      v5 = (WCHAR *)KeyHandle;
    }
    v4 = v48;
  }
  if ( (*((_DWORD *)Context + 40) & 0x800000) != 0 )
  {
    v25 = PALLOCMEM2(0xAuLL);
    *((_QWORD *)Context + 25) = v25;
    if ( !v25 )
      goto LABEL_96;
    *(_QWORD *)v25 = *(_QWORD *)L"cdd";
    *(_WORD *)(v25 + 8) = 0;
    *((_DWORD *)Context + 66) = 10;
    RegistryValues = 0;
  }
  else
  {
    if ( !v49 && !v47 )
    {
      v19 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v64;
      v66 = L"InstalledDisplayDrivers";
      v64 = __DisplayDriverQueryRoutine;
      v75 = 0LL;
      v63.QueryRoutine = 0LL;
      if ( v4 )
        v19 = &v63;
      v63.Flags = 1;
      v63.Name = L"Settings";
      v63.EntryContext = 0LL;
      v63.DefaultType = 0;
      v63.DefaultData = 0LL;
      v63.DefaultLength = 0;
      v65 = 16;
      v67 = 0LL;
      v68 = 0;
      v69 = 0LL;
      v70 = 0;
      v71 = 0LL;
      v72 = 0;
      v73 = 0LL;
      v74 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v19, Context, 0LL);
    }
    if ( RegistryValues < 0 )
      goto LABEL_96;
  }
  v20 = v47;
  v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 17);
  if ( v49 )
    v20 = 1;
  v47 = v20;
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  GreDeviceIoControlImpl(v21, 0x23203Bu, 0LL, 0, &InputBuffer, 0x30u, &v56, 1u, 1);
  v22 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || !Source2[0] )
  {
    LODWORD(InputBuffer) = v52;
    HIDWORD(InputBuffer) = v51;
    Source2[0] = *((void **)Context + 25);
    v23 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 17);
    LODWORD(Source2[1]) = *((_DWORD *)Context + 66);
    Length[0] = *((_QWORD *)Context + 26);
    LODWORD(Length[1]) = *((_DWORD *)Context + 67);
    *(_QWORD *)((char *)&InputBuffer + 4) = (v49 != 0 ? 2 : 0) | (unsigned __int64)(v47 != 0);
    GreDeviceIoControlImpl(v23, 0x23203Fu, &InputBuffer, 0x30u, 0LL, 0, &v56, 1u, 1);
    goto LABEL_35;
  }
  if ( v52 != (_DWORD)InputBuffer
    || (v47 != 0) != (BYTE4(InputBuffer) & 1)
    || (v49 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v51 != HIDWORD(InputBuffer) )
  {
    v52 = InputBuffer;
    v47 = BYTE4(InputBuffer) & 1;
    v49 = (DWORD1(InputBuffer) >> 1) & 1;
    v51 = HIDWORD(InputBuffer);
  }
  v40 = (const void *)*((_QWORD *)Context + 25);
  if ( !v40 || LODWORD(Source2[1]) != *((_DWORD *)Context + 66) )
    goto LABEL_84;
  if ( RtlCompareMemory(v40, Source2[0], LODWORD(Source2[1])) != *((_DWORD *)Context + 66) )
  {
    v22 = (unsigned int)Source2[1];
LABEL_84:
    v41 = *((_QWORD *)Context + 25);
    if ( v41 )
    {
      Win32FreePool(v41);
      v22 = (unsigned int)Source2[1];
    }
    v42 = (void *)PALLOCMEM2(v22);
    *((_QWORD *)Context + 25) = v42;
    if ( v42 )
      memmove(v42, Source2[0], LODWORD(Source2[1]));
    else
      RegistryValues = -1073741670;
  }
  v43 = (const void *)*((_QWORD *)Context + 26);
  if ( v43
    && Length[0]
    && (LODWORD(Length[1]) != *((_DWORD *)Context + 67)
     || RtlCompareMemory(v43, (const void *)Length[0], LODWORD(Length[1])) != *((_DWORD *)Context + 67)) )
  {
    Win32FreePool(*((_QWORD *)Context + 26));
    v44 = (void *)PALLOCMEM2(LODWORD(Length[1]));
    *((_QWORD *)Context + 26) = v44;
    if ( v44 )
      memmove(v44, (const void *)Length[0], LODWORD(Length[1]));
    else
      RegistryValues = -1073741670;
  }
LABEL_35:
  if ( RegistryValues >= 0 )
  {
    if ( v52 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v47 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v49 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v51 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v24 = (const wchar_t *)*((_QWORD *)Context + 26);
    if ( v24 )
    {
      if ( !wcsicmp(v24, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_96:
  DrvLogDisplayDriverEvent(1LL);
  v45 = *((_QWORD *)Context + 25);
  if ( v45 )
  {
    Win32FreePool(v45);
    *((_QWORD *)Context + 25) = 0LL;
  }
  v46 = *((_QWORD *)Context + 26);
  if ( v46 )
  {
    Win32FreePool(v46);
    *((_QWORD *)Context + 26) = 0LL;
  }
}
