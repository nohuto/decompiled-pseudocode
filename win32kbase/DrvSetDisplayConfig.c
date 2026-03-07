__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        struct _DISPLAYCONFIG_CDS_REQUEST *a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        bool *a13,
        _BYTE *a14,
        __int64 a15,
        _DWORD *a16)
{
  struct _MDEV *v17; // r12
  int v19; // r13d
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rax
  char v23; // di
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rax
  int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  bool v51; // si
  __int64 v52; // rdi
  unsigned int v53; // r12d
  bool v54; // al
  unsigned int v55; // ebx
  const struct _RETRY_MODE *v56; // rdi
  __int64 v57; // rcx
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // ecx
  __int16 v61; // r13
  int v62; // ebx
  bool v63; // si
  __int64 v64; // rcx
  unsigned int v65; // ebx
  int v66; // ebx
  int v67; // eax
  struct D3DKMT_GETPATHSMODALITY *v68; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v69; // rdi
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  signed int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v79; // r12
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // ebx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 (__fastcall *v87)(__int64, struct D3DKMT_GETPATHSMODALITY *); // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  unsigned int v90; // edi
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // r9
  __int64 v94; // rcx
  bool v95; // zf
  unsigned int v96; // eax
  int v97; // r8d
  struct _MDEV **v98; // rdi
  struct _MDEV *v99; // r13
  int v100; // esi
  char v101; // di
  __int64 v102; // rax
  int v103; // eax
  signed int v104; // eax
  unsigned int v105; // ecx
  __int64 v106; // rcx
  char v107; // di
  struct _MDEV **v108; // rsi
  int v109; // edi
  int v110; // eax
  int v111; // eax
  char v112; // al
  int v113; // eax
  struct _MDEV **v114; // rsi
  struct _MDEV *v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct D3DKMT_GETPATHSMODALITY *v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rcx
  bool v123; // al
  char v124; // si
  char v125; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v126; // rax
  _DWORD *v127; // r14
  unsigned int v128; // edi
  __int64 v129; // rax
  int v131; // [rsp+20h] [rbp-E0h]
  int v132; // [rsp+28h] [rbp-D8h]
  bool v133; // [rsp+50h] [rbp-B0h]
  char v134; // [rsp+51h] [rbp-AFh]
  signed int v135; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v136; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v137; // [rsp+59h] [rbp-A7h]
  char v138; // [rsp+5Ah] [rbp-A6h]
  char v139; // [rsp+5Bh] [rbp-A5h]
  char v140; // [rsp+5Ch] [rbp-A4h]
  char v141; // [rsp+5Dh] [rbp-A3h] BYREF
  bool v142; // [rsp+5Eh] [rbp-A2h]
  bool v143[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v144; // [rsp+64h] [rbp-9Ch] BYREF
  char v145; // [rsp+68h] [rbp-98h]
  int v146; // [rsp+6Ch] [rbp-94h]
  unsigned int v147; // [rsp+70h] [rbp-90h]
  int v148; // [rsp+74h] [rbp-8Ch]
  unsigned int v149; // [rsp+78h] [rbp-88h]
  unsigned int v150; // [rsp+7Ch] [rbp-84h]
  unsigned int v151; // [rsp+80h] [rbp-80h]
  struct _MDEV **v152; // [rsp+88h] [rbp-78h]
  unsigned int v153; // [rsp+90h] [rbp-70h]
  unsigned int v154; // [rsp+94h] [rbp-6Ch]
  __int64 v155; // [rsp+98h] [rbp-68h]
  struct _MDEV *v156; // [rsp+A0h] [rbp-60h]
  int v157; // [rsp+A8h] [rbp-58h]
  int v158; // [rsp+ACh] [rbp-54h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v159; // [rsp+B0h] [rbp-50h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v160; // [rsp+B8h] [rbp-48h]
  int v161; // [rsp+C0h] [rbp-40h]
  _QWORD v162[6]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v163[2]; // [rsp+100h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v164; // [rsp+110h] [rbp+10h] BYREF
  char v165; // [rsp+118h] [rbp+18h]
  __int64 v166; // [rsp+120h] [rbp+20h]
  void *v167; // [rsp+128h] [rbp+28h] BYREF
  __int64 v168; // [rsp+130h] [rbp+30h]
  void *v169; // [rsp+138h] [rbp+38h]
  __int64 v170; // [rsp+140h] [rbp+40h]
  _DWORD *v171; // [rsp+148h] [rbp+48h]
  void *v172; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v173; // [rsp+158h] [rbp+58h]
  signed int *v174; // [rsp+160h] [rbp+60h]
  _BYTE *v175; // [rsp+168h] [rbp+68h]
  __int64 v176; // [rsp+170h] [rbp+70h]
  bool *v177; // [rsp+178h] [rbp+78h]
  _DWORD v178[4]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v179[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v180; // [rsp+198h] [rbp+98h]
  int v181; // [rsp+1A0h] [rbp+A0h]
  __int64 v182; // [rsp+1A4h] [rbp+A4h]
  int v183; // [rsp+1ACh] [rbp+ACh]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v17 = a9;
  v169 = a5;
  v159 = a8;
  v173 = a11;
  v174 = a12;
  v177 = a13;
  v170 = a15;
  v147 = a1;
  v171 = a16;
  v149 = a4;
  v160 = a2;
  v156 = a9;
  v152 = a10;
  v175 = a14;
  v150 = 0;
  v19 = 0;
  v139 = 0;
  v20 = -5;
  v155 = *(_QWORD *)(SGDGetSessionState(a14) + 24);
  v137 = 0;
  v136 = 0;
  v21 = *(_DWORD *)(v155 + 1232);
  v140 = 0;
  v133 = v21 != 0;
  v135 = 0;
  v161 = -1;
  v146 = -5;
  v144 = -5;
  v153 = 0;
  v145 = 0;
  v151 = v21 != 0 ? 3 : 0;
  WdLogSingleEntry1(4LL, a3);
  v176 = DrvDxgkLogCodePointPacket(120LL, 0LL, 0LL, 0LL);
  DisplayScenarioJournalBegin(a3, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v147, v147, v160);
  v172 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v172, 4LL);
  v22 = v155;
  *a10 = 0LL;
  if ( *(_DWORD *)(v22 + 1296) )
    WdLogSingleEntry0(1LL);
  if ( (a3 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v23 = -113;
  v142 = (a4 & 2) != 0 && (a3 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v162);
  v162[0] = &off_1C0277EC8;
  v166 = v170;
  *(_OWORD *)v163 = 0LL;
  v164 = 0LL;
  v165 = 0;
  v167 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() || !(unsigned int)DrvIsWddmDriverPresent(v24) || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
      WdLogSingleEntry0(1LL);
    v107 = a4;
    v108 = v152;
    v109 = v107 & 1;
    v110 = DrvChangeDisplayFallback(
             v169,
             BYTE1(a3) & 1,
             v109,
             a9,
             v152,
             (enum _DXGK_DIAG_SDC_STAGE *)&v135,
             &v136,
             &v144);
    v20 = v144;
    LODWORD(v28) = v110;
    if ( v110 < 0 )
    {
      v137 = v136;
      v27 = v155;
LABEL_240:
      if ( v142 )
      {
        if ( a6 )
          WdLogSingleEntry0(1LL);
        v113 = DrvChangeDisplayFallback(
                 v169,
                 BYTE1(a3) & 1,
                 1u,
                 v17,
                 v108,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v135,
                 &v136,
                 &v144);
        v37 = 0;
        v28 = v113;
        if ( v113 >= 0 )
        {
          v19 = 10;
          v135 = 31;
LABEL_245:
          v34 = v136;
          v20 = v144;
          goto LABEL_259;
        }
        WdLogSingleEntry0(1LL);
        if ( *(_BYTE *)(v27 + 1424) )
          goto LABEL_245;
        *(_BYTE *)(v27 + 1424) = 1;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v117, v116);
        v20 = v144;
        LOBYTE(v132) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, int))(DxgkWin32kInterface + 720))(
          400LL,
          22LL,
          v28,
          v144,
          v135,
          v132);
        v34 = v136;
LABEL_259:
        if ( (_DWORD)v28 == -1073741811 )
          goto LABEL_274;
        goto LABEL_260;
      }
LABEL_258:
      v34 = v137;
      v37 = 0;
      goto LABEL_259;
    }
    v111 = v135;
    if ( v109 )
      v111 = 30;
    v135 = v111;
    v137 = v136;
