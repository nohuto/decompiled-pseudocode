__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  __int64 v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  NTSTATUS v6; // eax
  __int64 v7; // r14
  NTSTATUS v8; // eax
  struct _ERESOURCE *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  unsigned __int8 v14; // r9
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26; // eax
  int DxgkSharedObjectTypes; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  DXGSESSIONMGR *v36; // rax
  DXGSESSIONMGR *v37; // rax
  int v38; // ecx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  ULONG *v41; // rax
  __int64 v42; // rax
  _BYTE *v43; // rbx
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  __int64 v46; // rdi
  const wchar_t *v48; // r9
  __int64 v49; // rbx
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v51; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v52; // [rsp+60h] [rbp-A8h] BYREF
  int v53; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v56; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v57; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v60; // [rsp+80h] [rbp-88h] BYREF
  int v61; // [rsp+84h] [rbp-84h] BYREF
  int v62; // [rsp+88h] [rbp-80h] BYREF
  int v63; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v64; // [rsp+90h] [rbp-78h] BYREF
  int v65; // [rsp+94h] [rbp-74h] BYREF
  int v66; // [rsp+98h] [rbp-70h] BYREF
  int v67; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v68; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v69; // [rsp+A4h] [rbp-64h] BYREF
  int v70; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v71; // [rsp+ACh] [rbp-5Ch] BYREF
  int v72; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+B4h] [rbp-54h] BYREF
  int v74; // [rsp+B8h] [rbp-50h] BYREF
  int v75; // [rsp+BCh] [rbp-4Ch] BYREF
  int v76; // [rsp+C0h] [rbp-48h] BYREF
  int v77; // [rsp+C4h] [rbp-44h] BYREF
  int v78; // [rsp+C8h] [rbp-40h] BYREF
  int v79; // [rsp+CCh] [rbp-3Ch] BYREF
  int v80; // [rsp+D0h] [rbp-38h] BYREF
  int v81; // [rsp+D4h] [rbp-34h] BYREF
  int v82; // [rsp+D8h] [rbp-30h] BYREF
  int v83; // [rsp+DCh] [rbp-2Ch] BYREF
  int v84; // [rsp+E0h] [rbp-28h] BYREF
  int v85; // [rsp+E4h] [rbp-24h] BYREF
  struct _UNICODE_STRING v86; // [rsp+E8h] [rbp-20h] BYREF
  struct _UNICODE_STRING v87; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v88; // [rsp+108h] [rbp+0h] BYREF
  __int64 v89; // [rsp+118h] [rbp+10h] BYREF
  int v90; // [rsp+120h] [rbp+18h]
  const wchar_t *v91; // [rsp+128h] [rbp+20h]
  unsigned int *v92; // [rsp+130h] [rbp+28h]
  int v93; // [rsp+138h] [rbp+30h]
  __int64 *v94; // [rsp+140h] [rbp+38h]
  int v95; // [rsp+148h] [rbp+40h]
  __int64 v96; // [rsp+150h] [rbp+48h]
  int v97; // [rsp+158h] [rbp+50h]
  const wchar_t *v98; // [rsp+160h] [rbp+58h]
  int *v99; // [rsp+168h] [rbp+60h]
  int v100; // [rsp+170h] [rbp+68h]
  int *v101; // [rsp+178h] [rbp+70h]
  int v102; // [rsp+180h] [rbp+78h]
  __int64 v103; // [rsp+188h] [rbp+80h]
  int v104; // [rsp+190h] [rbp+88h]
  const wchar_t *v105; // [rsp+198h] [rbp+90h]
  unsigned int *v106; // [rsp+1A0h] [rbp+98h]
  int v107; // [rsp+1A8h] [rbp+A0h]
  int *v108; // [rsp+1B0h] [rbp+A8h]
  int v109; // [rsp+1B8h] [rbp+B0h]
  __int64 v110; // [rsp+1C0h] [rbp+B8h]
  int v111; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v112; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v113; // [rsp+1D8h] [rbp+D0h]
  int v114; // [rsp+1E0h] [rbp+D8h]
  int *v115; // [rsp+1E8h] [rbp+E0h]
  int v116; // [rsp+1F0h] [rbp+E8h]
  __int64 v117; // [rsp+1F8h] [rbp+F0h]
  int v118; // [rsp+200h] [rbp+F8h]
  const wchar_t *v119; // [rsp+208h] [rbp+100h]
  int *v120; // [rsp+210h] [rbp+108h]
  int v121; // [rsp+218h] [rbp+110h]
  int *v122; // [rsp+220h] [rbp+118h]
  int v123; // [rsp+228h] [rbp+120h]
  __int64 v124; // [rsp+230h] [rbp+128h]
  int v125; // [rsp+238h] [rbp+130h]
  const wchar_t *v126; // [rsp+240h] [rbp+138h]
  int *v127; // [rsp+248h] [rbp+140h]
  int v128; // [rsp+250h] [rbp+148h]
  int *v129; // [rsp+258h] [rbp+150h]
  int v130; // [rsp+260h] [rbp+158h]
  __int64 v131; // [rsp+268h] [rbp+160h]
  int v132; // [rsp+270h] [rbp+168h]
  const wchar_t *v133; // [rsp+278h] [rbp+170h]
  int *v134; // [rsp+280h] [rbp+178h]
  int v135; // [rsp+288h] [rbp+180h]
  int *v136; // [rsp+290h] [rbp+188h]
  int v137; // [rsp+298h] [rbp+190h]
  __int64 v138; // [rsp+2A0h] [rbp+198h]
  int v139; // [rsp+2A8h] [rbp+1A0h]
  const wchar_t *v140; // [rsp+2B0h] [rbp+1A8h]
  int *v141; // [rsp+2B8h] [rbp+1B0h]
  int v142; // [rsp+2C0h] [rbp+1B8h]
  int *v143; // [rsp+2C8h] [rbp+1C0h]
  int v144; // [rsp+2D0h] [rbp+1C8h]
  __int64 v145; // [rsp+2D8h] [rbp+1D0h]
  int v146; // [rsp+2E0h] [rbp+1D8h]
  const wchar_t *v147; // [rsp+2E8h] [rbp+1E0h]
  int *v148; // [rsp+2F0h] [rbp+1E8h]
  int v149; // [rsp+2F8h] [rbp+1F0h]
  int *v150; // [rsp+300h] [rbp+1F8h]
  int v151; // [rsp+308h] [rbp+200h]
  __int64 v152; // [rsp+310h] [rbp+208h]
  int v153; // [rsp+318h] [rbp+210h]
  const wchar_t *v154; // [rsp+320h] [rbp+218h]
  int *v155; // [rsp+328h] [rbp+220h]
  int v156; // [rsp+330h] [rbp+228h]
  int *v157; // [rsp+338h] [rbp+230h]
  int v158; // [rsp+340h] [rbp+238h]
  __int64 v159; // [rsp+348h] [rbp+240h]
  int v160; // [rsp+350h] [rbp+248h]
  const wchar_t *v161; // [rsp+358h] [rbp+250h]
  unsigned int *v162; // [rsp+360h] [rbp+258h]
  int v163; // [rsp+368h] [rbp+260h]
  unsigned int *v164; // [rsp+370h] [rbp+268h]
  int v165; // [rsp+378h] [rbp+270h]
  __int64 v166; // [rsp+380h] [rbp+278h]
  int v167; // [rsp+388h] [rbp+280h]
  const wchar_t *v168; // [rsp+390h] [rbp+288h]
  int *v169; // [rsp+398h] [rbp+290h]
  int v170; // [rsp+3A0h] [rbp+298h]
  int *v171; // [rsp+3A8h] [rbp+2A0h]
  int v172; // [rsp+3B0h] [rbp+2A8h]
  __int64 v173; // [rsp+3B8h] [rbp+2B0h]
  int v174; // [rsp+3C0h] [rbp+2B8h]
  const wchar_t *v175; // [rsp+3C8h] [rbp+2C0h]
  unsigned int *v176; // [rsp+3D0h] [rbp+2C8h]
  int v177; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v178; // [rsp+3E0h] [rbp+2D8h]
  int v179; // [rsp+3E8h] [rbp+2E0h]
  __int64 v180; // [rsp+3F0h] [rbp+2E8h]
  int v181; // [rsp+3F8h] [rbp+2F0h]
  const wchar_t *v182; // [rsp+400h] [rbp+2F8h]
  int *v183; // [rsp+408h] [rbp+300h]
  int v184; // [rsp+410h] [rbp+308h]
  int *v185; // [rsp+418h] [rbp+310h]
  int v186; // [rsp+420h] [rbp+318h]
  __int64 v187; // [rsp+428h] [rbp+320h]
  int v188; // [rsp+430h] [rbp+328h]
  const wchar_t *v189; // [rsp+438h] [rbp+330h]
  unsigned int *v190; // [rsp+440h] [rbp+338h]
  int v191; // [rsp+448h] [rbp+340h]
  int *v192; // [rsp+450h] [rbp+348h]
  int v193; // [rsp+458h] [rbp+350h]
  __int64 v194; // [rsp+460h] [rbp+358h]
  int v195; // [rsp+468h] [rbp+360h]
  const wchar_t *v196; // [rsp+470h] [rbp+368h]
  int *v197; // [rsp+478h] [rbp+370h]
  int v198; // [rsp+480h] [rbp+378h]
  int *v199; // [rsp+488h] [rbp+380h]
  int v200; // [rsp+490h] [rbp+388h]
  __int64 v201; // [rsp+498h] [rbp+390h]
  int v202; // [rsp+4A0h] [rbp+398h]
  const wchar_t *v203; // [rsp+4A8h] [rbp+3A0h]
  int *v204; // [rsp+4B0h] [rbp+3A8h]
  int v205; // [rsp+4B8h] [rbp+3B0h]
  int *v206; // [rsp+4C0h] [rbp+3B8h]
  int v207; // [rsp+4C8h] [rbp+3C0h]
  __int64 v208; // [rsp+4D0h] [rbp+3C8h]
  int v209; // [rsp+4D8h] [rbp+3D0h]
  const wchar_t *v210; // [rsp+4E0h] [rbp+3D8h]
  unsigned int *v211; // [rsp+4E8h] [rbp+3E0h]
  int v212; // [rsp+4F0h] [rbp+3E8h]
  __int64 v213; // [rsp+4F8h] [rbp+3F0h]
  int v214; // [rsp+500h] [rbp+3F8h]
  __int64 v215; // [rsp+508h] [rbp+400h]
  int v216; // [rsp+510h] [rbp+408h]
  const wchar_t *v217; // [rsp+518h] [rbp+410h]
  unsigned int *v218; // [rsp+520h] [rbp+418h]
  int v219; // [rsp+528h] [rbp+420h]
  __int64 v220; // [rsp+530h] [rbp+428h]
  int v221; // [rsp+538h] [rbp+430h]
  __int64 v222; // [rsp+540h] [rbp+438h]
  int v223; // [rsp+548h] [rbp+440h]
  const wchar_t *v224; // [rsp+550h] [rbp+448h]
  unsigned int *v225; // [rsp+558h] [rbp+450h]
  int v226; // [rsp+560h] [rbp+458h]
  __int64 v227; // [rsp+568h] [rbp+460h]
  int v228; // [rsp+570h] [rbp+468h]
  __int64 v229; // [rsp+578h] [rbp+470h]
  int v230; // [rsp+580h] [rbp+478h]
  const wchar_t *v231; // [rsp+588h] [rbp+480h]
  unsigned int *v232; // [rsp+590h] [rbp+488h]
  int v233; // [rsp+598h] [rbp+490h]
  __int64 v234; // [rsp+5A0h] [rbp+498h]
  int v235; // [rsp+5A8h] [rbp+4A0h]
  __int64 v236; // [rsp+5B0h] [rbp+4A8h]
  int v237; // [rsp+5B8h] [rbp+4B0h]
  const wchar_t *v238; // [rsp+5C0h] [rbp+4B8h]
  unsigned int *v239; // [rsp+5C8h] [rbp+4C0h]
  int v240; // [rsp+5D0h] [rbp+4C8h]
  __int64 v241; // [rsp+5D8h] [rbp+4D0h]
  int v242; // [rsp+5E0h] [rbp+4D8h]
  __int64 v243; // [rsp+5E8h] [rbp+4E0h]
  int v244; // [rsp+5F0h] [rbp+4E8h]
  const wchar_t *v245; // [rsp+5F8h] [rbp+4F0h]
  unsigned int *v246; // [rsp+600h] [rbp+4F8h]
  int v247; // [rsp+608h] [rbp+500h]
  __int64 v248; // [rsp+610h] [rbp+508h]
  int v249; // [rsp+618h] [rbp+510h]
  __int64 v250; // [rsp+620h] [rbp+518h]
  int v251; // [rsp+628h] [rbp+520h]
  const wchar_t *v252; // [rsp+630h] [rbp+528h]
  int *v253; // [rsp+638h] [rbp+530h]
  int v254; // [rsp+640h] [rbp+538h]
  __int64 v255; // [rsp+648h] [rbp+540h]
  int v256; // [rsp+650h] [rbp+548h]
  __int64 v257; // [rsp+658h] [rbp+550h]
  int v258; // [rsp+660h] [rbp+558h]
  __int128 v259; // [rsp+668h] [rbp+560h]
  __int128 v260; // [rsp+678h] [rbp+570h]
  __int64 v261; // [rsp+688h] [rbp+580h]
  _OWORD v262[2]; // [rsp+698h] [rbp+590h] BYREF
  wchar_t v263; // [rsp+6B8h] [rbp+5B0h]
  _BYTE v264[96]; // [rsp+6C8h] [rbp+5C0h] BYREF
  __int128 v265; // [rsp+728h] [rbp+620h]
  __int128 v266; // [rsp+738h] [rbp+630h]
  __int128 v267; // [rsp+748h] [rbp+640h]
  int v268; // [rsp+758h] [rbp+650h]
  wchar_t v269; // [rsp+75Ch] [rbp+654h]

  v1 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
  memset(v264, 0, 0x58uLL);
  v2 = *(_OWORD *)&v264[16];
  *(_OWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 64LL) = *(_OWORD *)v264;
  v3 = *(_OWORD *)&v264[32];
  *(_OWORD *)(v1 + 80) = v2;
  v4 = *(_OWORD *)&v264[48];
  *(_OWORD *)(v1 + 96) = v3;
  v5 = *(_OWORD *)&v264[64];
  *(_OWORD *)(v1 + 112) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)&v264[80];
  *(_OWORD *)(v1 + 128) = v5;
  *(_QWORD *)(v1 + 144) = v4;
  g_WindowsSubsystem = ZwAllocateVirtualMemory;
  qword_1C013BB00 = ZwAllocateVirtualMemoryEx;
  qword_1C013BB08 = (__int64)ZwFreeVirtualMemory;
  qword_1C013BB10 = (__int64)MmMapViewOfSection;
  qword_1C013BB18 = (__int64)MmUnmapViewOfSection;
  qword_1C013BB20 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_1C013BB28 = (__int64)MmUnmapLockedPages;
  g_WslSubsystem = ZwAllocateVirtualMemory;
  qword_1C013BAC8 = ZwAllocateVirtualMemoryEx;
  qword_1C013BAD0 = (__int64)ZwFreeVirtualMemory;
  qword_1C013BAD8 = (__int64)MmMapViewOfSection;
  qword_1C013BAE0 = (__int64)MmUnmapViewOfSection;
  qword_1C013BAE8 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_1C013BAF0 = (__int64)MmUnmapLockedPages;
  v6 = ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v1 + 305008),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         0x10uLL,
         0x4B677844u,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v6);
    v48 = L"DXGGlobal 0x%I64x: Unable to initialize the lookaside list for lock order tracker, returning 0x%I64x";
