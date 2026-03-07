void __fastcall DXGMONITOR::TriggerMonitorTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rsi
  int v6; // r12d
  __int64 *v7; // rcx
  __int64 v8; // rax
  void **v9; // rax
  void *v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  DxgMonitor::MonitorColorState *v15; // r9
  int v16; // edi
  int v17; // r15d
  int v18; // ebx
  DxgMonitor::MonitorColorState *v19; // r14
  char v20; // al
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  bool IsAutoColorManagementSupported; // al
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int128 *v27; // rbx
  void *v28; // r15
  __int64 *v29; // rcx
  __int64 v30; // rax
  void **v31; // rax
  void *v32; // rcx
  __m128i *v33; // rcx
  __m128i v34; // xmm2
  __m128i v35; // xmm4
  __m128i v36; // xmm3
  __m128i v37; // xmm5
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // kr00_8
  __int64 *v45; // r13
  __int16 v46; // si
  unsigned int i; // r15d
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int8 (__fastcall *v50)(__int64 *, _QWORD, __int128 *); // rax
  char *v51; // rdi
  size_t v52; // r8
  char *v53; // rax
  char *v54; // rdi
  __int64 v55; // rcx
  int v56; // r9d
  int v57; // eax
  unsigned int v58; // ecx
  bool v59; // al
  __int16 v60; // r9
  __int16 v61; // cx
  __int64 v62; // rax
  int v63; // ecx
  __int16 v64; // ax
  DxgMonitor::MonitorColorState *v65; // rcx
  DxgMonitor::MonitorColorState *v66; // rcx
  bool v67; // al
  __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rdx
  bool v72; // zf
  int v73; // eax
  __int64 v74; // rcx
  int v75; // r9d
  int v76; // eax
  unsigned int v77; // ecx
  bool v78; // al
  __int16 v79; // r9
  __int16 v80; // cx
  __int64 v81; // rax
  int v82; // ecx
  __int16 v83; // ax
  DxgMonitor::MonitorColorState *v84; // rcx
  DxgMonitor::MonitorColorState *v85; // rcx
  bool IsAdvancedColorEnabled; // al
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rcx
  bool IsAddressValid; // [rsp+210h] [rbp-80h] BYREF
  unsigned __int8 v94; // [rsp+211h] [rbp-7Fh]
  unsigned __int8 v95; // [rsp+212h] [rbp-7Eh]
  __int16 v96; // [rsp+214h] [rbp-7Ch] BYREF
  bool v97; // [rsp+216h] [rbp-7Ah] BYREF
  unsigned __int8 v98; // [rsp+217h] [rbp-79h]
  unsigned __int8 v99; // [rsp+218h] [rbp-78h]
  int v100; // [rsp+21Ch] [rbp-74h] BYREF
  int v101; // [rsp+220h] [rbp-70h] BYREF
  __int16 v102; // [rsp+224h] [rbp-6Ch] BYREF
  int v103; // [rsp+228h] [rbp-68h] BYREF
  int v104; // [rsp+22Ch] [rbp-64h] BYREF
  int v105; // [rsp+230h] [rbp-60h] BYREF
  int v106; // [rsp+234h] [rbp-5Ch] BYREF
  int v107; // [rsp+238h] [rbp-58h] BYREF
  int v108; // [rsp+23Ch] [rbp-54h] BYREF
  void *v109; // [rsp+240h] [rbp-50h] BYREF
  int v110; // [rsp+248h] [rbp-48h]
  char *v111; // [rsp+250h] [rbp-40h] BYREF
  unsigned __int16 *v112; // [rsp+258h] [rbp-38h] BYREF
  void *v113; // [rsp+260h] [rbp-30h] BYREF
  int v114; // [rsp+268h] [rbp-28h] BYREF
  int v115; // [rsp+26Ch] [rbp-24h] BYREF
  unsigned int v116; // [rsp+270h] [rbp-20h] BYREF
  int v117; // [rsp+274h] [rbp-1Ch] BYREF
  int v118; // [rsp+278h] [rbp-18h] BYREF
  int v119; // [rsp+27Ch] [rbp-14h] BYREF
  BOOL v120; // [rsp+280h] [rbp-10h] BYREF
  int v121; // [rsp+284h] [rbp-Ch] BYREF
  int v122; // [rsp+288h] [rbp-8h] BYREF
  int v123; // [rsp+28Ch] [rbp-4h] BYREF
  int v124; // [rsp+290h] [rbp+0h] BYREF
  int v125; // [rsp+294h] [rbp+4h] BYREF
  BOOL v126; // [rsp+298h] [rbp+8h] BYREF
  int v127; // [rsp+29Ch] [rbp+Ch] BYREF
  int v128; // [rsp+2A0h] [rbp+10h] BYREF
  int v129; // [rsp+2A4h] [rbp+14h] BYREF
  int v130; // [rsp+2A8h] [rbp+18h] BYREF
  int v131; // [rsp+2ACh] [rbp+1Ch] BYREF
  int v132; // [rsp+2B0h] [rbp+20h] BYREF
  int v133; // [rsp+2B4h] [rbp+24h] BYREF
  int v134; // [rsp+2B8h] [rbp+28h] BYREF
  int v135; // [rsp+2BCh] [rbp+2Ch] BYREF
  int v136; // [rsp+2C0h] [rbp+30h] BYREF
  BOOL v137; // [rsp+2C4h] [rbp+34h] BYREF
  int v138; // [rsp+2C8h] [rbp+38h] BYREF
  unsigned __int64 v139; // [rsp+2D0h] [rbp+40h] BYREF
  __int64 v140; // [rsp+2D8h] [rbp+48h] BYREF
  int v141; // [rsp+2E0h] [rbp+50h] BYREF
  int v142; // [rsp+2E4h] [rbp+54h] BYREF
  int v143; // [rsp+2E8h] [rbp+58h] BYREF
  int v144; // [rsp+2ECh] [rbp+5Ch] BYREF
  int v145; // [rsp+2F0h] [rbp+60h] BYREF
  int v146; // [rsp+2F4h] [rbp+64h] BYREF
  int v147; // [rsp+2F8h] [rbp+68h] BYREF
  int v148; // [rsp+2FCh] [rbp+6Ch] BYREF
  int v149; // [rsp+300h] [rbp+70h] BYREF
  int v150; // [rsp+304h] [rbp+74h] BYREF
  int v151; // [rsp+308h] [rbp+78h] BYREF
  __int64 v152; // [rsp+310h] [rbp+80h] BYREF
  __int64 *v153; // [rsp+318h] [rbp+88h]
  _QWORD *v154; // [rsp+320h] [rbp+90h] BYREF
  void *v155; // [rsp+328h] [rbp+98h] BYREF
  int v156; // [rsp+330h] [rbp+A0h]
  __int64 v157; // [rsp+338h] [rbp+A8h] BYREF
  _WORD *v158[2]; // [rsp+340h] [rbp+B0h] BYREF
  const GUID *p_ActivityId; // [rsp+350h] [rbp+C0h]
  __int64 *v160; // [rsp+358h] [rbp+C8h] BYREF
  __int64 v161; // [rsp+360h] [rbp+D0h] BYREF
  __int64 *v162; // [rsp+368h] [rbp+D8h] BYREF
  __int16 v163; // [rsp+370h] [rbp+E0h]
  __int128 *v164; // [rsp+378h] [rbp+E8h] BYREF
  __int16 v165; // [rsp+380h] [rbp+F0h]
  void *v166; // [rsp+388h] [rbp+F8h] BYREF
  __int16 v167; // [rsp+390h] [rbp+100h]
  __int128 *v168; // [rsp+398h] [rbp+108h] BYREF
  __int16 v169; // [rsp+3A0h] [rbp+110h]
  __int64 *v170; // [rsp+3A8h] [rbp+118h] BYREF
  __int16 v171; // [rsp+3B0h] [rbp+120h]
  __int128 *v172; // [rsp+3B8h] [rbp+128h] BYREF
  __int16 v173; // [rsp+3C0h] [rbp+130h]
  __int128 v174; // [rsp+3C8h] [rbp+138h] BYREF
  void *Src[2]; // [rsp+3D8h] [rbp+148h]
  char v176[8]; // [rsp+450h] [rbp+1C0h] BYREF
  int v177; // [rsp+458h] [rbp+1C8h]
  unsigned __int8 v178; // [rsp+45Ch] [rbp+1CCh]
  _BYTE v179[19]; // [rsp+45Dh] [rbp+1CDh] BYREF
  __int128 v180; // [rsp+470h] [rbp+1E0h] BYREF
  int v181; // [rsp+480h] [rbp+1F0h]
  GUID ActivityId; // [rsp+488h] [rbp+1F8h] BYREF
  __int128 v183; // [rsp+498h] [rbp+208h] BYREF
  __int128 v184; // [rsp+4A8h] [rbp+218h]
  __int64 v185; // [rsp+4B8h] [rbp+228h] BYREF
  __int16 v186; // [rsp+4C0h] [rbp+230h]
  __int64 v187; // [rsp+4C8h] [rbp+238h] BYREF
  int v188; // [rsp+4D0h] [rbp+240h]
  __int16 v189; // [rsp+4D4h] [rbp+244h]

  v156 = a2;
  v157 = a1;
  v3 = a1;
  ActivityId = 0LL;
  if ( a3 )
  {
    p_ActivityId = (const GUID *)(a3 + 8);
  }
  else
  {
    EtwActivityIdControl(3u, &ActivityId);
    p_ActivityId = &ActivityId;
  }
  v4 = *(_QWORD *)(v3 + 216);
  v5 = 0LL;
  v151 = 0;
  v6 = 1;
  v154 = 0LL;
  LOBYTE(v96) = 0;
  v7 = *(__int64 **)(v4 + 136);
  if ( v7 )
  {
    v8 = *v7;
    LOBYTE(v96) = 1;
    v9 = (void **)(*(__int64 (__fastcall **)(__int64 *, void **, int *))(v8 + 240))(v7, &v109, &v151);
    v5 = *v9;
    *v9 = 0LL;
    v10 = v109;
    v154 = v5;
    v109 = 0LL;
    if ( v10 )
      operator delete(v10);
  }
  v11 = *(_QWORD *)(v3 + 224);
  v98 = 0;
  LOBYTE(v112) = 0;
  v12 = 0;
  LOBYTE(v111) = 0;
  v13 = *(_OWORD *)(v11 + 208);
  LOBYTE(v110) = 0;
  v101 = 0;
  v180 = v13;
  v181 = *(_DWORD *)(v11 + 224);
  v161 = *(_QWORD *)(v11 + 228);
  v183 = 0LL;
  v100 = 0;
  v184 = 0LL;
  v95 = 0;
  v14 = *(_OWORD *)(v11 + 236);
  v94 = 0;
  v152 = 0LL;
  v183 = v14;
  LODWORD(v153) = 0;
  v184 = *(_OWORD *)(v11 + 252);
  if ( (int)DXGMONITOR::_GetLinkInfo((DXGMONITOR *)v3, (struct _DXGK_MONITORLINKINFO *)&v152) >= 0 )
  {
    v98 = 1;
    v16 = HIDWORD(v152) >> 1;
    v17 = HIDWORD(v152) >> 2;
    v18 = HIDWORD(v152) >> 11;
    LOBYTE(v16) = (v152 & 0x200000000LL) != 0;
    LOBYTE(v17) = (v152 & 0x400000000LL) != 0;
    LODWORD(v112) = v16;
    LOBYTE(v18) = (v152 & 0x80000000000LL) != 0;
    LODWORD(v111) = v17;
    v110 = v18;
    DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
      v15,
      (const struct _DXGK_MONITORLINKINFO *)&v152,
      (union MONITOR_AND_LINK_HDR_CAPS *)&v100);
    v19 = *(DxgMonitor::MonitorColorState **)(v3 + 224);
    v20 = DxgMonitor::MonitorColorState::WcgDriverCapsSet(v19, (const struct _DXGK_MONITORLINKINFO *)&v152);
    v21 = 0;
    if ( v20 && !DxgMonitor::MonitorColorState::EdidSupportsHDR(v19) )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 32LL))(*(_QWORD *)v19);
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) + 48) & 8) != 0 )
      {
        v95 = 1;
        IsAutoColorManagementSupported = DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(v19);
        v21 = 0;
        if ( IsAutoColorManagementSupported )
        {
          v94 = 1;
LABEL_16:
          v12 = v100;
          v101 = v100;
          goto LABEL_17;
        }
LABEL_15:
        v94 = v21;
        LODWORD(v112) = v16;
        LODWORD(v111) = v17;
        v110 = v18;
        goto LABEL_16;
      }
      v21 = 0;
    }
    v95 = v21;
    goto LABEL_15;
  }
