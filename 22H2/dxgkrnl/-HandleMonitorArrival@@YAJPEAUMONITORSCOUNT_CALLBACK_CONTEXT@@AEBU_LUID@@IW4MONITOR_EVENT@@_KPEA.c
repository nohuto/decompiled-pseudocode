/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02960E8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000A460 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148220 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014887C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0167880 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0295CB8 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0296398 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0296598 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C029666C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0297B84 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0297D20 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02EB2D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02EB6A8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C02EB9D0 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02F0E5C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rdi
  __int64 v8; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct CCD_BTL *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // rax
  __int16 v34; // cx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  _QWORD *v39; // rax
  unsigned __int8 v40; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v41; // ebx
  __int64 v42; // rdx
  int v43; // r12d
  __int64 v44; // rax
  unsigned int v45; // edx
  int Persisted; // r14d
  __int64 v47; // rbx
  char v48; // r12
  unsigned int i; // ebx
  __int64 v50; // rdx
  __int64 PathsCount; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // r14
  _QWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  unsigned int v77; // edx
  unsigned int v78; // r8d
  unsigned int v79; // r9d
  __int64 v80; // rdx
  __int64 v81; // rcx
  struct CCD_BTL *v82; // rax
  unsigned __int8 v83; // bl
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v84; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v85; // rax
  __int64 v86; // r8
  unsigned __int8 IsPortraitFirstTarget; // al
  char v88; // al
  unsigned __int16 v89; // ax
  __int64 v90; // rdx
  __int16 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rcx
  unsigned __int16 v96; // dx
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned int j; // ebx
  __int64 v104; // rcx
  unsigned __int16 v105; // ax
  __int16 v106; // r14
  unsigned __int16 v107; // r14
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  unsigned int v117; // ebx
  char v118; // al
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v123; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v124; // rax
  __int64 v125; // rcx
  __int128 v126; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v127; // r14
  __int64 v128; // rdx
  bool v129; // zf
  __int64 v130; // rcx
  __int64 v131; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v132; // rax
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  int v142; // eax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  int v147; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r14
  __int64 v151; // rax
  int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rbx
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  unsigned __int8 v158[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v159[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v160; // [rsp+60h] [rbp-A8h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-A4h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v162[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v163; // [rsp+70h] [rbp-98h]
  unsigned int v164[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v165; // [rsp+80h] [rbp-88h]
  _BYTE v166[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v167; // [rsp+C8h] [rbp-40h]
  int v168; // [rsp+D4h] [rbp-34h]
  int v169; // [rsp+D8h] [rbp-30h]
  _BYTE v170[96]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v171[64]; // [rsp+148h] [rbp+40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v172; // [rsp+188h] [rbp+80h]

  v6 = (int)a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v11 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6, a4);
  v15 = v6;
  v163 = v6;
  v16 = v11;
  v165 = v8;
  v17 = v8;
  if ( v11 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v18[3] = v16;
    v18[4] = a2->HighPart;
    v18[5] = a2->LowPart;
    v18[6] = v8;
    v18[7] = v6;
    WdLogEvent5_WdError(v18);
  }
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v65 = a5;
    goto LABEL_146;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v166, 8u, 0);
  v21 = CCD_BTL::Global(v20, v19);
  v22 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v166, (struct CCD_BTL *)((char *)v21 + 8));
  v25 = v22;
  if ( v22 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v26[3] = v25;
    v26[4] = a2->HighPart;
    v26[5] = a2->LowPart;
    v26[6] = v8;
    v26[7] = v6;
    WdLogEvent5_WdError(v26);
    v27 = 0;
    v28 = v25;
    v29 = 62;
LABEL_11:
    DxgkLogCodePointPacket(v29, v27, v28, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
LABEL_17:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v166);
    return 0LL;
  }
  v31 = *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 442);
  if ( v31 > 1 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, 1LL, v32);
    *(_QWORD *)(v33 + 24) = 3514LL;
    WdLogEvent5_WdWarning(v33);
    v28 = 1;
    v27 = v31;
    v29 = 82;
    goto LABEL_11;
  }
  if ( v167 )
    v34 = *(_WORD *)(v167 + 20);
  else
    v34 = 0;
  if ( !v34 )
  {
    DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    goto LABEL_17;
  }
  v158[2] = 1;
  v162[0] = D3DKMDT_VOT_HD15;
  v160 = D3DKMDT_VOT_HD15;
  v162[1] = D3DKMDT_VOT_HD15;
  v158[3] = 0;
  v159[0] = 0;
  v158[1] = 0;
  v35 = QueryMonitorType(
          a2,
          v8,
          (enum _DMM_VIDPN_MONITOR_TYPE *)v162,
          &v160,
          &v162[1],
          &v158[3],
          &v158[2],
          v159,
          &v158[1]);
  v38 = v35;
  if ( v35 >= 0 )
  {
    v41 = v162[0];
    v40 = v158[1];
  }
  else
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
    v39[3] = v38;
    v39[4] = a2->HighPart;
    v39[5] = a2->LowPart;
    v39[6] = v8;
    v39[7] = v6;
    WdLogEvent5_WdError(v39);
    v40 = 0;
    v160 = D3DKMDT_VOT_UNINITIALIZED;
    v41 = D3DKMDT_VOT_HD15;
    v158[1] = 0;
    v162[0] = D3DKMDT_VOT_HD15;
    v158[3] = 0;
    v158[2] = 0;
    v159[0] = 0;
  }
  v158[0] = v40;
  LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                             (const struct CCD_TOPOLOGY *)v166,
                             a2,
                             v8,
                             v160,
                             (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
  v43 = LaptopSpecialCaseFlags;
  if ( LaptopSpecialCaseFlags )
  {
    if ( LaptopSpecialCaseFlags == 1 )
    {
      *(_BYTE *)(a1 + 27) = 1;
    }
    else if ( LaptopSpecialCaseFlags == 8 )
    {
      *(_BYTE *)(a1 + 28) = 1;
    }
    else
    {
      v44 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1), v42);
      *(_QWORD *)(v44 + 24) = 3592LL;
      WdLogEvent5_WdAssertion(v44);
    }
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v171, 8u, 0);
  if ( v43 && v41 == D3DKMDT_VOT_SVIDEO )
    v45 = v43 | 0x86;
  else
    v45 = 143;
  Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v171, v45, 0LL);
  LODWORD(v47) = Persisted;
  if ( Persisted < 0 )
    goto LABEL_50;
  if ( v162[1] == D3DKMDT_VOT_MIRACAST )
  {
    v48 = 0;
    for ( i = 0; ; ++i )
    {
      PathsCount = (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v171);
      if ( i >= (unsigned int)PathsCount )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v171, i);
      if ( *((_DWORD *)PathDescriptor + 7) == a3 && *((_DWORD *)PathDescriptor + 4) == a2->LowPart )
      {
        PathsCount = (unsigned int)a2->HighPart;
        if ( *((_DWORD *)PathDescriptor + 5) == (_DWORD)PathsCount )
        {
          v48 = 1;
          break;
        }
      }
    }
    LODWORD(v47) = Persisted;
    if ( !v48 )
    {
      v53 = WdLogNewEntry5_WdError(PathsCount, v50);
      *(_QWORD *)(v53 + 24) = 3642LL;
      WdLogEvent5_WdError(v53);
      LODWORD(v47) = -1073741823;
    }
    v43 = LaptopSpecialCaseFlags;
  }
  if ( !IsValidCloneConfiguration(v172) )
  {
    v56 = WdLogNewEntry5_WdError(v55, v54);
    *(_QWORD *)(v56 + 24) = 3652LL;
    WdLogEvent5_WdError(v56);
    LODWORD(v47) = -1073741823;
  }
  if ( (int)v47 < 0 )
  {
LABEL_50:
    v61 = v163;
  }
  else
  {
    v57 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v171, 0LL);
    v47 = v57;
    if ( v57 >= 0 )
    {
      v61 = v163;
    }
    else
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
      v61 = v163;
      v60[3] = v47;
      v60[4] = a2->HighPart;
      v60[5] = a2->LowPart;
      v60[6] = v165;
      v60[7] = v61;
      WdLogEvent5_WdError(v60);
      DxgkLogCodePointPacket(0x3Eu, 2u, v47, 0, (__int64)*a2);
    }
    *(_DWORD *)(a1 + 32) |= 0x40u;
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v171);
  if ( (int)v47 < 0 )
  {
    if ( (_DWORD)v47 == -1073741266 )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_143;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, v62);
    v66[3] = (int)v47;
    v66[4] = a2->HighPart;
    v66[5] = a2->LowPart;
    v66[6] = v165;
    v66[7] = v61;
    WdLogEvent5_WdEvent(v66);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v170, 8u, 0);
    v67 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v170, (const struct CCD_TOPOLOGY *)v166);
    v70 = v67;
    if ( v67 < 0 )
    {
      v71 = WdLogNewEntry5_WdError(v69, v68);
      *(_QWORD *)(v71 + 32) = v166;
      *(_QWORD *)(v71 + 24) = v70;
      WdLogEvent5_WdError(v71);
      v72 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v166, 0LL);
      v75 = v72;
      if ( v72 < 0 )
      {
        v76 = WdLogNewEntry5_WdError(v74, v73);
        *(_QWORD *)(v76 + 32) = v166;
        *(_QWORD *)(v76 + 24) = v75;
        WdLogEvent5_WdError(v76);
      }
      v77 = 3;
      goto LABEL_58;
    }
    v164[0] = 0;
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v166, a2, a3, v164) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v166, v164[0]);
    if ( v167 )
      v81 = *(unsigned __int16 *)(v167 + 20);
    else
      v81 = 0LL;
    if ( !(_WORD)v81 )
    {
      v82 = CCD_BTL::Global(v81, v80);
      CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v82 + 8));
      goto LABEL_141;
    }
    v83 = v158[0];
    v88 = 0;
    if ( !v158[0] && !v158[2] )
    {
      if ( v158[3]
        || (v84 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL),
            v85 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(
                                      *(struct _LUID *)((char *)v85 + 16),
                                      *((_DWORD *)v84 + 7),
                                      v86),
            v83 = 0,
            IsPortraitFirstTarget) )
      {
        v88 = 1;
      }
    }
    v159[1] = v88;
    v89 = DetermineDefaultTopology(v43, v88);
    v91 = v89;
    if ( v89 == 3 )
    {
      if ( v83 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL) + 5) )
      {
        if ( !v83 )
        {
          v164[1] = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL) + 6);
          goto LABEL_102;
        }
      }
      else
      {
        v91 = 4;
      }
    }
    else if ( (unsigned __int16)(v89 - 4) > 1u )
    {
      v92 = WdLogNewEntry5_WdAssertion((unsigned int)v89 - 4, v90);
      *(_QWORD *)(v92 + 24) = 3795LL;
      WdLogEvent5_WdAssertion(v92);
    }
    v164[1] = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v166, a2);
    if ( v164[1] == 16 )
    {
      v95 = WdLogNewEntry5_WdEvent(v94, v93);
      if ( v167 )
        v96 = *(_WORD *)(v167 + 20);
      else
        v96 = 0;
      *(_QWORD *)(v95 + 24) = v96;
      *(_QWORD *)(v95 + 32) = 16LL;
      WdLogEvent5_WdEvent(v95);
      v97 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v170, 0LL);
      v100 = v97;
      if ( v97 < 0 )
      {
        v101 = WdLogNewEntry5_WdError(v99, v98);
        *(_QWORD *)(v101 + 32) = v170;
        *(_QWORD *)(v101 + 24) = v100;
        WdLogEvent5_WdError(v101);
      }
      v79 = 0;
      v78 = v100;
      v77 = 4;
      goto LABEL_60;
    }
    if ( v91 == 3 )
    {
      if ( !v83 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v94, v93);
        *(_QWORD *)(v102 + 24) = 3872LL;
        WdLogEvent5_WdAssertion(v102);
      }
      for ( j = 0; ; ++j )
      {
        v104 = v167;
        v105 = v167 ? *(_WORD *)(v167 + 20) : 0;
        if ( j >= v105 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, j) + 129) )
        {
          v91 = 4;
          goto LABEL_102;
        }
      }
      goto LABEL_103;
    }