LABEL_65:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v48, v1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  *(_BYTE *)(v1 + 305000) = 1;
  v8 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 160), 0LL, 0LL, (POOL_TYPE)512, 0, 0xA0uLL, 0x576B7844u, 0);
  v7 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v8);
    v48 = L"DXGGlobal 0x%I64x: Unable to initialize m_VmBusPacketWorkItemList, returning 0x%I64x";
    goto LABEL_65;
  }
  *(_BYTE *)(v1 + 1347) = 1;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 336)) )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed the initial shared resource handle table expansion, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v9 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL);
  *(_QWORD *)(v1 + 600) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741801LL);
    return 3221225495LL;
  }
  v10 = ExInitializeResourceLite(v9);
  LODWORD(v11) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v10);
    return (unsigned int)v11;
  }
  v12 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1136), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v11 = v12;
  if ( v12 < 0
    || (*(_BYTE *)(v1 + 1345) = 1,
        v13 = ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)(v1 + 1232),
                0LL,
                0LL,
                PagedPool,
                0,
                0x5E0uLL,
                0x4B677844u,
                0),
        v11 = v13,
        v13 < 0) )
  {
    WdLogSingleEntry3(3LL, v1, v11, 0LL);
    return (unsigned int)v11;
  }
  v14 = g_bSkuSupportMultipleUsers;
  *(_BYTE *)(v1 + 1346) = 1;
  v76 = 32;
  v88 = 0x4000000LL;
  v58 = 0;
  v74 = 0;
  v59 = 0;
  v75 = 1;
  v57 = 0;
  v56 = 0;
  v61 = 0;
  v77 = 0;
  v78 = 0;
  v62 = 0;
  v63 = 0;
  v79 = 0;
  v80 = 0;
  v64 = 0;
  v81 = 0;
  v65 = 0;
  v82 = 0;
  v60 = 0;
  v68 = 0;
  if ( v14 )
    v15 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  else
    v15 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v71 = v15;
  if ( v14 )
    v16 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v16 = 2;
  v70 = v16;
  if ( v14 )
    v17 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v17 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v73 = v17;
  v52 = v17;
  v91 = L"TerminationListSizeLimit";
  v92 = &v58;
  v94 = &v88;
  v98 = L"ValidateWDDMCaps";
  v99 = &v59;
  v101 = &v74;
  v105 = L"WDDM2LockManagement";
  v106 = &v57;
  v108 = &v75;
  v112 = L"MaximumAdapterCount";
  v113 = &v56;
  v115 = &v76;
  v119 = L"InvestigationDebugParameter";
  v120 = &v61;
  v122 = &v77;
  v126 = L"EnableIgnoreWin32ProcessStatus";
  v127 = &v62;
  v129 = &v78;
  v133 = L"EnableHMDTestMode";
  v83 = 300;
  v51 = v15;
  v54 = 300;
  v134 = &v63;
  v72 = 1;
  v53 = v16;
  v55 = 1;
  v84 = 5000;
  v66 = 0;
  v85 = 15000;
  v67 = 0;
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
  v110 = 0LL;
  v111 = 288;
  v114 = 67108868;
  v116 = 4;
  v117 = 0LL;
  v118 = 288;
  v121 = 67108868;
  v123 = 4;
  v124 = 0LL;
  v125 = 288;
  v128 = 67108868;
  v130 = 4;
  v131 = 0LL;
  v132 = 288;
  v135 = 67108868;
  v136 = &v79;
  v140 = L"PreserveFirmwareMode";
  v141 = &v64;
  v143 = &v80;
  v147 = L"PreventFullscreenWireFormatChange";
  v148 = &v65;
  v150 = &v81;
  v154 = L"EnableFuzzing";
  v155 = &v60;
  v157 = &v82;
  v161 = L"InternalDiagnosticsBufferSize";
  v162 = &v51;
  v164 = &v71;
  v168 = L"InternalDiagnosticsBufferMultiplier";
  v169 = &v53;
  v171 = &v70;
  v175 = L"ExternalDiagnosticsBufferSize";
  v176 = &v52;
  v178 = &v73;
  v182 = L"ExternalDiagnosticsBufferMultiplier";
  v183 = &v55;
  v185 = &v72;
  v189 = L"DiagnosticsBufferExpansionTime";
  v190 = &v54;
  v137 = 4;
  v138 = 0LL;
  v139 = 288;
  v142 = 67108868;
  v144 = 4;
  v145 = 0LL;
  v146 = 288;
  v149 = 67108868;
  v151 = 4;
  v152 = 0LL;
  v153 = 288;
  v156 = 67108868;
  v158 = 4;
  v159 = 0LL;
  v160 = 288;
  v163 = 67108868;
  v165 = 4;
  v166 = 0LL;
  v167 = 288;
  v170 = 67108868;
  v172 = 4;
  v173 = 0LL;
  v174 = 288;
  v177 = 67108868;
  v179 = 4;
  v180 = 0LL;
  v181 = 288;
  v184 = 67108868;
  v186 = 4;
  v187 = 0LL;
  v188 = 288;
  v191 = 67108868;
  v193 = 4;
  v192 = &v83;
  v196 = L"RapidHpdTimeoutInMilliseconds";
  v197 = &v66;
  v199 = &v84;
  v203 = L"RapidHpdMaxChainInMilliseconds";
  v204 = &v67;
  v206 = &v85;
  v210 = L"ForceUsb4MonitorSupport";
  v211 = &g_bDbgForceUsb4MonitorSupport;
  v217 = L"Usb4MonitorTargetId";
  v218 = &g_DbgUsb4MonitorTargetId;
  v224 = L"Usb4MonitorDpcdUSB4_Driver_ID";
  v225 = &g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
  v231 = L"Usb4MonitorDpcdDP_IN_Adapter_Number";
  v232 = &g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
  v238 = L"Usb4MonitorPowerOnDelayInSeconds";
  v239 = &g_DbgUsb4MonitorPowerOnDelayInSeconds;
  v245 = L"TreatUsb4MonitorAsNormal";
  v246 = &g_bDbgTreatUsb4MonitorAsNormal;
  v252 = L"AllowAdvancedEtwLogging";
  v194 = 0LL;
  v195 = 288;
  v198 = 67108868;
  v200 = 4;
  v201 = 0LL;
  v202 = 288;
  v205 = 67108868;
  v207 = 4;
  v208 = 0LL;
  v209 = 288;
  v212 = 67108868;
  v213 = 0LL;
  v214 = 0;
  v215 = 0LL;
  v216 = 288;
  v219 = 67108868;
  v220 = 0LL;
  v221 = 0;
  v222 = 0LL;
  v223 = 288;
  v226 = 67108868;
  v227 = 0LL;
  v228 = 0;
  v229 = 0LL;
  v230 = 288;
  v233 = 67108868;
  v234 = 0LL;
  v235 = 0;
  v236 = 0LL;
  v237 = 288;
  v240 = 67108868;
  v241 = 0LL;
  v242 = 0;
  v243 = 0LL;
  v244 = 288;
  v247 = 67108868;
  v248 = 0LL;
  v249 = 0;
  v250 = 0LL;
  v251 = 288;
  v254 = 67108868;
  v255 = 0LL;
  v253 = &v68;
  v256 = 0;
  v257 = 0LL;
  v258 = 0;
  v259 = 0LL;
  v260 = 0LL;
  v261 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v89, 0LL, 0LL) < 0 )
  {
    *(_QWORD *)(v1 + 880) = 0x4000000LL;
    *(_DWORD *)(v1 + 1364) = 32;
    *(_BYTE *)(v1 + 888) = 0;
    *(_DWORD *)(v1 + 1360) = 1;
    *(_DWORD *)(v1 + 1680) = 0;
    *(_DWORD *)(v1 + 1696) = 0;
  }
  else
  {
    *(_QWORD *)(v1 + 880) = v58;
    *(_BYTE *)(v1 + 888) = v59 != 0;
    *(_BYTE *)(v1 + 304482) = v60 != 0;
    v18 = 1;
    if ( v57 < 2 )
      v18 = v57;
    *(_DWORD *)(v1 + 1360) = v18;
    v19 = v56;
    if ( v56 < 4 )
    {
      v19 = 4;
      v56 = 4;
    }
    else
    {
      if ( v56 > 0x400 )
        v19 = 1024;
      v56 = v19;
    }
    *(_DWORD *)(v1 + 1364) = v19;
    *(_DWORD *)(v1 + 1680) = v61;
    *(_DWORD *)(v1 + 1696) = v62;
    *(_BYTE *)(v1 + 304481) = v63 == 1;
    *(_BYTE *)(v1 + 304536) = v64 != 0;
    *(_BYTE *)(v1 + 304537) = v65 != 0;
    if ( v66 )
      *(_DWORD *)(v1 + 305216) = v66;
    if ( v67 )
      *(_DWORD *)(v1 + 305220) = v67;
    if ( !g_OSTestSigningEnabled && !g_IsInternalRelease )
    {
      g_bDbgForceUsb4MonitorSupport = 0;
      g_bDbgTreatUsb4MonitorAsNormal = 0;
      g_DbgUsb4MonitorPowerOnDelayInSeconds = 0;
    }
    *(_BYTE *)(v1 + 305288) = v68 != 0;
  }
  *(_DWORD *)(v1 + 872) = 0;
  v20 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v69 = 0;
  *(_OWORD *)v264 = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v87.Length = 9830548LL;
  v21 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v86.Length = 2228256LL;
  *(_OWORD *)&v264[16] = v20;
  v22 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v264[32] = v21;
  v23 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v264[48] = v22;
  v24 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  *(_OWORD *)&v264[64] = v23;
  v25 = *(_OWORD *)L"erminal Server\\WinStations";
  *(_OWORD *)&v264[80] = v24;
  v265 = v25;
  v266 = *(_OWORD *)L"Server\\WinStations";
  v26 = *(_DWORD *)L"ns";
  v267 = *(_OWORD *)L"inStations";
  v268 = v26;
  v269 = aRegistryMachin_13[74];
  v87.Buffer = (wchar_t *)v264;
  v263 = aDwmframeinterv[16];
  v86.Buffer = (wchar_t *)v262;
  v262[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v262[1] = *(_OWORD *)L"INTERVAL";
  if ( ReadRegistryDwordKeyValue(&v87, &v86, &v69) >= 0 && v69 )
    *(_DWORD *)(v1 + 304776) = v69;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  LODWORD(v11) = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    WdLogSingleEntry1(3LL, DxgkSharedObjectTypes);
    return (unsigned int)v11;
  }
  v28 = v53;
  if ( !v53 || ((v53 - 1) & v53) != 0 )
  {
    v28 = v70;
    v53 = v70;
  }
  if ( v51 < 0x1000 || v51 * v28 > 0x1000000 )
  {
    v51 = v71;
    v53 = v70;
  }
  v29 = v55;
  if ( !v55 || ((v55 - 1) & v55) != 0 )
  {
    v29 = v72;
    v55 = v72;
  }
  if ( v52 < 0x1000 || v52 * v29 > 0x1000000 )
  {
    v52 = v73;
    v55 = v72;
  }
  v30 = v54;
  if ( v54 > 0xE10 )
    v30 = 3600;
  v54 = v30;
  v31 = (-(__int64)(g_IsInternalReleaseOrDbg != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v32 = operator new[](0x70uLL, 0x4B677844u, v31);
  if ( v32 )
    v33 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v32, v51, v53, v31, v54);
  else
    v33 = 0LL;
  *(_QWORD *)(v1 + 928) = v33;
  v34 = operator new[](0x70uLL, 0x4B677844u, v31);
  if ( v34 )
    v35 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v34, v52, v55, v31, v54);
  else
    v35 = 0LL;
  *(_QWORD *)(v1 + 936) = v35;
  if ( !*(_QWORD *)(v1 + 928) )
  {
    WdLogSingleEntry1(6LL, v51);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for internal diagnostics buffers (SmallInternalDiagnosticsSize = 0x%I64x).",
      v51,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( !v35 )
  {
    WdLogSingleEntry1(6LL, v52);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for external diagnostics buffers (SmallExternalDiagnosticsSize = 0x%I64x).",
      v52,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v36 = (DXGSESSIONMGR *)operator new[](0x1C0uLL, 0x4B677844u, 64LL);
  if ( v36 )
    v37 = DXGSESSIONMGR::DXGSESSIONMGR(v36);
  else
    v37 = 0LL;
  *(_QWORD *)(v1 + 944) = v37;
  if ( !v37 )
  {
    WdLogSingleEntry1(6LL, 2023LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl session manager.",
      2023LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v38 = *(_DWORD *)(v1 + 1364);
  v39 = (unsigned int)(v38 + 31) >> 5;
  v40 = 4LL * ((unsigned int)v39 + ((unsigned int)(1055 - v38) >> 5));
  if ( !is_mul_ok((unsigned int)v39 + ((unsigned int)(1055 - v38) >> 5), 4uLL) )
    v40 = -1LL;
  v41 = (ULONG *)operator new[](v40, 0x4B677844u, 256LL);
  *(_QWORD *)(v1 + 864) = v41;
  if ( !v41 )
  {
    WdLogSingleEntry1(6LL, 2032LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl adapter ordinal bits.",
      2032LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 832), v41, *(_DWORD *)(v1 + 1364));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 848), (PULONG)(*(_QWORD *)(v1 + 864) + 4 * v39), 1024 - *(_DWORD *)(v1 + 1364));
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)(v1 + 1368), 0LL, 0LL, 0, 0LL) < 0 )
  {
    WdLogSingleEntry1(6LL, 2046LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for system process.",
      2046LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( PsInitialSystemProcess != *(PEPROCESS *)(*(_QWORD *)(v1 + 1368) + 56LL) )
  {
    WdLogSingleEntry1(1LL, 2049LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsInitialSystemProcess == m_pSystemDxgProcess->GetEProcess()",
      2049LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = operator new[](0x280uLL, 0x4B677844u, 256LL);
  v43 = (_BYTE *)v42;
  if ( v42 )
  {
    *(_QWORD *)(v42 + 16) = 0LL;
    *(_QWORD *)(v42 + 24) = 0LL;
    *(_QWORD *)(v42 + 32) = 0LL;
    *(_DWORD *)(v42 + 40) = 0;
    *(_DWORD *)(v42 + 44) = 69;
    *(_DWORD *)(v42 + 48) = 1;
    *(_DWORD *)(v42 + 632) = 0;
    memset((void *)(v42 + 56), 0, 0x240uLL);
    *v43 = 0;
  }
  else
  {
    v43 = 0LL;
  }
  *(_QWORD *)(v1 + 1496) = v43;
  if ( !v43 )
  {
    WdLogSingleEntry1(6LL, 2054LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to Qdc cache.", 2054LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  KeInitializeSpinLock(&qword_1C013BA68);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1684));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1936));
  KeInitializeDpc((PRKDPC)(v1 + 2000), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, (PVOID)v1);
  LOBYTE(OutputBuffer) = 0;
  v44 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  if ( v44 < 0 )
  {
    v49 = v44;
    WdLogSingleEntry1(2LL, v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the platformInformation. Status : 0x%I64x",
      v49,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else if ( (_BYTE)OutputBuffer )
  {
    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  *(_QWORD *)(v1 + 2088) = v1;
  *(_QWORD *)(v1 + 2080) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *(_QWORD *)(v1 + 2064) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *(_DWORD *)(v1 + 304468) &= ~1u;
  *(_DWORD *)(v1 + 304456) = 10;
  *(_DWORD *)(v1 + 304460) = 50;
  *(_DWORD *)(v1 + 304464) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 1784));
  DisplayDiagnostics::Initialize((char *)(v1 + 304608));
  v45 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          (PVOID)v1,
          0LL);
  v46 = v45;
  if ( v45 < 0 )
  {
    WdLogSingleEntry1(2LL, v45);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback for GUID_HDR_DISPLAY_QUALITY_BIAS failed with status:0x%I64x",
      v46,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v46;
}