LABEL_17:
  v97 = 0;
  v187 = 0LL;
  v188 = 0;
  v189 = 0;
  v185 = 0LL;
  v186 = 0;
  v24 = *(_QWORD *)(v3 + 216);
  v102 = 0;
  v115 = 0;
  v114 = 0;
  v25 = *(_QWORD *)(v24 + 160);
  if ( v25 )
  {
    v152 = 917504LL;
    v153 = &v187;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v152);
    v158[0] = (_WORD *)655360;
    v158[1] = &v185;
    (*(void (__fastcall **)(__int64, _WORD **))(*(_QWORD *)v25 + 72LL))(v25, v158);
    (*(void (__fastcall **)(__int64, bool *, __int16 *))(*(_QWORD *)v25 + 88LL))(v25, &v97, &v102);
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v25 + 208LL))(v25, &v115, &v114);
  }
  v26 = *(_QWORD *)(v3 + 216);
  v27 = 0LL;
  v116 = 0;
  v28 = 0LL;
  LODWORD(v139) = 0;
  LODWORD(v140) = 0;
  v29 = *(__int64 **)(v26 + 128);
  v105 = 0;
  v104 = 0;
  LODWORD(v109) = 0;
  v103 = 0;
  LOWORD(v100) = 0;
  v155 = 0LL;
  v99 = 0;
  if ( v29 )
  {
    v30 = *v29;
    v99 = 1;
    v31 = (void **)(*(__int64 (__fastcall **)(__int64 *, void **, unsigned int *))(v30 + 240))(v29, &v113, &v116);
    v28 = *v31;
    *v31 = 0LL;
    v32 = v113;
    v155 = v28;
    v113 = 0LL;
    if ( v32 )
      operator delete(v32);
  }
  v33 = *(__m128i **)(*(_QWORD *)(v3 + 232) + 144LL);
  if ( v33 )
  {
    v34 = v33[1];
    v107 = 1;
    v35 = *v33;
    v108 = 1;
    v36 = v33[3];
    v37 = v33[2];
    v38 = HIDWORD(v34.m128i_i64[0]);
    v34.m128i_i64[0] = _mm_srli_si128(v34, 8).m128i_u64[0];
    v139 = v38;
    v109 = (void *)HIDWORD(v34.m128i_i64[0]);
    v140 = v34.m128i_i64[0];
    v105 = _mm_cvtsi128_si32(_mm_srli_si128(v35, 8));
    v104 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8));
    v103 = _mm_cvtsi128_si32(v37);
  }
  else
  {
    v107 = 0;
    v108 = 0;
  }
  v39 = *(_QWORD *)(v3 + 216);
  v106 = 0;
  v40 = *(_QWORD *)(v39 + 128);
  if ( v40 )
  {
    v41 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
    v113 = v41;
    if ( v41 )
    {
      v42 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v41 + 24LL))(v41);
      v106 = v42;
      if ( v42 > 1 )
      {
        v44 = v42 - 1;
        v43 = 136 * v44;
        if ( !is_mul_ok(v44, 0x88uLL) )
          v43 = -1LL;
        v27 = (__int128 *)operator new[](v43, 0x4D677844u, 256LL);
        if ( v27 )
        {
          v45 = (__int64 *)v113;
          v46 = 0;
          for ( i = 1; ; ++i )
          {
            v48 = *v45;
            LOWORD(v100) = v46;
            if ( i >= (*(unsigned int (__fastcall **)(__int64 *))(v48 + 24))(v45) )
              break;
            v49 = *v45;
            LOWORD(v100) = v46;
            v174 = 0LL;
            v50 = *(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v49 + 32);
            *(_OWORD *)Src = 0LL;
            if ( !v50(v45, i, &v174) )
              break;
            ++v46;
            v51 = (char *)v27 + 136 * i - 136;
            ConvertMonitorCapablitiesOrigin(
              (enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN)Src[1],
              (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)v51);
            *((_DWORD *)v51 + 1) = DWORD1(v174);
            v52 = *((_QWORD *)&v174 + 1);
            if ( *((_QWORD *)&v174 + 1) > 0x80uLL )
              v52 = 128LL;
            memmove(v51 + 8, Src[0], v52);
          }
          v5 = v154;
          v12 = v101;
          v28 = v155;
          v3 = v157;
        }
      }
    }
  }
  v53 = (char *)operator new[](0x208uLL, 0x4D677844u, 256LL);
  v54 = v53;
  if ( v53 )
    RtlStringCchCopyUnicodeString(v53, 260LL, (const struct _UNICODE_STRING *)(*(_QWORD *)(v3 + 200) + 48LL));
  IsAddressValid = DxgMonitor::MonitorDisplayPortState::IsAddressValid(*(DxgMonitor::MonitorDisplayPortState **)(v3 + 272));
  DxgMonitor::MonitorDisplayPortState::GetAddress(v55, (__int64)v176);
  v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 168) + 24LL) + 24LL) & 0xC;
  if ( (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x800000000020LL) )
    {
      LODWORD(v113) = (*(unsigned __int8 *)(v3 + 177) >> 5) & 1;
      v76 = v75;
      LOBYTE(v76) = v101 != v75;
      LODWORD(v154) = v76;
      v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 168) + 24LL) + 16LL) + 2264LL);
      v172 = (__int128 *)v179;
      v173 = 15;
      LODWORD(v157) = v178;
      v150 = v177;
      LODWORD(v155) = (v77 >> 3) & 1;
      v149 = IsAddressValid;
      v78 = DXGMONITOR::_SupportSyncLockIdentical((DXGMONITOR *)v3);
      v171 = v151;
      v147 = (unsigned __int8)v96;
      v148 = v78;
      v170 = v5;
      if ( v27 )
        v80 = 136 * v100;
      else
        v80 = v79;
      v146 = v114;
      v145 = v115;
      v144 = v103;
      v143 = (int)v109;
      v142 = v104;
      v141 = v105;
      v138 = v108;
      v81 = *(_QWORD *)(v3 + 240);
      v169 = v80;
      v168 = v27;
      v166 = v28;
      v82 = *(_DWORD *)(v81 + 16);
      LOWORD(v100) = v102;
      IsAddressValid = v97;
      v158[0] = &v185;
      v160 = &v187;
      v136 = v106;
      v83 = v116;
      v137 = v82;
      if ( v116 > 0x80 )
        v83 = 128;
      v84 = *(DxgMonitor::MonitorColorState **)(v3 + 224);
      v167 = v83;
      v135 = *(_DWORD *)(v3 + 364);
      v134 = *((_DWORD *)v84 + 98);
      v133 = DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(v84);
      IsAdvancedColorEnabled = DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(v85);
      v131 = v94;
      v130 = v95;
      v132 = !IsAdvancedColorEnabled;
      v87 = *(_QWORD *)(v3 + 224);
      v129 = (v12 >> 2) & 1;
      v127 = v12 & 1;
      v128 = (v12 >> 1) & 1;
      v126 = *(_DWORD *)(v3 + 352) != 0;
      v125 = (unsigned __int8)v110;
      v124 = (unsigned __int8)v111;
      v123 = (unsigned __int8)v112;
      v122 = v98;
      v88 = (unsigned int)dword_1C013A918;
      v121 = *(unsigned __int8 *)(v87 + 268);
      v120 = 0;
      v119 = *(_DWORD *)(v87 + 320);
      v118 = *(_DWORD *)(v87 + 316);
      v117 = *(_DWORD *)(v87 + 312);
      v108 = *(_DWORD *)(v87 + 272);
      v164 = &v183;
      v165 = 32;
      v162 = &v161;
      v163 = 8;
      *(_QWORD *)&v174 = &v180;
      WORD4(v174) = 20;
      v89 = *(_QWORD *)(v3 + 168);
      v111 = v54;
      v90 = *(_QWORD *)(*(_QWORD *)(v89 + 24) + 16LL);
      v112 = *(unsigned __int16 **)(v90 + 1744);
      v152 = *(_QWORD *)(v90 + 404);
      v107 = *(_DWORD *)(v3 + 180);
      v106 = v99;
      v105 = *(_DWORD *)(v3 + 184);
      v104 = v156;
      if ( !dword_1C013A918 || (v72 = tlgKeywordOn((__int64)&dword_1C013A918, 0x200000000000LL) == 0, v91 = 1, v72) )
        v91 = 0;
      v103 = v91;
      if ( !(_DWORD)v88 || !tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000000LL) )
        v6 = 0;
      v92 = (unsigned int)dword_1C013BBE8;
      v101 = v6;
      LODWORD(v109) = dword_1C013BBE8++;
      v96 = 17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v92,
        byte_1C00A14B8,
        p_ActivityId,
        v88,
        (__int64)&v96,
        (__int64)&v109,
        (__int64)&v101,
        (__int64)&v103,
        (__int64)&v104,
        (__int64)&v105,
        (_WORD **)&v111,
        (__int64)&v106,
        (__int64)&v107,
        (__int64)&v152,
        &v112,
        (__int64 *)&v174,
        (__int64 *)&v162,
        (__int64 *)&v164,
        (__int64)&v108,
        (__int64)&v117,
        (__int64)&v118,
        (__int64)&v119,
        (__int64)&v120,
        (__int64)&v121,
        (__int64)&v122,
        (__int64)&v123,
        (__int64)&v124,
        (__int64)&v125,
        (__int64)&v126,
        (__int64)&v127,
        (__int64)&v128,
        (__int64)&v129,
        (__int64)&v130,
        (__int64)&v131,
        (__int64)&v132,
        (__int64)&v133,
        (__int64)&v134,
        (__int64)&v135,
        (__int64 *)&v166,
        (__int64)&v136,
        (_WORD **)&v160,
        v158,
        (__int64)&IsAddressValid,
        (__int64)&v100,
        (__int64)&v137,
        (__int64)&v138,
        (__int64)&v139,
        (__int64)&v140,
        (__int64)&v141,
        (__int64)&v142,
        (__int64)&v143,
        (__int64)&v144,
        (__int64)&v145,
        (__int64)&v146,
        (__int64 *)&v168,
        (__int64)&v147,
        (__int64 *)&v170,
        (__int64)&v148,
        (__int64)&v149,
        (__int64)&v150,
        (__int64)&v157,
        (__int64 *)&v172,
        (__int64)&v155);
    }
  }
  else if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x800000000020LL) )
  {
    v57 = v56;
    LOBYTE(v57) = v101 != v56;
    v108 = v57;
    v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 168) + 24LL) + 16LL) + 2264LL);
    v152 = (__int64)v179;
    LOWORD(v153) = v56 + 15;
    v117 = v178;
    v118 = v177;
    v101 = (v58 >> 3) & 1;
    v119 = IsAddressValid;
    v59 = DXGMONITOR::_SupportSyncLockIdentical((DXGMONITOR *)v3);
    v163 = v151;
    v121 = (unsigned __int8)v96;
    v120 = v59;
    v162 = v5;
    if ( v27 )
      v61 = 136 * v100;
    else
      v61 = v60;
    v122 = v114;
    v123 = v115;
    v124 = (int)v109;
    v125 = v140;
    v126 = v139;
    v62 = *(_QWORD *)(v3 + 240);
    v165 = v61;
    v164 = v27;
    v166 = v28;
    v63 = *(_DWORD *)(v62 + 16);
    LOWORD(v100) = v102;
    IsAddressValid = v97;
    v109 = &v185;
    v160 = &v187;
    v64 = v116;
    v127 = v63;
    if ( v116 > 0x80 )
      v64 = 128;
    v65 = *(DxgMonitor::MonitorColorState **)(v3 + 224);
    v167 = v64;
    v128 = *(_DWORD *)(v3 + 364);
    v129 = *((_DWORD *)v65 + 98);
    v130 = DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(v65);
    v67 = DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(v66);
    v132 = v94;
    v133 = v95;
    v131 = !v67;
    v68 = *(_QWORD *)(v3 + 224);
    v134 = (v12 >> 2) & 1;
    v136 = v12 & 1;
    v135 = (v12 >> 1) & 1;
    v137 = *(_DWORD *)(v3 + 352) != 0;
    v138 = (unsigned __int8)v110;
    LODWORD(v139) = (unsigned __int8)v111;
    LODWORD(v140) = (unsigned __int8)v112;
    v141 = v98;
    v69 = (unsigned int)dword_1C013A918;
    v142 = *(unsigned __int8 *)(v68 + 268);
    v143 = 0;
    v144 = *(_DWORD *)(v68 + 320);
    v145 = *(_DWORD *)(v68 + 316);
    v146 = *(_DWORD *)(v68 + 312);
    v147 = *(_DWORD *)(v68 + 272);
    v168 = &v183;
    v169 = 32;
    v170 = &v161;
    v171 = 8;
    v172 = &v180;
    v173 = 20;
    v70 = *(_QWORD *)(v3 + 168);
    v111 = v54;
    v71 = *(_QWORD *)(*(_QWORD *)(v70 + 24) + 16LL);
    v112 = *(unsigned __int16 **)(v71 + 1744);
    v158[0] = *(_WORD **)(v71 + 404);
    v148 = *(_DWORD *)(v3 + 180);
    v149 = v99;
    v150 = *(_DWORD *)(v3 + 184);
    LODWORD(v157) = v156;
    if ( !dword_1C013A918 || (v72 = tlgKeywordOn((__int64)&dword_1C013A918, 0x200000000000LL) == 0, v73 = 1, v72) )
      v73 = 0;
    LODWORD(v155) = v73;
    if ( !(_DWORD)v69 || !tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000000LL) )
      v6 = 0;
    v74 = (unsigned int)dword_1C013BBE8;
    LODWORD(v154) = v6;
    LODWORD(v113) = dword_1C013BBE8++;
    v96 = 16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v74,
      byte_1C00A1017,
      p_ActivityId,
      v69,
      (__int64)&v96,
      (__int64)&v113,
      (__int64)&v154,
      (__int64)&v155,
      (__int64)&v157,
      (__int64)&v150,
      (_WORD **)&v111,
      (__int64)&v149,
      (__int64)&v148,
      (__int64)v158,
      &v112,
      (__int64 *)&v172,
      (__int64 *)&v170,
      (__int64 *)&v168,
      (__int64)&v147,
      (__int64)&v146,
      (__int64)&v145,
      (__int64)&v144,
      (__int64)&v143,
      (__int64)&v142,
      (__int64)&v141,
      (__int64)&v140,
      (__int64)&v139,
      (__int64)&v138,
      (__int64)&v137,
      (__int64)&v136,
      (__int64)&v135,
      (__int64)&v134,
      (__int64)&v133,
      (__int64)&v132,
      (__int64)&v131,
      (__int64)&v130,
      (__int64)&v129,
      (__int64)&v128,
      (__int64 *)&v166,
      (__int64)&v106,
      (_WORD **)&v160,
      (_WORD **)&v109,
      (__int64)&IsAddressValid,
      (__int64)&v100,
      (__int64)&v127,
      (__int64)&v107,
      (__int64)&v126,
      (__int64)&v125,
      (__int64)&v105,
      (__int64)&v104,
      (__int64)&v124,
      (__int64)&v103,
      (__int64)&v123,
      (__int64)&v122,
      (__int64 *)&v164,
      (__int64)&v121,
      (__int64 *)&v162,
      (__int64)&v120,
      (__int64)&v119,
      (__int64)&v118,
      (__int64)&v117,
      &v152,
      (__int64)&v101);
  }
  if ( v54 )
    operator delete(v54);
  if ( v28 )
    operator delete(v28);
  if ( v27 )
    operator delete(v27);
  if ( v5 )
    operator delete(v5);
}