LABEL_102:
    v104 = v167;
LABEL_103:
    if ( v104 )
      v106 = *(_WORD *)(v104 + 20);
    else
      v106 = 0;
    v107 = v106 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v166, v107) < v107 )
    {
      v112 = WdLogNewEntry5_WdLowResource(v109, v108, v110, v111);
      *(_QWORD *)(v112 + 24) = v107;
      WdLogEvent5_WdLowResource(v112);
      v113 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v170, 0LL);
      v75 = v113;
      if ( v113 < 0 )
      {
        v116 = WdLogNewEntry5_WdError(v115, v114);
        *(_QWORD *)(v116 + 32) = v170;
        *(_QWORD *)(v116 + 24) = v75;
        WdLogEvent5_WdError(v116);
      }
      v78 = v107;
      v77 = 5;
      goto LABEL_59;
    }
    v117 = v107 - 1;
    if ( !v158[0] )
    {
      v118 = LaptopSpecialCaseFlags;
      if ( LaptopSpecialCaseFlags )
      {
        if ( v107 != 2 )
        {
          v119 = WdLogNewEntry5_WdAssertion(1LL, 2LL);
          *(_QWORD *)(v119 + 24) = 3935LL;
          WdLogEvent5_WdAssertion(v119);
          v118 = LaptopSpecialCaseFlags;
        }
        if ( v159[1] )
          v117 = !IsInternalVideoOutput(v160);
        else
          v117 = ((unsigned __int8)~v118 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL) + 28) )
        {
          v122 = WdLogNewEntry5_WdAssertion(v121, v120);
          *(_QWORD *)(v122 + 24) = 3967LL;
          WdLogEvent5_WdAssertion(v122);
        }
        v123 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 0LL);
        v124 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 1LL);
        v125 = 2LL;
        do
        {
          *(_OWORD *)v124 = *(_OWORD *)v123;
          *((_OWORD *)v124 + 1) = *((_OWORD *)v123 + 1);
          *((_OWORD *)v124 + 2) = *((_OWORD *)v123 + 2);
          *((_OWORD *)v124 + 3) = *((_OWORD *)v123 + 3);
          *((_OWORD *)v124 + 4) = *((_OWORD *)v123 + 4);
          *((_OWORD *)v124 + 5) = *((_OWORD *)v123 + 5);
          *((_OWORD *)v124 + 6) = *((_OWORD *)v123 + 6);
          v124 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v124 + 128);
          v126 = *((_OWORD *)v123 + 7);
          v123 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v123 + 128);
          *((_OWORD *)v124 - 1) = v126;
          --v125;
        }
        while ( v125 );
        *(_OWORD *)v124 = *(_OWORD *)v123;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, 1 - v117) = 0xCF00000000000LL;
      }
    }
    v127 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, v117);
    *((struct _LUID *)v127 + 2) = *a2;
    LOBYTE(v128) = v158[0] != 0 ? 2 : 0;
    v129 = v159[0] == 0;
    *((_DWORD *)v127 + 6) = v164[1];
    *((_DWORD *)v127 + 7) = a3;
    *((_DWORD *)v127 + 22) = v160;
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v127 + 23) = v162[1];
    *((_BYTE *)v127 + 129) = v128 | !v129;
    *(_QWORD *)v127 = 0x8F00000000000LL;
    ++*(_WORD *)(v167 + 20);
    if ( v91 == 3 )
    {
      if ( v167 )
        v130 = *(unsigned __int16 *)(v167 + 20);
      else
        v130 = 0LL;
      if ( (_WORD)v130 != 2 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v130, v128);
        *(_QWORD *)(v131 + 24) = 4008LL;
        WdLogEvent5_WdAssertion(v131);
      }
      v132 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v166, v117 == 0);
      v133 = *((_QWORD *)v132 + 19);
      *(_QWORD *)v127 |= 0x20000uLL;
      *((_QWORD *)v127 + 19) = v133;
      *((_DWORD *)v127 + 46) = *((_DWORD *)v132 + 46);
      *(_QWORD *)v127 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v166, v117);
    }
    v168 = 1;
    v169 = 4;
    v134 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v166, 0, 0);
    v70 = v134;
    if ( v134 >= 0 )
    {
      v142 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v166, 1LL);
      v145 = v142;
      if ( v142 == -1073741266 )
      {
        v79 = 0;
        v78 = -1073741266;
        v77 = 7;
      }
      else
      {
        if ( v142 >= 0 )
        {
          *(_BYTE *)(a1 + 31) = 0;
          goto LABEL_141;
        }
        v146 = WdLogNewEntry5_WdError(v144, v143);
        *(_QWORD *)(v146 + 24) = v145;
        *(_QWORD *)(v146 + 32) = v167;
        WdLogEvent5_WdError(v146);
        v147 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v170, 0LL);
        v150 = v147;
        if ( v147 < 0 )
        {
          v151 = WdLogNewEntry5_WdError(v149, v148);
          *(_QWORD *)(v151 + 32) = v170;
          *(_QWORD *)(v151 + 24) = v150;
          WdLogEvent5_WdError(v151);
        }
        v79 = v150;
        v78 = v145;
        v77 = 8;
      }
      goto LABEL_60;
    }
    v137 = WdLogNewEntry5_WdError(v136, v135);
    *(_QWORD *)(v137 + 24) = v70;
    *(_QWORD *)(v137 + 32) = v167;
    WdLogEvent5_WdError(v137);
    v138 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v170, 0LL);
    v75 = v138;
    if ( v138 < 0 )
    {
      v141 = WdLogNewEntry5_WdError(v140, v139);
      *(_QWORD *)(v141 + 32) = v170;
      *(_QWORD *)(v141 + 24) = v75;
      WdLogEvent5_WdError(v141);
    }
    v77 = 6;
