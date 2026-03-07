__int64 __fastcall BmlPreparePathOrderAndVidPn(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int64 v9; // rbx
  __int16 v10; // r15
  __int64 v11; // rax
  VIDPN_MGR *v13; // rdi
  ADAPTER_DISPLAY *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned int PreferredHdrPixelFormat; // eax
  unsigned int v21; // r10d
  _DWORD *v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // r14
  __int64 v25; // rcx
  _DWORD *v26; // rbx
  __int64 v27; // rdi
  __int16 v28; // ax
  bool v29; // zf
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v31; // r15d
  __int64 v32; // rcx
  _BYTE *v33; // rsi
  struct DMMVIDPNTOPOLOGY *v34; // r13
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  __int64 v38; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // edx
  _DWORD *v40; // rdi
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  unsigned int v48; // r13d
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  __int64 v58; // rax
  struct DMMVIDPNTARGETMODESET *v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdi
  __int64 v67; // rcx
  int v68; // edx
  VIDPN_MGR *v69; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v70; // eax
  _QWORD *v71; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  __int64 v73; // rdx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  __int64 v75; // rdx
  __int64 v76; // rbx
  int IsMonitorVirtualModeDisabled; // eax
  char v78; // al
  bool v79; // r15
  int v80; // edi
  unsigned __int64 *v81; // rbx
  unsigned __int64 v82; // rdx
  int v83; // ecx
  int v84; // eax
  _DWORD *v85; // rcx
  __int64 v86; // rbx
  int v87; // eax
  int v88; // eax
  int v89; // r10d
  __int64 v90; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v91; // ecx
  char IsSecondaryHardwareClonePath; // al
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // r15
  unsigned int v97; // edx
  unsigned int v98; // r8d
  bool v99; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v100; // edx
  __int64 v101; // r10
  int v102; // edi
  int v103; // eax
  __int64 v104; // r13
  __int64 v105; // rdx
  char v106; // al
  __int64 v107; // rdx
  __int64 v108; // r8
  char v109; // bl
  char v110; // r15
  __int64 v111; // r13
  DXGMONITOR *v112; // rbx
  int v113; // r15d
  int LinkInfo; // eax
  __int64 v115; // rbx
  int IsAdvancedColorEnabled; // eax
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v118; // rdx
  char v119; // cl
  unsigned int v120; // r14d
  __int64 v121; // rbx
  char v122; // al
  unsigned __int8 *v123; // rdx
  unsigned int v124; // edi
  unsigned int v125; // r15d
  unsigned int v126; // r8d
  char v127; // r14
  __int64 v128; // r9
  DXGMONITOR *v129; // rbx
  unsigned int v130; // r13d
  unsigned int v131; // eax
  _QWORD *v132; // rax
  __int64 v133; // rdx
  unsigned int v134; // r13d
  __int64 v135; // r15
  DXGMONITOR *v136; // rax
  __int64 v137; // rcx
  struct DMMVIDPNSOURCEMODESET *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // r14
  __int64 v141; // rcx
  __int64 v142; // rcx
  int v143; // eax
  ADAPTER_DISPLAY *v144; // rcx
  DMMVIDPNTARGETMODESET *v145; // rax
  struct _D3DDDI_RATIONAL v146; // rdx
  __int64 v147; // rcx
  struct DMMVIDPNTARGETMODESET *v148; // rbx
  __int64 v149; // rcx
  __int64 v150; // rdi
  int v151; // eax
  struct _D3DDDI_RATIONAL *v152; // rcx
  __int16 v153; // ax
  __int64 v154; // r8
  unsigned int i; // r9d
  __int64 v156; // r10
  unsigned int v157; // eax
  __int64 v158; // r11
  __int64 v159; // r10
  unsigned int v160; // eax
  __int64 v161; // r11
  __int64 v162; // r10
  struct DMMVIDPNSOURCEMODESET *v163; // [rsp+20h] [rbp-A1h]
  char v164; // [rsp+50h] [rbp-71h] BYREF
  char v165[7]; // [rsp+51h] [rbp-70h] BYREF
  __int64 v166; // [rsp+58h] [rbp-69h] BYREF
  __int64 v167; // [rsp+60h] [rbp-61h] BYREF
  DXGMONITOR *v168; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v169; // [rsp+70h] [rbp-51h]
  unsigned int v170; // [rsp+78h] [rbp-49h]
  VIDPN_MGR *v171; // [rsp+80h] [rbp-41h]
  __int64 v172; // [rsp+88h] [rbp-39h] BYREF
  ADAPTER_DISPLAY *v173; // [rsp+90h] [rbp-31h]
  struct DMMVIDPNTARGETMODESET *v174; // [rsp+98h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v175; // [rsp+A0h] [rbp-21h]
  _DXGK_MONITORLINKINFO v176; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v177; // [rsp+110h] [rbp+4Fh] BYREF
  __int64 v178; // [rsp+118h] [rbp+57h]
  UINT v179; // [rsp+120h] [rbp+5Fh] BYREF
  __int16 v180; // [rsp+128h] [rbp+67h]

  v180 = a4;
  v178 = a2;
  v9 = a2;
  v10 = a4;
  v11 = operator new[](120LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, 256LL);
  *a1 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(6LL, a3, *(unsigned __int16 *)(a3 + 20));
    return 3221225626LL;
  }
  v13 = *(VIDPN_MGR **)(v9 + 48);
  v171 = v13;
  if ( !*((_QWORD *)v13 + 1) )
    WdLogSingleEntry0(1LL);
  v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 1);
  v173 = v14;
  v15 = *((_QWORD *)v14 + 2);
  v172 = v15;
  v16 = *(_QWORD *)(v15 + 2920);
  if ( *(_BYTE *)(v16 + 289) && *(_BYTE *)(v16 + 290)
    || (v17 = *(_QWORD *)(v15 + 216),
        LOBYTE(v179) = 0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 64) + 40LL) + 28LL) >= 0x4003u) )
  {
    LOBYTE(v179) = 1;
  }
  if ( *(_QWORD *)(v15 + 2928) )
  {
    *(_DWORD *)(*a1 + 8) &= ~1u;
    *(_DWORD *)(*a1 + 8) &= ~4u;
    *(_DWORD *)(*a1 + 8) &= ~8u;
  }
  else
  {
    *(_DWORD *)(*a1 + 8) ^= (*(_DWORD *)(*a1 + 8) ^ ADAPTER_DISPLAY::GetDisplayOnlyDriverUseSmallestMode(v14)) & 1;
    *(_DWORD *)(*a1 + 8) = ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(v14) != 0 ? 4 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFFB;
    *(_DWORD *)(*a1 + 8) = ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(v14) != 0 ? 8 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFF7;
  }
  v18 = ADAPTER_DISPLAY::ForceIHVScaling(v14);
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(v19 + 8) & 0xFFFFFFFD | (v18 != 0 ? 2 : 0);
  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(v14);
  v22 = (_DWORD *)*a1;
  v23 = v21;
  v170 = PreferredHdrPixelFormat;
  v22[2] &= 0xFu;
  *(_BYTE *)*a1 = v21;
  *(_DWORD *)(*a1 + 4) = a7;
  if ( (unsigned __int16)v21 < *(_WORD *)(a3 + 20) )
  {
    do
    {
      v24 = 296LL * v23 + a3 + 56;
      v25 = *(_QWORD *)v24;
      if ( (*(_QWORD *)v24 & 0x4000000000000LL) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v25 = *(_QWORD *)v24;
        v21 = 0;
      }
      if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(v15 + 404) && *(_DWORD *)(v24 + 20) == *(_DWORD *)(v15 + 408) )
      {
        if ( (v25 & 0x700000000000LL) != 0x700000000000LL )
        {
          WdLogSingleEntry2(2LL, v23, a3);
          return 3221225485LL;
        }
        v26 = (_DWORD *)*a1;
        v27 = 30LL * *(unsigned __int8 *)*a1;
        v28 = a5;
        *(_QWORD *)&v26[v27 + 13] = 0LL;
        HIWORD(v26[v27 + 17]) = v28;
        v29 = a6 == 2;
        *(_QWORD *)&v26[v27 + 4] = v24;
        LOWORD(v26[v27 + 8]) = v23;
        LOWORD(v26[v27 + 16]) = v21;
        LOWORD(v26[v27 + 17]) = v21;
        HIWORD(v26[v27 + 16]) = v10;
        v26[v27 + 15] = v21;
        v26[v27 + 31] = v21;
        *(_OWORD *)&v26[v27 + 18] = 0LL;
        *(_OWORD *)&v26[v27 + 22] = 0LL;
        v26[v27 + 26] = 0;
        if ( v29 )
        {
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v173, *(_DWORD *)(v24 + 24));
          v21 = 0;
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            LOBYTE(v26[v27 + 33]) |= 1u;
        }
        else
        {
          v31 = v21;
          if ( (unsigned __int16)v21 < *(_WORD *)(a3 + 20) )
          {
            do
            {
              v32 = 296LL * v31;
              v177 = v32;
              if ( (*(_QWORD *)(v32 + a3 + 56) & 0x4000000000000LL) == 0 )
              {
                WdLogSingleEntry0(1LL);
                v32 = v177;
              }
              if ( v31 != v23 && *(_DWORD *)(v32 + a3 + 240) == *(_DWORD *)(v24 + 184) )
                LOBYTE(v26[v27 + 33]) |= 1u;
              ++v31;
            }
            while ( v31 < *(unsigned __int16 *)(a3 + 20) );
            v21 = 0;
          }
          v10 = v180;
        }
        v15 = v172;
        ++*(_BYTE *)*a1;
      }
      ++v23;
    }
    while ( v23 < *(unsigned __int16 *)(a3 + 20) );
    v9 = v178;
  }
  v33 = (_BYTE *)*a1;
  v34 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v175 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  v35 = v21;
  LOBYTE(v36) = *v33;
  if ( *v33 )
  {
    do
    {
      v37 = v35 + 1;
      v38 = v35;
      v39 = v35 + 1;
      if ( (int)(v35 + 1) > 32 )
      {
        WdLogSingleEntry2(1LL, v33, v35);
        v39 = 32;
      }
      v40 = (_DWORD *)*a1;
      v41 = 120 * v38;
      v42 = VIDPN_MGR::AddPathToVidPnTopology(
              v171,
              v34,
              *(_DWORD *)(*(_QWORD *)(v41 + *a1 + 16) + 24LL),
              *(_DWORD *)(*(_QWORD *)(v41 + *a1 + 16) + 28LL),
              v39,
              *(_WORD *)(v41 + *a1 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v21 = 0;
      v47 = v42;
      if ( v42 < 0 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
        v71[3] = *(unsigned int *)(*(_QWORD *)&v40[(unsigned __int64)v41 / 4 + 4] + 24LL);
        v71[4] = *(unsigned int *)(*(_QWORD *)&v40[(unsigned __int64)v41 / 4 + 4] + 28LL);
        v71[5] = v34;
        v71[6] = v47;
        return (unsigned int)v47;
      }
      v33 = (_BYTE *)*a1;
      v35 = v37;
      v36 = *(unsigned __int8 *)*a1;
    }
    while ( v37 < v36 );
  }
  LOBYTE(v177) = v21;
  v48 = v21;
  LODWORD(v169) = v21;
  if ( !(_BYTE)v36 )
    goto LABEL_167;
  do
  {
    v49 = v48;
    v50 = 120LL * v48;
    v166 = v48;
    if ( !_bittest64(*(const signed __int64 **)&v33[v50 + 16], 0x32u) )
      WdLogSingleEntry0(1LL);
    v51 = *(_QWORD *)&v33[v50 + 16];
    Path = DMMVIDPNTOPOLOGY::FindPath(v175, *(_DWORD *)(v51 + 24), *(_DWORD *)(v51 + 28));
    if ( *(_BYTE *)(v51 + 129) )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v52, v55, v56);
      v57[3] = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 24LL);
      v57[4] = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL);
      v57[5] = *(int *)(*(_QWORD *)&v33[v50 + 16] + 20LL);
      v57[6] = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 16LL);
      v58 = *(_QWORD *)&v33[v50 + 16];
      if ( (*(_QWORD *)v58 & 0x20000LL) == 0
        && (((unsigned __int8)~BYTE1(*(_QWORD *)v58) ^ (unsigned __int8)~(*(_DWORD *)(v58 + 8) >> 8)) & 1) != 0 )
      {
        WdLogSingleEntry1(1LL, 4347LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"((pPathInfo->pPathModality->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0) == ((pPathIn"
                    "fo->pPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0)",
          4347LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v59 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v60 = *a1;
    v174 = v59;
    v61 = BmlFillPreferredMonitorMode(v60, v48, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    v66 = v61;
    if ( v61 < 0 )
    {
      v132 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v62, v64, v65);
      v132[3] = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 24LL);
      v133 = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL);
      v132[5] = v175;
      v132[4] = v133;
      v132[6] = v66;
      *(_DWORD *)(*a1 + v50 + 52) = 0;
      *(_DWORD *)(*a1 + v50 + 56) = 0;
      goto LABEL_179;
    }
    v67 = *(_QWORD *)&v33[v50 + 16];
    if ( !_bittest64((const signed __int64 *)v67, 0x2Au) )
    {
LABEL_62:
      v69 = v171;
      goto LABEL_63;
    }
    v68 = *(_DWORD *)(v67 + 136);
    if ( v68 == 1 || v68 == 2 || v68 == 3 || v68 == 4 || v68 == 5 )
    {
      v69 = v171;
      *(_DWORD *)&v33[v50 + 24] = v68;
    }
    else
    {
      if ( v68 == 253 )
        goto LABEL_62;
      v69 = v171;
      if ( v68 == 255 )
      {
        if ( *(int *)(*((_QWORD *)v173 + 2) + 2820LL) < 1105 )
        {
          AdapterDefaultScaling = D3DKMDT_VPPS_NOTSPECIFIED;
LABEL_64:
          *(_DWORD *)&v33[v50 + 24] = AdapterDefaultScaling;
          goto LABEL_65;
        }
LABEL_63:
        AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v69);
        goto LABEL_64;
      }
      v70 = VIDPN_MGR::GetAdapterDefaultScaling(v171);
      *(_DWORD *)&v33[v50 + 24] = v70;
      WdLogSingleEntry4(3LL, v70, *a1, v48, *(int *)(*(_QWORD *)&v33[v50 + 16] + 136LL));
    }