LABEL_233:
    if ( (int)v28 >= 0 )
    {
LABEL_246:
      v112 = v139;
    }
    else
    {
LABEL_234:
      v112 = v139;
      if ( v139 )
      {
        v135 = 29;
        LODWORD(v28) = 0;
        v19 = 9;
        v144 = 0;
        v20 = 0;
      }
      if ( (int)v28 < 0 )
      {
        v17 = v156;
        goto LABEL_238;
      }
    }
    v114 = v152;
    if ( v112 && !*v152 )
    {
      v115 = v156;
      if ( !v156 )
        WdLogSingleEntry0(1LL);
      *v114 = v115;
      if ( v20 == 2 )
        v20 = 0;
      v144 = v20;
    }
    goto LABEL_258;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v27 = v155;
    if ( (a3 & 0x10000) != 0 )
    {
      LODWORD(v28) = -1073741811;
      v135 = 37;
LABEL_239:
      v108 = v152;
      goto LABEL_240;
    }
    if ( *(_DWORD *)(v155 + 1232) )
      WdLogSingleEntry0(1LL);
    LODWORD(v28) = GetPathsModality(v25, v163, 15LL);
    if ( (int)v28 < 0 )
    {
      v135 = 2;
      goto LABEL_233;
    }
    v30 = *((_DWORD *)v163[0] + 8) & 0xF;
    if ( v30 == 1 || v30 == 8 )
    {
      LODWORD(v28) = -1073741637;
      v135 = 25;
      goto LABEL_239;
    }
    v31 = DxDdGetDxgkWin32kInterface(v29, 0LL);
    LOBYTE(v32) = 1;
    v138 = 1;
    LOBYTE(v33) = v30 == 4;
    v34 = 1;
    (*(void (__fastcall **)(__int64, __int64))(v31 + 528))(v32, v33);
    if ( v30 == 4 )
    {
      v37 = 0;
      v135 = 26;
      LODWORD(v28) = 0;
      goto LABEL_260;
    }
    a3 = 132;
    v23 = -124;
    v158 = 0;
    v148 = 0;
    goto LABEL_31;
  }
  if ( (a3 & 0x80000000) == 0 )
  {
    v42 = a4 & 0x20;
    if ( (a3 & 0xF) == 0xF )
    {
      if ( (a4 & 0x20) == 0 || (v43 = v159, !*((_DWORD *)v159 + 5)) )
      {
        v44 = DxDdGetDxgkWin32kInterface(v42, 0LL);
        v138 = (*(__int64 (**)(void))(v44 + 536))();
        v34 = v138;
        if ( v138 )
          a3 = a3 & 0xFFFFFFF0 | 4;
LABEL_48:
        v36 = a3 & 0x10000;
        v39 = a3 & 0x80;
        v158 = v36;
        v23 = a3;
        v148 = a3 & 0x10000;
        v157 = (unsigned __int8)v39;
        if ( (_DWORD)v36 )
        {
          v47 = DxDdGetDxgkWin32kInterface(v36, v35);
          v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v47 + 728))(
                  a7,
                  v39 != 0 ? 2031616 : 0x20000,
                  &v167);
          v35 = 0LL;
          LODWORD(v28) = v48;
          if ( v48 < 0 )
          {
            v135 = 42;
            goto LABEL_233;
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
      v43 = v159;
    }
    if ( (a3 & 0x200) != 0 || (a4 & 0x20) != 0 && *((_DWORD *)v43 + 5) || (a3 & 0x1F) != 0 && (a3 & 0x40) == 0 )
    {
      v46 = DxDdGetDxgkWin32kInterface(v42, 0LL);
      v34 = 0;
      v138 = 0;
      (*(void (__fastcall **)(_QWORD))(v46 + 528))(0LL);
    }
    else
    {
      v45 = DxDdGetDxgkWin32kInterface(v42, 0LL);
      v34 = (*(__int64 (**)(void))(v45 + 536))();
      v138 = v34;
    }
    goto LABEL_48;
  }
  if ( (a3 & 0x10000) != 0 )
  {
    LODWORD(v28) = -1073741811;
    v135 = 38;
LABEL_238:
    v27 = v155;
    goto LABEL_239;
  }
  v38 = DxDdGetDxgkWin32kInterface(v25, 0LL);
  v37 = 0;
  v138 = 0;
  v34 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v38 + 528))(0LL, 0LL) )
  {
    a3 = 2191;
    v158 = 0;
    v148 = 0;
LABEL_31:
    v39 = 128;
    v157 = 128;
LABEL_32:
    v40 = DxDdGetDxgkWin32kInterface(v36, v35);
    LODWORD(v28) = (*(__int64 (**)(void))(v40 + 272))();
    if ( (int)v28 < 0 )
    {
      v135 = 12;
      v19 = 6;
      goto LABEL_233;
    }
    v165 = 1;
    if ( v39 )
    {
      v28 = 1LL;
      if ( !v34 && (a3 & 0xF) != 0 && (v149 & 0x20) == 0 )
        v28 = 3LL;
      v49 = DxDdGetDxgkWin32kInterface(v41, 0LL);
      v50 = (*(__int64 (__fastcall **)(__int64))(v49 + 296))(v28);
      LODWORD(v28) = v50;
      if ( v50 < 0 )
      {
        WdLogSingleEntry1(4LL, v50);
        DrvDxgkLogCodePointPacket(4LL, (unsigned int)v28, 0LL, 0LL);
        LODWORD(v28) = 0;
      }
    }
    v51 = (a3 & 0x240) == 512;
    v154 = v23 & 0xF;
    v134 = v51;
    while ( 1 )
    {
      v52 = v150;
      v168 = v150;
      WdLogSingleEntry2(4LL, v150);
      v53 = 0;
      v140 = 0;
      v141 = 0;
      v137 = 0;
      v136 = 0;
      FreePathsModality(v163[0]);
      FreePathsModality(v163[1]);
      v54 = v133;
      v163[1] = 0LL;
      v163[0] = 0LL;
      if ( v133 )
      {
        if ( v154 != 15 )
          WdLogSingleEntry0(1LL);
        if ( v51 )
          WdLogSingleEntry0(1LL);
        if ( v151 >= 6 )
        {
          if ( (int)v28 >= 0 )
          {
            WdLogSingleEntry0(1LL);
            goto LABEL_233;
          }
          goto LABEL_234;
        }
        v55 = v151;
        v56 = (const struct _RETRY_MODE *)((char *)&unk_1C02A2A60 + 12 * v151);
        DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v56 + 1), *((unsigned int *)v56 + 2), 0LL);
        if ( *(_BYTE *)v56 )
        {
          v153 = 0;
          v151 = v55 + 1;
          LODWORD(v28) = GetPathsModality(v57, v163, 15LL);
        }
        else
        {
          v58 = v153++;
          LODWORD(v28) = DrvCreatePathModalityFromAllPaths(&v164, v58, v163);
          if ( (int)v28 >= 0 )
          {
            if ( *((_WORD *)v163[0] + 10) != 1 )
              WdLogSingleEntry0(1LL);
          }
          else
          {
            ++v151;
            v153 = 0;
          }
        }
        if ( (int)v28 < 0 )
        {
          v135 = 2;
          goto LABEL_216;
        }
        v59 = DrvFunctionalizeBaseVidMode(v56, v163[0]);
        LODWORD(v28) = v59;
        if ( v59 < 0 )
        {
          WdLogSingleEntry1(2LL, v59);
          v135 = 2;
          goto LABEL_216;
        }
        goto LABEL_109;
      }
      if ( v154 )
      {
        if ( v158 )
        {
          LODWORD(v28) = -1073741811;
          v135 = 39;
          goto LABEL_217;
        }
        v61 = v149;
        v62 = v149 & 0x20;
        v63 = (v149 & 0x20) != 0 && *((_QWORD *)v159 + 4);
        Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage();
        if ( (v61 & 0x800) != 0 || !(unsigned int)DispBrokerGetCurrentMode() )
        {
          v66 = v62 != 0 ? 0x9000 : 0;
          if ( !v63 || *((_DWORD *)v159 + 5) )
          {
            v64 = v154;
            v67 = v154;
          }
          else
          {
            v64 = v154;
            v67 = 0x2000000;
          }
          v65 = v67 | v66;
          if ( (v65 & 0x2000000) != 0 && (_DWORD)v64 != 15 )
            WdLogSingleEntry0(1LL);
        }
        else
        {
          if ( v63 )
            WdLogSingleEntry0(1LL);
          DrvDxgkLogCodePointPacket(127LL, 0LL, 0LL, 0LL);
          v65 = 64;
        }
        LODWORD(v28) = GetPathsModality(v64, v163, v65);
        if ( (int)v28 < 0 )
        {
          v135 = 2;
          v19 = 7;
          goto LABEL_89;
        }
        v68 = v163[0];
        if ( !*((_WORD *)v163[0] + 10) )
        {
          WdLogSingleEntry0(1LL);
          v68 = v163[0];
        }
        if ( v138 || (v134 = 1, (a3 & 0x40) != 0) )
          v134 = 0;
        DrvSetDisplayConfigApplyDeviceHack(v68);
        if ( v63 )
        {
          v69 = v159;
          if ( !*((_DWORD *)v159 + 5) || (v134 = 1, !*((_DWORD *)v159 + 6)) )
            v134 = 0;
          LODWORD(v28) = DrvValidateAndApplyDevMode(v159, v163);
          if ( (int)v28 < 0 )
          {
            v20 = *((_DWORD *)v69 + 12);
            v73 = 2;
            v19 = *((_DWORD *)v69 + 13);
            v146 = v20;
            v144 = v20;
            if ( (_DWORD)v28 == -1073741266 )
              v73 = 23;
            v135 = v73;
            goto LABEL_89;
          }
          LOBYTE(v53) = *((_DWORD *)v69 + 5) != 0;
        }
        v51 = v134;
        v19 = 10;
LABEL_109:
        v52 = v168;
        goto LABEL_110;
      }
      if ( (a3 & 0x10) == 0 )
        break;
      if ( v148 )
      {
        LODWORD(v28) = -1073741811;
        v135 = 40;
        goto LABEL_217;
      }
      LODWORD(v28) = AllocatePathModalityForDisplayConfig(v147, v160, v163);
      if ( (int)v28 < 0 )
      {
        v135 = 3;
        goto LABEL_216;
      }
      LODWORD(v28) = ConvertDisplayConfigToPathModality(v147, v160, v163[0], 0LL);
      if ( (int)v28 < 0 )
      {
        v135 = 4;
        goto LABEL_216;
      }
      v75 = DxDdGetDxgkWin32kInterface(v74, 0LL);
      LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v75 + 144))(
                       a3 & 0x2000 | 0x2F,
                       v163[0],
                       0LL);
      if ( (int)v28 < 0 )
      {
        v135 = 5;
        goto LABEL_216;
      }
      if ( v138 || (a3 & 0x40) != 0 )
      {
        v51 = 0;
        v134 = 0;
      }
      else
      {
        v51 = 1;
        v134 = 1;
      }