LABEL_58:
    v78 = v70;
LABEL_59:
    v79 = v75;
LABEL_60:
    DxgkLogCodePointPacket(0x3Eu, v77, v78, v79, (__int64)*a2);
LABEL_141:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v170);
LABEL_143:
    v65 = a5;
    v17 = v165;
    v15 = v163;
    goto LABEL_144;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, v62);
  v17 = v165;
  v15 = v163;
  v65 = a5;
  v64[3] = a2->HighPart;
  v64[4] = a2->LowPart;
  v64[5] = v17;
  v64[6] = v15;
  v64[7] = a5;
  WdLogEvent5_WdEvent(v64);
LABEL_144:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v166);
LABEL_146:
  v152 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6, v14);
  v155 = v152;
  if ( v152 < 0 )
  {
    v156 = (_QWORD *)WdLogNewEntry5_WdError(v154, v153);
    v156[3] = v155;
    v156[4] = a2->HighPart;
    v156[5] = a2->LowPart;
    v156[6] = v17;
    v156[7] = v15;
    WdLogEvent5_WdError(v156);
    LODWORD(v155) = 0;
  }
  v157 = (_QWORD *)WdLogNewEntry5_WdEvent(v154, v153);
  v157[3] = a2->HighPart;
  v157[4] = a2->LowPart;
  v157[5] = v17;
  v157[6] = v15;
  v157[7] = v65;
  WdLogEvent5_WdEvent(v157);
  return (unsigned int)v155;
}