LABEL_65:
    if ( !_bittest64(*(const signed __int64 **)&v33[v50 + 16], 0x2Fu)
      || !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)&v33[v50 + 16] + 88LL))
      || (*(_DWORD *)(v73 + 8) & 0x200LL) != 0 )
    {
      goto LABEL_94;
    }
    PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v69, *(_DWORD *)(v73 + 28));
    v75 = *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL);
    if ( (_DWORD)v75 == -1 )
      goto LABEL_176;
    v76 = *(_QWORD *)(v172 + 2920);
    if ( !v76 )
    {
      WdLogSingleEntry1(2LL, 9698LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The selected adapter is render-only",
        9698LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_176:
      LODWORD(v66) = -1073741811;
LABEL_177:
      WdLogSingleEntry3(
        2LL,
        *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL),
        *(int *)(*(_QWORD *)&v33[v50 + 16] + 20LL),
        *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 16LL));
LABEL_179:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v174, 0LL);
      return (unsigned int)v66;
    }
    v164 = 0;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v172, v75, &v164);
    v66 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled == -1073741632 )
    {
      v78 = 0;
      LODWORD(v66) = 0;
    }
    else
    {
      if ( IsMonitorVirtualModeDisabled < 0 )
      {
        WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
          v66,
          0LL,
          0LL,
          0LL,
          0LL);
        v79 = v177;
        goto LABEL_78;
      }
      v78 = v164;
    }
    if ( v78 )
      v79 = 1;
    else
      v79 = *(_BYTE *)(v76 + 289) == 0;