LABEL_110:
      if ( (a3 & 0x800) != 0 )
      {
        *(_WORD *)v143 = 0;
        PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v60, v163[0], (unsigned __int16 *)v143);
        LODWORD(v28) = PathPersistentMonitorsIfNeeded;
        if ( PathPersistentMonitorsIfNeeded < 0 )
        {
          WdLogSingleEntry1(2LL, PathPersistentMonitorsIfNeeded);
          v135 = 10;
          goto LABEL_216;
        }
        v80 = DxDdGetDxgkWin32kInterface(v72, v71);
        v81 = (*(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v80 + 176))(0x80000000LL, v163[0]);
        LODWORD(v28) = v81;
        if ( v81 == -1073741266 )
        {
          WdLogSingleEntry2(4LL, v52);
          v135 = 23;
          goto LABEL_216;
        }
        if ( v81 < 0 )
        {
          WdLogSingleEntry1(2LL, v81);
          v135 = 22;
          goto LABEL_216;
        }
        if ( *(_WORD *)v143 )
        {
          WdLogSingleEntry2(3LL, v52);
          LODWORD(v28) = -1073741266;
          goto LABEL_216;
        }
      }
      v84 = GetCcdRawmodeFlag() | 0x8000;
      if ( (v149 & 0x20) != 0 && (!*((_QWORD *)v159 + 4) || *((_DWORD *)v159 + 2)) )
        v84 |= 0x20000u;
      v85 = DxDdGetDxgkWin32kInterface(v83, v82);
      v86 = v84;
      LODWORD(v86) = v84 | 0x1000000;
      v87 = *(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v85 + 152);
      if ( !v148 )
        v86 = v84;
      LODWORD(v28) = v87(v86, v163[0]);
      if ( (int)v28 < 0 )
      {
        WdLogSingleEntry2(4LL, v163[0]);
        v135 = 11;
        v19 = 7;
        goto LABEL_216;
      }
      if ( v157 )
      {
        *(_DWORD *)v143 = GetPathsModality(v88, &v163[1], 1048640LL);
        LODWORD(v28) = *(_DWORD *)v143;
        if ( *(int *)v143 < 0 )
        {
          v135 = 13;
          v19 = 7;
          goto LABEL_216;
        }
        v90 = (16 * (a3 & 0x1000)) | 0x4000;
        if ( (a3 & 0x1100) == 0 )
          v90 = 16 * (a3 & 0x1000);
        if ( v90 )
        {
          v91 = DxDdGetDxgkWin32kInterface(v89, 0LL);
          *(_DWORD *)v143 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v91 + 144))(
                              v90,
                              v163[0],
                              0LL);
          LODWORD(v28) = *(_DWORD *)v143;
          if ( *(int *)v143 < 0 )
          {
            v135 = 14;
            goto LABEL_166;
          }
        }
        if ( (v149 & 0x10) != 0 )
          v90 |= 0x400000u;
        v92 = v90 | 0x1000000;
        v93 = 0LL;
        v94 = *(_QWORD *)(v155 + 1264);
        if ( !v148 )
          v92 = v90;
        while ( v94 )
        {
          v95 = (*(_DWORD *)(v94 + 160) & 0x800000) == 0;
          v96 = v93 + 1;
          v94 = *(_QWORD *)(v94 + 128);
          if ( v95 )
            v96 = v93;
          v93 = v96;
        }
        DisplayScenarioJournalSetExpectedPathModality(
          296 * (unsigned int)*((unsigned __int16 *)v163[0] + 10),
          *((unsigned __int16 *)v163[0] + 10),
          (char *)v163[0] + 56,
          v93);
        LOBYTE(v97) = (a3 & 0x1100) != 0;
        v98 = v152;
        v99 = v156;
        v161 = ApplyPathsModality(
                 v163[0],
                 v92,
                 v97,
                 (_DWORD)v169,
                 (__int64)v156,
                 (__int64)&v141,
                 (__int64)v152,
                 (__int64)v143,
                 (__int64)&v135,
                 v170);
        v146 = v161;
        v100 = v161;
        v144 = v161;
        if ( v161 < 0 )
        {
          v19 = 5;
          LODWORD(v28) = *(_DWORD *)v143;
          v140 = v141;
LABEL_166:
          v20 = v146;
LABEL_89:
          v51 = v134;
          goto LABEL_216;
        }
        if ( v161 == 1 )
          WdLogSingleEntry0(1LL);
        LODWORD(v28) = *(_DWORD *)v143;
        if ( *(int *)v143 < 0 )
          WdLogSingleEntry0(1LL);
        v140 = v141;
        if ( v141 )
          WdLogSingleEntry0(1LL);
        if ( v100 == 2 )
        {
          if ( (a3 & 0x1100) != 0 || *v98 )
            WdLogSingleEntry0(1LL);
          v20 = v146;
          v51 = v134;
          v101 = 1;
          v137 = 1;
          v136 = 1;
          goto LABEL_195;
        }
        if ( !*v98 )
          WdLogSingleEntry0(1LL);
        v20 = v146;
        v99 = 0LL;
        v51 = v134;
        v156 = 0LL;
      }
      else
      {
        if ( (a3 & 0x40) == 0 )
        {
          WdLogSingleEntry1(1LL, a3);
          v135 = 21;
LABEL_215:
          LODWORD(v28) = -1073741811;
          goto LABEL_216;
        }
        v99 = v156;
        v20 = 0;
        v146 = 0;
        v144 = 0;
      }
      v101 = v137;
