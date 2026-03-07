__int64 __fastcall HUBPDO_ReportDeviceFailure(__int64 *a1)
{
  __int64 v1; // r15
  int v3; // esi
  int v4; // edi
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rbx
  const char *v8; // rcx
  const char *v9; // r10
  const char *v10; // r9
  __int16 v11; // di
  __int16 v12; // r13
  __int16 v13; // r12
  __int64 v14; // rcx
  int VidPidRevForPort; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  unsigned __int16 v21; // r9
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int16 v37; // ax
  const CHAR *v38; // r9
  __int64 v39; // rax
  int v40; // eax
  const CHAR *v41; // r9
  __int64 v42; // rax
  int v43; // eax
  const CHAR *v44; // r9
  int v45; // edx
  __int64 *v46; // rax
  void *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int16 v58; // ax
  const CHAR *v59; // r9
  __int64 v60; // rax
  int v61; // eax
  const CHAR *v62; // r9
  __int64 v63; // rax
  int v64; // eax
  int v65; // edx
  __int64 v66; // rax
  int v68; // [rsp+28h] [rbp-160h]
  __int64 v69; // [rsp+30h] [rbp-158h]
  _WORD v70[2]; // [rsp+108h] [rbp-80h] BYREF
  int v71; // [rsp+10Ch] [rbp-7Ch] BYREF
  int v72; // [rsp+110h] [rbp-78h] BYREF
  int v73; // [rsp+114h] [rbp-74h] BYREF
  int v74; // [rsp+118h] [rbp-70h] BYREF
  int v75; // [rsp+11Ch] [rbp-6Ch] BYREF
  int v76; // [rsp+120h] [rbp-68h] BYREF
  int v77; // [rsp+124h] [rbp-64h] BYREF
  int v78; // [rsp+128h] [rbp-60h] BYREF
  int v79; // [rsp+12Ch] [rbp-5Ch] BYREF
  int v80; // [rsp+130h] [rbp-58h] BYREF
  __int64 v81; // [rsp+138h] [rbp-50h] BYREF
  __int64 v82; // [rsp+140h] [rbp-48h] BYREF
  char v83[32]; // [rsp+148h] [rbp-40h] BYREF
  __int64 *v84; // [rsp+168h] [rbp-20h]
  __int64 v85; // [rsp+170h] [rbp-18h]
  int *v86; // [rsp+178h] [rbp-10h]
  __int64 v87; // [rsp+180h] [rbp-8h]
  int *v88; // [rsp+188h] [rbp+0h]
  __int64 v89; // [rsp+190h] [rbp+8h]
  int *v90; // [rsp+198h] [rbp+10h]
  __int64 v91; // [rsp+1A0h] [rbp+18h]
  char *v92; // [rsp+1A8h] [rbp+20h]
  int v93; // [rsp+1B0h] [rbp+28h]
  int v94; // [rsp+1B4h] [rbp+2Ch]
  char *v95; // [rsp+1B8h] [rbp+30h]
  int v96; // [rsp+1C0h] [rbp+38h]
  int v97; // [rsp+1C4h] [rbp+3Ch]
  char *v98; // [rsp+1C8h] [rbp+40h]
  int v99; // [rsp+1D0h] [rbp+48h]
  int v100; // [rsp+1D4h] [rbp+4Ch]
  int *v101; // [rsp+1D8h] [rbp+50h]
  __int64 v102; // [rsp+1E0h] [rbp+58h]
  int *v103; // [rsp+1E8h] [rbp+60h]
  __int64 v104; // [rsp+1F0h] [rbp+68h]
  _WORD *v105; // [rsp+1F8h] [rbp+70h]
  __int64 v106; // [rsp+200h] [rbp+78h]
  int *v107; // [rsp+208h] [rbp+80h]
  __int64 v108; // [rsp+210h] [rbp+88h]
  int *v109; // [rsp+218h] [rbp+90h]
  __int64 v110; // [rsp+220h] [rbp+98h]
  int *v111; // [rsp+228h] [rbp+A0h]
  __int64 v112; // [rsp+230h] [rbp+A8h]
  int *v113; // [rsp+238h] [rbp+B0h]
  __int64 v114; // [rsp+240h] [rbp+B8h]
  int *v115; // [rsp+248h] [rbp+C0h]
  __int64 v116; // [rsp+250h] [rbp+C8h]
  _WORD *v117; // [rsp+258h] [rbp+D0h]
  __int64 v118; // [rsp+260h] [rbp+D8h]
  const CHAR *v119; // [rsp+268h] [rbp+E0h]
  int v120; // [rsp+270h] [rbp+E8h]
  int v121; // [rsp+274h] [rbp+ECh]
  const CHAR *v122; // [rsp+278h] [rbp+F0h]
  int v123; // [rsp+280h] [rbp+F8h]
  int v124; // [rsp+284h] [rbp+FCh]
  const CHAR *v125; // [rsp+288h] [rbp+100h]
  int v126; // [rsp+290h] [rbp+108h]
  int v127; // [rsp+294h] [rbp+10Ch]
  __int64 *v128; // [rsp+298h] [rbp+110h]
  __int64 v129; // [rsp+2A0h] [rbp+118h]
  char pszDest[4]; // [rsp+2A8h] [rbp+120h] BYREF
  char v131; // [rsp+2ACh] [rbp+124h]
  char v132[4]; // [rsp+2B0h] [rbp+128h] BYREF
  char v133; // [rsp+2B4h] [rbp+12Ch]
  char v134[4]; // [rsp+2B8h] [rbp+130h] BYREF
  char v135; // [rsp+2BCh] [rbp+134h]
  _WORD v136[8]; // [rsp+2C0h] [rbp+138h] BYREF

  v1 = *a1;
  LOBYTE(v70[0]) = 0;
  v3 = 0x7FFFFFFF;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 168);
    if ( v4 == 1 )
    {
      v5 = *(_DWORD *)(v1 + 192);
      v6 = *(_DWORD *)(v1 + 188);
      v73 = *(unsigned __int16 *)(v1 + 184);
      v72 = *(_DWORD *)(v1 + 180);
      v71 = *(_DWORD *)(v1 + 176);
      v74 = *(_DWORD *)(v1 + 196);
    }
    else
    {
      v73 = 0;
      LOBYTE(v5) = 0;
      v72 = 0x7FFFFFFF;
      LOBYTE(v6) = 0;
      v71 = 0x7FFFFFFF;
      v74 = 0;
    }
    v7 = a1[1];
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( v4 == 2 )
    {
      v9 = (const char *)(v1 + 186);
      v8 = (const char *)(v1 + 176);
      v10 = (const char *)(v1 + 181);
    }
    McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
      (__int64)v8,
      *(unsigned __int8 *)(v7 + 202),
      (const GUID *)((char *)a1 + 1516),
      a1[3],
      *((_DWORD *)a1 + 608),
      *((_WORD *)a1 + 998),
      *((_WORD *)a1 + 999),
      *((_WORD *)a1 + 1000),
      *((_DWORD *)a1 + 43),
      *((_DWORD *)a1 + 390),
      *((_DWORD *)a1 + 391),
      *(_WORD *)(v7 + 200),
      *(_BYTE *)(v7 + 202),
      *(_DWORD *)(v7 + 208),
      *(_WORD *)(v7 + 192),
      *(_WORD *)(v7 + 194),
      *(_DWORD *)(v7 + 12),
      *(_WORD *)(v1 + 48),
      v4,
      v6,
      v5,
      v74,
      v71,
      v72,
      v73,
      v8,
      v10,
      v9,
      *(_WORD *)(v1 + 2464),
      *(_WORD *)(v1 + 2466),
      *(_WORD *)(v1 + 2468));
  }
  v11 = *((_WORD *)a1 + 998);
  v12 = *((_WORD *)a1 + 999);
  v13 = *((_WORD *)a1 + 1000);
  v14 = a1[2];
  LOWORD(v71) = v11;
  LOWORD(v72) = v12;
  LOWORD(v73) = v13;
  HUBPDO_GetPortPath(v14, v136);
  if ( (*(_DWORD *)(*a1 + 40) & 0x40000) != 0 && (a1[204] & 0x20) != 0 )
  {
    LOBYTE(v70[0]) = 1;
    if ( !v11 && !v12 && !v13 )
    {
      VidPidRevForPort = HUBREG_GetVidPidRevForPort(a1[1], &v71, &v72, &v73);
      if ( VidPidRevForPort >= 0 )
      {
        v11 = v71;
        v12 = v72;
        v13 = v73;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddddddDDD(*(_QWORD *)(a1[1] + 1432), v16, (unsigned __int16)v71, v136[5], v68);
          v11 = v71;
          v3 = 0x7FFFFFFF;
        }
        *((_WORD *)a1 + 998) = v11;
        *((_WORD *)a1 + 999) = v12;
        *((_WORD *)a1 + 1000) = v13;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v69) = VidPidRevForPort;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 1432),
            2u,
            2u,
            0x87u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            v69);
        }
        v11 = v71;
        v12 = v72;
        v13 = v73;
      }
    }
  }
  v17 = *a1;
  if ( *(_BYTE *)(*a1 + 240) )
  {
    v24 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v17 + 2464));
    if ( v24 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v24;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x90u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v25 = RtlStringCchPrintfA(v132, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2466));
    if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v25;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x91u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2468));
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 146;
      goto LABEL_54;
    }
  }
  else if ( *(_DWORD *)(v17 + 168) == 1 )
  {
    v22 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v17 + 176));
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v22;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x89u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v23 = RtlStringCchPrintfA(v132, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 180));
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v23;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Au,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 184));
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 139;
      goto LABEL_54;
    }
  }
  else
  {
    if ( *(_DWORD *)(v17 + 168) == 2 )
    {
      *(_DWORD *)pszDest = *(_DWORD *)(v17 + 176);
      v131 = *(_BYTE *)(v17 + 180);
      *(_DWORD *)v132 = *(_DWORD *)(v17 + 181);
      v133 = *(_BYTE *)(v17 + 185);
      *(_DWORD *)v134 = *(_DWORD *)(v17 + 186);
      v135 = *(_BYTE *)(v17 + 190);
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = *(_DWORD *)(v17 + 168);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Cu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v18 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0xFFFF);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v18;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Du,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v19 = RtlStringCchPrintfA(v132, 5uLL, "%04X", 0xFFFF);
    if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v19;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Eu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", 0xFFFF);
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 143;
LABEL_54:
      LODWORD(v69) = v20;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        v21,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v69);
    }
  }