LABEL_78:
    if ( (int)v66 < 0 )
      goto LABEL_177;
    if ( PathFromTargetInClientVidPn )
    {
      if ( !v79 )
      {
        v80 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
        goto LABEL_86;
      }
      LOBYTE(v177) = v79;
    }
    else
    {
      LOBYTE(v177) = v79;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 339) )
      {
        v80 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 339);
LABEL_86:
        LOBYTE(v177) = v79;
        if ( v80 )
        {
          v81 = *(unsigned __int64 **)&v33[v50 + 16];
          v82 = *v81;
          if ( (*v81 & 0x200) != 0 )
          {
            if ( ((*((_BYTE *)v81 + 132) ^ (unsigned __int8)v80) & 1) != 0 && (v82 & 0x20000) != 0 )
            {
              v83 = *((_DWORD *)v81 + 38);
              v84 = *((_DWORD *)v81 + 39);
              *v81 = v82 & 0xFFFFFFFFFF7FFFFFuLL;
              *((_DWORD *)v81 + 38) = v84;
              *((_DWORD *)v81 + 39) = v83;
            }
          }
          else if ( (v82 & 0x20000) != 0 )
          {
            WdLogSingleEntry0(1LL);
          }
          *v81 |= 0x200uLL;
          *((_DWORD *)v81 + 33) = v80;
          *(_DWORD *)&v33[v50 + 28] = v80;
          LOBYTE(v177) = v79;
          goto LABEL_125;
        }
      }
    }
    v49 = v166;
    v48 = v169;