LABEL_195:
      if ( !v51 )
      {
        if ( (int)v28 >= 0 )
          goto LABEL_210;
        v104 = 17;
LABEL_212:
        v135 = v104;
        v19 = ((int)v28 >= 0) + 9;
        goto LABEL_216;
      }
      v102 = DxDdGetDxgkWin32kInterface(v88, 0LL);
      v103 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(v102 + 176))(v53, v163[0]);
      LODWORD(v28) = v103;
      if ( !a6 )
      {
        if ( v103 < 0 )
        {
          WdLogSingleEntry1(2LL, v103);
          LODWORD(v28) = 0;
        }
LABEL_210:
        v104 = 18;
        goto LABEL_212;
      }
      if ( v103 == -1073741266 )
      {
        if ( (a3 & 0x10) != 0 )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry2(4LL, v168);
        if ( !v101 )
        {
          if ( v99 )
            WdLogSingleEntry0(1LL);
          v139 = 1;
          v156 = *v152;
          *v152 = 0LL;
        }
        v135 = 24;
        v19 = 9;
        goto LABEL_216;
      }
      if ( v103 >= 0 )
        goto LABEL_210;
      v135 = 29;
      v19 = 9;
      LODWORD(v28) = 0;
LABEL_216:
      v54 = v133;