LABEL_55:
  if ( LOBYTE(v70[0]) )
  {
    if ( (unsigned int)dword_1C006A1F8 > 5
      && (qword_1C006A208 & 0x400000000002LL) != 0
      && (qword_1C006A210 & 0x400000000002LL) == qword_1C006A210 )
    {
      LOWORD(v73) = v11;
      v84 = &v81;
      v81 = 1LL;
      v85 = 8LL;
      v86 = &v73;
      v26 = -1LL;
      v87 = 2LL;
      v88 = &v72;
      v90 = &v71;
      v27 = -1LL;
      LOWORD(v72) = v12;
      v89 = 2LL;
      LOWORD(v71) = v13;
      v91 = 2LL;
      do
        ++v27;
      while ( pszDest[v27] );
      v94 = 0;
      v93 = v27 + 1;
      v92 = pszDest;
      v28 = -1LL;
      do
        ++v28;
      while ( v132[v28] );
      v97 = 0;
      v96 = v28 + 1;
      v95 = v132;
      v29 = -1LL;
      do
        ++v29;
      while ( v134[v29] );
      v100 = 0;
      v99 = v29 + 1;
      v74 = *((_DWORD *)a1 + 608);
      v101 = &v74;
      v30 = a1[1];
      v98 = v134;
      v102 = 4LL;
      v31 = *(_DWORD *)(v30 + 208);
      v103 = &v75;
      v75 = v31;
      v32 = *(_DWORD *)(v1 + 168);
      v105 = v136;
      v104 = 4LL;
      v106 = 12LL;
      if ( v32 == 1 )
        v33 = *(_DWORD *)(v1 + 188);
      else
        v33 = 0;
      v76 = v33;
      v107 = &v76;
      v108 = 4LL;
      if ( v32 == 1 )
        v34 = *(_DWORD *)(v1 + 192);
      else
        v34 = 0;
      v77 = v34;
      v109 = &v77;
      v110 = 4LL;
      if ( v32 == 1 )
        v35 = *(_DWORD *)(v1 + 196);
      else
        v35 = 0;
      v78 = v35;
      v112 = 4LL;
      v111 = &v78;
      if ( v32 == 1 )
        v36 = *(_DWORD *)(v1 + 176);
      else
        v36 = 0x7FFFFFFF;
      v79 = v36;
      v113 = &v79;
      v114 = 4LL;
      if ( v32 == 1 )
        v3 = *(_DWORD *)(v1 + 180);
      v80 = v3;
      v115 = &v80;
      v116 = 4LL;
      if ( v32 == 1 )
        v37 = *(_WORD *)(v1 + 184);
      else
        v37 = 0;
      v70[0] = v37;
      v38 = 0LL;
      v118 = 2LL;
      if ( v32 == 2 )
        v38 = (const CHAR *)(v1 + 176);
      v117 = v70;
      if ( v38 )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v38[v39] );
        v40 = v39 + 1;
      }
      else
      {
        v38 = File;
        v40 = 1;
      }
      v119 = v38;
      v120 = v40;
      v41 = 0LL;
      v121 = 0;
      if ( v32 == 2 )
        v41 = (const CHAR *)(v1 + 181);
      if ( v41 )
      {
        v42 = -1LL;
        do
          ++v42;
        while ( v41[v42] );
        v43 = v42 + 1;
      }
      else
      {
        v41 = File;
        v43 = 1;
      }
      v122 = v41;
      v123 = v43;
      v44 = 0LL;
      v124 = 0;
      if ( v32 == 2 )
        v44 = (const CHAR *)(v1 + 186);
      if ( v44 )
      {
        do
          ++v26;
        while ( v44[v26] );
        v45 = v26 + 1;
      }
      else
      {
        v44 = File;
        v45 = 1;
      }
      v126 = v45;
      v46 = &v82;
      v47 = &unk_1C00657B4;
      v82 = 16779264LL;