LABEL_94:
    v85 = *(_DWORD **)&v33[v50 + 16];
    if ( (*v85 & 0x200LL) == 0 )
    {
      v94 = *a1;
      v95 = *a1;
      LODWORD(v166) = 0;
      if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(v95, v48, &v166) )
      {
        v96 = 120LL * (unsigned int)v166;
        LODWORD(v86) = *(_DWORD *)(v96 + v94 + 28);
        if ( !(_DWORD)v86 )
          WdLogSingleEntry0(1LL);
        if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v86) != 1 )
          WdLogSingleEntry0(1LL);
        if ( (_BYTE)v179 )
        {
          v97 = *(_DWORD *)(v94 + v50 + 52);
          v98 = *(_DWORD *)(v94 + v50 + 56);
          if ( *(_DWORD *)(v96 + v94 + 52) < *(_DWORD *)(v96 + v94 + 56) != v97 < v98 )
          {
            v99 = v97 < v98;
            v100 = D3DKMDT_VPPR_ROTATE270;
            if ( !v99 )
              v100 = D3DKMDT_VPPR_ROTATE90;
            LODWORD(v86) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                             (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v86,
                             v100);
          }
        }
        if ( !(_DWORD)v86 )
          WdLogSingleEntry0(1LL);
      }
      else
      {
        LODWORD(v86) = 1;
      }
      goto LABEL_124;
    }
    v86 = (int)v85[33];
    v87 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v85[33]) - 1;
    if ( v87 )
    {
      v88 = v87 - 1;
      if ( v88 )
      {
        if ( (unsigned int)(v88 - 1) >= 2 )
        {
LABEL_98:
          WdLogSingleEntry3(3LL, *a1, v49, v86);
          *(_DWORD *)&v33[v50 + 28] = 1;
          goto LABEL_125;
        }
      }
    }
    if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v86) == 1 )
    {
      LODWORD(v166) = v89;
      if ( (_BYTE)v179 != (_BYTE)v89 )
      {
        v90 = *a1;
        if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v48, &v166) )
        {
          v91 = *(_DWORD *)(*(_QWORD *)(120LL * (unsigned int)v166 + v90 + 16) + 132LL);
          if ( (unsigned int)(v91 - 1) > 0xF || (unsigned int)(v86 - 1) > 0xF )
            LODWORD(v86) = 255;
          else
            LODWORD(v86) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                             v91,
                             (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)(((int)v86 - v91 + 4) % 4 + 1));
        }
      }