LABEL_217:
      v105 = ++v150;
      if ( (_DWORD)v28 == -1073741266 )
      {
        if ( !v54 && v105 < 4 )
        {
          v106 = 3221226030LL;
          goto LABEL_224;
        }
      }
      else if ( (int)v28 >= 0 )
      {
        goto LABEL_246;
      }
      if ( !v142 )
        goto LABEL_233;
      v133 = 1;
      v51 = 0;
      v134 = 0;
      v106 = (unsigned int)v28;
LABEL_224:
      DisplayScenarioJournalRetry(v106);
    }
    if ( (a3 & 0x20) == 0 )
    {
      WdLogSingleEntry1(1LL, a3);
      v135 = 9;
      goto LABEL_215;
    }
    v143[0] = 0;
    if ( (v149 & 8) != 0 )
    {
      v76 = SetDisplayConfigHandleOnlyProvidedPath(v160, v163, v143, (enum _DXGK_DIAG_SDC_STAGE *)&v135);
    }
    else
    {
      if ( !v148 )
      {
        v79 = v160;
        LODWORD(v28) = AllocatePathModalityForDisplayConfig(v147, v160, v163);
        if ( (int)v28 < 0 )
        {
          v135 = 6;
          goto LABEL_216;
        }
        LODWORD(v28) = ConvertDisplayConfigToPathModality(v147, v79, v163[0], v143);
        if ( (int)v28 < 0 )
        {
          v135 = 7;
          goto LABEL_216;
        }
LABEL_135:
        if ( v143[0] )
        {
          LODWORD(v28) = SetDisplayConfigHandlePreferredScaling(v163[0], (enum _DXGK_DIAG_SDC_STAGE *)&v135);
          if ( (int)v28 < 0 )
            goto LABEL_216;
        }
        v78 = DxDdGetDxgkWin32kInterface(v77, 0LL);
        LODWORD(v28) = (*(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v78 + 144))(
                         256LL,
                         v163[0],
                         0LL);
        if ( (int)v28 < 0 )
        {
          v135 = 8;
          goto LABEL_216;
        }
        v53 = 1;
        goto LABEL_110;
      }
      v76 = SetDisplayConfigHandleBrokerProvidedPaths(
              v167,
              0,
              v147,
              v160,
              v163,
              v143,
              (enum _DXGK_DIAG_SDC_STAGE *)&v135);
    }
    LODWORD(v28) = v76;
    if ( v76 < 0 )
      goto LABEL_216;
    goto LABEL_135;
  }
  LODWORD(v28) = 0;
  v135 = 18;
  v34 = 1;