LABEL_150:
      v128 = v46;
      v125 = v44;
      v127 = 0;
      v129 = 8LL;
      tlgWriteAgg(v32, (_DWORD)v47, (unsigned int)File, 22, (__int64)v83);
    }
  }
  else if ( (unsigned int)dword_1C006A1F8 > 5
         && (qword_1C006A208 & 0x200000000002LL) != 0
         && (qword_1C006A210 & 0x200000000002LL) == qword_1C006A210 )
  {
    LOWORD(v73) = v11;
    v84 = &v82;
    v82 = 1LL;
    v85 = 8LL;
    v86 = &v73;
    v48 = -1LL;
    v87 = 2LL;
    v88 = &v72;
    v90 = &v71;
    v49 = -1LL;
    LOWORD(v72) = v12;
    v89 = 2LL;
    LOWORD(v71) = v13;
    v91 = 2LL;
    do
      ++v49;
    while ( pszDest[v49] );
    v94 = 0;
    v93 = v49 + 1;
    v92 = pszDest;
    v50 = -1LL;
    do
      ++v50;
    while ( v132[v50] );
    v97 = 0;
    v96 = v50 + 1;
    v95 = v132;
    v51 = -1LL;
    do
      ++v51;
    while ( v134[v51] );
    v100 = 0;
    v99 = v51 + 1;
    v80 = *((_DWORD *)a1 + 608);
    v101 = &v80;
    v52 = a1[1];
    v98 = v134;
    v102 = 4LL;
    v53 = *(_DWORD *)(v52 + 208);
    v103 = &v79;
    v79 = v53;
    v32 = *(_DWORD *)(v1 + 168);
    v105 = v136;
    v104 = 4LL;
    v106 = 12LL;
    if ( v32 == 1 )
      v54 = *(_DWORD *)(v1 + 188);
    else
      v54 = 0;
    v78 = v54;
    v107 = &v78;
    v108 = 4LL;
    if ( v32 == 1 )
      v55 = *(_DWORD *)(v1 + 192);
    else
      v55 = 0;
    v77 = v55;
    v109 = &v77;
    v110 = 4LL;
    if ( v32 == 1 )
      v56 = *(_DWORD *)(v1 + 196);
    else
      v56 = 0;
    v76 = v56;
    v112 = 4LL;
    v111 = &v76;
    if ( v32 == 1 )
      v57 = *(_DWORD *)(v1 + 176);
    else
      v57 = 0x7FFFFFFF;
    v75 = v57;
    v113 = &v75;
    v114 = 4LL;
    if ( v32 == 1 )
      v3 = *(_DWORD *)(v1 + 180);
    v74 = v3;
    v115 = &v74;
    v116 = 4LL;
    if ( v32 == 1 )
      v58 = *(_WORD *)(v1 + 184);
    else
      v58 = 0;
    v70[0] = v58;
    v59 = 0LL;
    v118 = 2LL;
    if ( v32 == 2 )
      v59 = (const CHAR *)(v1 + 176);
    v117 = v70;
    if ( v59 )
    {
      v60 = -1LL;
      do
        ++v60;
      while ( v59[v60] );
      v61 = v60 + 1;
    }
    else
    {
      v59 = File;
      v61 = 1;
    }
    v119 = v59;
    v120 = v61;
    v62 = 0LL;
    v121 = 0;
    if ( v32 == 2 )
      v62 = (const CHAR *)(v1 + 181);
    if ( v62 )
    {
      v63 = -1LL;
      do
        ++v63;
      while ( v62[v63] );
      v64 = v63 + 1;
    }
    else
    {
      v62 = File;
      v64 = 1;
    }
    v122 = v62;
    v123 = v64;
    v44 = 0LL;
    v124 = 0;
    if ( v32 == 2 )
      v44 = (const CHAR *)(v1 + 186);
    if ( v44 )
    {
      do
        ++v48;
      while ( v44[v48] );
      v65 = v48 + 1;
    }
    else
    {
      v44 = File;
      v65 = 1;
    }
    v126 = v65;
    v46 = &v81;
    v47 = &unk_1C00655ED;
    v81 = 16779264LL;
    goto LABEL_150;
  }
  v66 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
           WdfDriverGlobals,
           v66,
           1LL);
}