LABEL_124:
      *(_DWORD *)&v33[v50 + 28] = v86;
      goto LABEL_125;
    }
    if ( (_BYTE)v179 == (_BYTE)v89 )
      goto LABEL_98;
    IsSecondaryHardwareClonePath = BmlIsSecondaryHardwareClonePath(*a1, v48, 0LL);
    v93 = *(_QWORD *)&v33[v50 + 16];
    if ( IsSecondaryHardwareClonePath )
    {
      *(_DWORD *)&v33[v50 + 28] = *(_DWORD *)(v93 + 132);
    }
    else
    {
      WdLogSingleEntry3(1LL, *a1, v49, *(int *)(v93 + 132));
      *(_DWORD *)&v33[v50 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(*(_QWORD *)&v33[v50 + 16] + 132LL));
    }
LABEL_125:
    v101 = *(_QWORD *)&v33[v50 + 16];
    v102 = 0;
    if ( *(_BYTE *)(v101 + 129) && (*(_DWORD *)v101 & 0x20000LL) != 0 )
    {
      if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)&v33[v50 + 28]) - 2) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)&v33[v50 + 108] = *(_DWORD *)(v101 + 152);
        v103 = *(_DWORD *)(v101 + 156);
      }
      else
      {
        *(_DWORD *)&v33[v50 + 108] = *(_DWORD *)(v101 + 156);
        v103 = *(_DWORD *)(v101 + 152);
      }
      *(_DWORD *)&v33[v50 + 112] = v103;
      v33[v50 + 124] |= 1u;
    }
    v104 = v172;
    v105 = *(unsigned int *)(v101 + 28);
    v164 = 0;
    if ( (int)MonitorIsBoostRefreshRateEnabledByDefault(v172, v105, &v164) >= 0 )
    {
      v106 = v164;
    }
    else
    {
      WdLogSingleEntry3(
        2LL,
        *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL),
        *(int *)(*(_QWORD *)&v33[v50 + 16] + 20LL),
        *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 16LL));
      v106 = 0;
    }
    v107 = (unsigned int)v169;
    *(_DWORD *)&v33[v50 + 128] = (v106 != 0) | *(_DWORD *)&v33[v50 + 128] & 0xFFFFFFFE;
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v107, 0LL) )
      *(_WORD *)&v33[v50 + 66] = 0;
    LODWORD(v166) = 0;
    v109 = 0;
    v164 = 0;
    v110 = 0;
    v165[0] = 0;
    v167 = 0LL;
    LOBYTE(v108) = 1;
    if ( (int)MonitorGetMonitorHandle(
                v104,
                *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL),
                v108,
                BmlPreparePathOrderAndVidPn,
                &v167) >= 0 )
    {
      v111 = v167;
      if ( v167 )
      {
        MONITOR_MGR::AcquireMonitorShared(&v168, v167);
        v112 = v168;
        if ( !v168 )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v168);
          v113 = -1073741275;
          goto LABEL_147;
        }
        *(_QWORD *)&v176.UsageHints.0 = 0LL;
        v176.DitheringSupport.Value = 0;
        LinkInfo = DXGMONITOR::_GetLinkInfo(v168, &v176);
        v113 = LinkInfo;
        if ( LinkInfo == -1073741275 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v168);
          goto LABEL_142;
        }
        if ( LinkInfo < 0 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v168);
          goto LABEL_147;
        }
        DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
          *((DxgMonitor::MonitorColorState **)v112 + 28),
          &v176,
          (union MONITOR_AND_LINK_HDR_CAPS *)&v166);
        ExReleaseResourceLite((PERESOURCE)((char *)v112 + 24));
        KeLeaveCriticalRegion();
        v102 = v166;