LABEL_260:
  FreePathsModality(v163[1]);
  v163[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v163[1]) < 0 )
    goto LABEL_270;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)v163[1] + 10),
    *((unsigned __int16 *)v163[1] + 10),
    (char *)v163[1] + 56);
  v119 = v163[1];
  if ( !*((_WORD *)v163[1] + 10) )
    goto LABEL_270;
  v120 = 0LL;
  while ( (*(_QWORD *)((_BYTE *)v119 + v120 + 56) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
  {
LABEL_267:
    ++v37;
    v120 += 296LL;
    if ( v37 >= *((unsigned __int16 *)v119 + 10) )
      goto LABEL_270;
  }
  v182 = 0LL;
  v183 = 0;
  v179[0] = 9;
  v179[1] = 32;
  v180 = *(_QWORD *)((char *)v119 + v120 + 72);
  v181 = *(_DWORD *)((char *)v119 + v120 + 84);
  if ( (int)DrvDisplayConfigGetDeviceInfo(v179) < 0 || (v182 & 1) == 0 )
  {
    v119 = v163[1];
    goto LABEL_267;
  }
  v145 = 1;
LABEL_270:
  if ( *v152 )
  {
    v121 = *((_QWORD *)*v152 + 5);
    if ( v121 )
    {
      v122 = *(_QWORD *)(v121 + 2552);
      if ( ((v122 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v122 + 160) & 0x2000000) != 0);
    }
  }
LABEL_274:
  if ( v173 )
    *v173 = v150;
  if ( v174 )
    *v174 = v135;
  if ( v177 )
  {
    v123 = !v139 && v34;
    *v177 = v123;
  }
  v124 = v140;
  if ( v175 )
    *v175 = v140;
  v125 = v149;
  if ( (v149 & 0x20) != 0 )
  {
    v126 = v159;
    *((_DWORD *)v159 + 12) = v20;
    *((_DWORD *)v126 + 13) = v19;
    if ( (int)v28 >= 0 != v20 >= 0 )
      WdLogSingleEntry0(1LL);
    v178[0] = 0;
    v178[1] = 16;
    v178[2] = v20;
    v178[3] = v19;
    DisplayScenarioJournalSetSpecializedData(v178);
  }
  v127 = v171;
  v95 = (v125 & 0x40) == 0;
  v128 = v150;
  if ( v95 )
    LogDiagSDC(v147, (__int64)v160, a3, v28, v150, v135, v176, v34, v171);
  v129 = *(_QWORD *)(v155 + 1928);
  if ( v129 )
    DisplayScenarioJournalSetUniqueness(*(unsigned int *)(v129 + 1573024), *(unsigned int *)(v129 + 1573008));
  LOBYTE(v26) = v34;
  LOBYTE(v132) = v145;
  LOBYTE(v131) = v124;
  DisplayScenarioJournalFinalize((unsigned int)v28, (unsigned int)v135, v128, v26, v131, v132, v161, v170, v127);
  WdLogSingleEntry1(4LL, (int)v28);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v162);
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v172, 5LL);
  return (unsigned int)v28;
}