LABEL_142:
        v115 = v178;
      }
      else
      {
        v113 = -1073741811;
LABEL_147:
        v102 = 0;
        LODWORD(v166) = 0;
        v115 = v178;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL), v178, v113);
      }
      IsAdvancedColorEnabled = MonitorIsAdvancedColorEnabled(v111, v165);
      if ( IsAdvancedColorEnabled >= 0 )
      {
        v110 = v165[0];
      }
      else
      {
        v110 = 0;
        v165[0] = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL), v115, IsAdvancedColorEnabled);
      }
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v111, &v164);
      if ( IsMonitorAndDriverWCGCapable >= 0 )
      {
        v109 = v164;
      }
      else
      {
        v109 = 0;
        v164 = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&v33[v50 + 16] + 28LL), v178, IsMonitorAndDriverWCGCapable);
      }
      v118 = v111;
      v104 = v172;
      MonitorReleaseMonitorHandle(v172, v118, BmlPreparePathOrderAndVidPn);
    }
    v119 = v33[v50 + 132];
    *(_DWORD *)&v33[v50 + 116] = v102;
    v33[v50 + 132] = (v109 != 0 ? 4 : 0) | (v110 != 0 ? 2 : 0) | v119 & 0xF9;
    *(_DWORD *)&v33[v50 + 120] = 0;
    v167 = (unsigned int)Feature_SmoothHDRDisplayModeChange__private_featureState;
    if ( (Feature_SmoothHDRDisplayModeChange__private_featureState & 0x10) == 0 )
    {
      LODWORD(v167) = Feature_SmoothHDRDisplayModeChange__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_SmoothHDRDisplayModeChange__private_descriptor,
        v167,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v167,
        3,
        (__int64)&Feature_SmoothHDRDisplayModeChange__private_descriptor);
    }
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                         *(ADAPTER_DISPLAY **)(v104 + 2920),
                         *(_DWORD *)(*(_QWORD *)&v33[v50 + 16] + 24LL)) == 1
      && (v33[v50 + 132] & 1) == 0
      && v165[0] )
    {
      if ( (v166 & 1) != 0 )
      {
        *(_DWORD *)&v33[v50 + 120] = v170;
      }
      else if ( v164 && v170 == 2 )
      {
        *(_DWORD *)&v33[v50 + 120] = 2;
      }
    }
    v33[v50 + 132] = v33[v50 + 132] & 0xF7 | (*(_DWORD *)&v33[v50 + 120] != 0 ? 8 : 0);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v174, 0LL);
    v33 = (_BYTE *)*a1;
    v48 = v169 + 1;
    LODWORD(v169) = v48;
    v36 = (unsigned __int8)*v33;
  }
  while ( v48 < v36 );
  v21 = 0;
LABEL_167:
  LODWORD(v166) = v21;
  v120 = v21;
  if ( (_BYTE)v36 )
  {
    do
    {
      v121 = 120LL * v120;
      v167 = v121;
      v122 = BmlIsSecondaryHardwareClonePath(v33, v120, 0LL);
      v21 = 0;
      if ( !v122 )
      {
        v123 = (unsigned __int8 *)*a1;
        v124 = 0;
        v168 = 0LL;
        v125 = 0;
        v126 = v120;
        v170 = v120;
        if ( v120 < *v123 )
        {
          v127 = v179;
          do
          {
            v128 = 120LL * v126;
            if ( *(_DWORD *)(*(_QWORD *)&v123[v128 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v33[v121 + 16] + 24LL) )
            {
              v129 = *(DXGMONITOR **)&v123[v128 + 44];
              v169 = (unsigned __int64)v129;
              if ( !v127
                || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)&v123[v128 + 28]) - 2) & 0xFFFFFFFD) != 0 )
              {
                v130 = HIDWORD(v169);
                v131 = v169;
              }
              else
              {
                v130 = v169;
                v131 = HIDWORD(v169);
                v169 = __PAIR64__(v169, HIDWORD(v169));
                v129 = (DXGMONITOR *)v169;
              }
              LODWORD(v177) = v131;
              if ( !v131 || !v130 )
              {
                WdLogSingleEntry0(1LL);
                v131 = v177;
                v126 = v170;
              }
              if ( v124 && v125 )
              {
                v121 = v167;
                if ( v124 > v131 )
                  v124 = v131;
                LODWORD(v168) = v124;
                if ( v125 > v130 )
                {
                  v125 = v130;
                  HIDWORD(v168) = v130;
                }
              }
              else
              {
                v168 = v129;
                v124 = (unsigned int)v129;
                v125 = HIDWORD(v129);
                v121 = v167;
              }
            }
            v123 = (unsigned __int8 *)*a1;
            v170 = ++v126;
          }
          while ( v126 < *v123 );
          v120 = v166;
        }
        *(_QWORD *)&v33[v121 + 36] = v168;
        *(_DWORD *)&v33[v121 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v33[v121 + 52]);
        v21 = 0;
      }
      v33 = (_BYTE *)*a1;
      LODWORD(v166) = ++v120;
      v36 = (unsigned __int8)*v33;
    }
    while ( v120 < v36 );
  }
  v134 = v21;
  if ( !(_BYTE)v36 )
    return 0LL;
  while ( 2 )
  {
    v135 = 120LL * v134;
    v167 = v134;
    v173 = DMMVIDPNTOPOLOGY::FindPath(
             v175,
             *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 28LL));
    v136 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v173 + 11));
    v137 = *(_QWORD *)&v33[v135 + 16];
    v138 = v136;
    v168 = v136;
    v139 = *(_QWORD *)(v137 + 8);
    if ( (v139 & 0x18001820B8FLL) == 0 )
      goto LABEL_214;
    if ( (*(_DWORD *)v137 & 0x100LL) == 0
      || (v139 & 0x100) == 0
      || (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v134, 0LL) )
    {
      WdLogSingleEntry2(3LL, *a1, v134);
LABEL_214:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v173) )
      {
        v154 = *a1;
        for ( i = 0; i < *(unsigned __int8 *)*a1; ++i )
        {
          v156 = 120LL * i;
          if ( *(_DWORD *)(*(_QWORD *)(v156 + v154 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 24LL) )
            *(_WORD *)(v156 + v154 + 66) = 0;
          v154 = *a1;
        }
        *(_WORD *)&v33[v135 + 70] = 0;
      }
LABEL_220:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v168, 0LL);
      v33 = (_BYTE *)*a1;
      if ( ++v134 >= *(unsigned __int8 *)*a1 )
        return 0LL;
      continue;
    }
    break;
  }
  v140 = v178;
  v141 = *a1;
  LODWORD(v177) = -1;
  if ( (int)BmlGetNextBestSourceMode(v141, v178, (unsigned __int16)v134, (_DWORD)v138, -1, (__int64)&v177) < 0 )
  {
    v142 = *(_QWORD *)&v33[v135 + 16];
    if ( !_bittest64((const signed __int64 *)v142, 0x36u) )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v142 + 96),
        *(_DWORD *)(v142 + 100),
        *(_DWORD *)(v142 + 116),
        *(_QWORD *)(v142 + 16));
      WdLogSingleEntry4(3LL, *a1, v140, v134, (unsigned int)v177);
      LODWORD(v140) = -1071774970;
      goto LABEL_227;
    }
    *(_QWORD *)(v142 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
    goto LABEL_220;
  }
  v143 = VIDPN_MGR::PinVidPnSourceMode(v171, v138, v177, 1);
  v140 = v143;
  if ( v143 >= 0 )
  {
    v144 = v173;
    *(_WORD *)&v33[v135 + 66] = 0;
    v145 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v144 + 12));
    v147 = *(_QWORD *)&v33[v135 + 16];
    v148 = v145;
    v172 = (__int64)v145;
    if ( (*(_BYTE *)v147 & 0x87) != 0x87
      || (*(_BYTE *)(v147 + 8) & 0x87) != 0x87
      || *(_DWORD *)(v147 + 56) == v146.Numerator
      || *(_DWORD *)(v147 + 52) == v146.Numerator )
    {
      v153 = -1;
    }
    else
    {
      v149 = *a1;
      LODWORD(v177) = -1;
      v174 = (struct DMMVIDPNTARGETMODESET *)v146;
      v163 = v138;
      v150 = v178;
      v179 = 1;
      if ( (int)BmlGetNextBestTargetMode(
                  v149,
                  v178,
                  (unsigned __int16)v134,
                  v145,
                  v163,
                  0xFFFFFFFF,
                  &v177,
                  (struct _D3DDDI_RATIONAL *)&v174,
                  (int *)&v179) < 0 )
      {
        v160 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v33[v135 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v33[v135 + 16] + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v161 + 44), *(_DWORD *)(v161 + 48), v160, v162);
        WdLogSingleEntry3(3LL, *a1, v150, v167);
        LODWORD(v140) = -1071774970;
        goto LABEL_225;
      }
      v151 = VIDPN_MGR::PinVidPnTargetMode(v171, v148, v177, 1);
      v140 = v151;
      if ( v151 < 0 )
      {
        v157 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v33[v135 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v33[v135 + 16] + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v158 + 44), *(_DWORD *)(v158 + 48), v157, v159);
        WdLogSingleEntry4(3LL, v140, *a1, v150, v167);
LABEL_225:
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v172, 0LL);
        goto LABEL_227;
      }
      v152 = (struct _D3DDDI_RATIONAL *)*((_QWORD *)v148 + 18);
      v152[19] = (struct _D3DDDI_RATIONAL)v174;
      v152[20].Numerator = v179;
      v153 = 0;
    }
    *(_WORD *)&v33[v135 + 70] = v153;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v172, 0LL);
    goto LABEL_214;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 96LL),
    *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 100LL),
    *(_DWORD *)(*(_QWORD *)&v33[v135 + 16] + 116LL),
    *(_QWORD *)(*(_QWORD *)&v33[v135 + 16] + 16LL));
  WdLogSingleEntry4(3LL, v140, *a1, v178, v134);
LABEL_227:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v168, 0LL);
  return (unsigned int)v140;
}
