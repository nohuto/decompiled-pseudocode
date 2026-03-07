__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  int v11; // eax
  __int64 v12; // r12
  int *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rbx
  struct CCD_BTL *v16; // rax
  int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  unsigned __int8 v23; // al
  int v24; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v25; // r14d
  unsigned int v26; // edx
  __int64 v27; // r14
  unsigned int i; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // r15
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // r14
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  unsigned int v42; // edx
  unsigned __int8 v43; // bl
  unsigned int v44; // ebx
  struct _LUID *v45; // rax
  __int64 v46; // r8
  char IsPortraitFirstTarget; // al
  char v48; // r12
  __int16 v49; // r15
  int UnusedVidpnSourceId; // eax
  __int64 v51; // r9
  __int64 v52; // r8
  unsigned __int16 v53; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // r14
  unsigned int j; // ebx
  __int64 v60; // rcx
  unsigned __int16 v61; // ax
  __int16 v62; // r14
  unsigned __int16 v63; // r14
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // eax
  __int64 v67; // r15
  unsigned int v68; // ebx
  char v69; // al
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v70; // rax
  __int64 v71; // rdx
  _OWORD *v72; // rcx
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int64 v82; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v83; // rcx
  __int64 v84; // rdx
  _OWORD *v85; // rax
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int64 v95; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v96; // rax
  __int64 v97; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v98; // r14
  bool v99; // cf
  bool v100; // zf
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v101; // rax
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // r9
  int v108; // eax
  __int64 v109; // r15
  int v110; // eax
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // r15
  struct CCD_BTL *v115; // rax
  int v116; // eax
  __int64 v117; // rbx
  unsigned __int8 v118[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v119; // [rsp+60h] [rbp-A8h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v120; // [rsp+68h] [rbp-A0h] BYREF
  int v121; // [rsp+6Ch] [rbp-9Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v122[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v123; // [rsp+78h] [rbp-90h]
  unsigned int v124; // [rsp+80h] [rbp-88h] BYREF
  int v125; // [rsp+84h] [rbp-84h]
  int *v126; // [rsp+88h] [rbp-80h]
  struct D3DKMT_GETPATHSMODALITY *v127[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v128; // [rsp+D8h] [rbp-30h]
  int v129; // [rsp+E4h] [rbp-24h]
  int v130; // [rsp+E8h] [rbp-20h]
  struct D3DKMT_GETPATHSMODALITY *v131[14]; // [rsp+108h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v132[14]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v133[304]; // [rsp+1E8h] [rbp+E0h] BYREF

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v11 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v12 = v8;
  v123 = v8;
  v119 = v6;
  v13 = (int *)a2 + 1;
  v14 = v6;
  v126 = (int *)a2 + 1;
  if ( v11 >= 0 )
  {
    v126 = (int *)a2 + 1;
  }
  else
  {
    v15 = v11;
    WdLogSingleEntry5(2LL, v11, *v13, *(unsigned int *)a2, v8, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence invariance. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_"
                "IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v15,
      *v13,
      *(unsigned int *)a2,
      v8,
      v14);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v127, 8u, 0);
    v16 = CCD_BTL::Global();
    v17 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v127, (struct CCD_BTL *)((char *)v16 + 8));
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry5(2LL, v17, *v13, *(unsigned int *)a2, v8, v119);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Inco"
                  "mingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v18,
        *v13,
        *(unsigned int *)a2,
        v8,
        v119);
      DxgkLogCodePointPacket(0x3Eu, 0, v18, 0, *a2);
LABEL_12:
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
LABEL_141:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v127);
      return 0LL;
    }
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 478);
    if ( v19 > 1 )
    {
      WdLogSingleEntry1(3LL, 3539LL);
      DxgkLogCodePointPacket(0x52u, v19, 1u, 0, *a2);
      goto LABEL_12;
    }
    if ( !v128 || !*(_WORD *)(v128 + 20) )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, *a2);
      *(_BYTE *)(a1 + 26) = 1;
      goto LABEL_141;
    }
    v121 = 0;
    v120 = D3DKMDT_VOT_HD15;
    v122[1] = D3DKMDT_VOT_HD15;
    v118[4] = 0;
    v118[3] = 1;
    v118[6] = 0;
    v118[1] = 0;
    v118[2] = 0;
    v20 = QueryMonitorType(
            (const struct _LUID *)a2,
            a3,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v121,
            &v120,
            &v122[1],
            &v118[4],
            &v118[3],
            &v118[6],
            &v118[1],
            &v118[2]);
    if ( v20 >= 0 )
    {
      v24 = v121;
      v23 = v118[1];
      v118[5] = v118[2];
    }
    else
    {
      v21 = v119;
      v22 = v20;
      WdLogSingleEntry5(2LL, v20, *v13, *(unsigned int *)a2, v8, v119);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to query monitor type - assumed DMM_VMT_UNINITIALIZED. (_NtStatus = 0x%I64x, i_AdapterLuid = 0x%"
                  "I64x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v22,
        *v13,
        *(unsigned int *)a2,
        v8,
        v21);
      v23 = 0;
      v120 = D3DKMDT_VOT_UNINITIALIZED;
      v24 = 0;
      v118[1] = 0;
      v121 = 0;
      v118[4] = 0;
      v118[3] = 0;
      v118[6] = 0;
      v118[5] = 0;
      v118[2] = 0;
    }
    v118[0] = v23;
    v122[0] = GetLaptopSpecialCaseFlags(
                (const struct CCD_TOPOLOGY *)v127,
                (const struct _LUID *)a2,
                a3,
                v120,
                (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v25 = v122[0];
    if ( v122[0] )
    {
      if ( v122[0] == D3DKMDT_VOT_SVIDEO )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else if ( v122[0] == D3DKMDT_VOT_D_JPN )
      {
        *(_BYTE *)(a1 + 28) = 1;
      }
      else
      {
        WdLogSingleEntry1(1LL, 3620LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid laptop special case flags!",
          3620LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v132, 8u, 0);
    if ( v25 && v24 == 1 )
      v26 = v25 | 0x86;
    else
      v26 = 143;
    LODWORD(v27) = CCD_TOPOLOGY::RetrievePersisted(v132, v26, 0LL);
    if ( (int)v27 >= 0 )
    {
      if ( v122[1] == D3DKMDT_VOT_MIRACAST )
      {
        for ( i = 0; i < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v132); ++i )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v132, i);
          if ( *((_DWORD *)PathDescriptor + 7) == a3
            && *((_DWORD *)PathDescriptor + 4) == *(_DWORD *)a2
            && *((_DWORD *)PathDescriptor + 5) == *v13 )
          {
            goto LABEL_37;
          }
        }
        WdLogSingleEntry1(2LL, 3670LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miracast monitor was not active in CCD database so adding as new monitor",
          3670LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v27) = -1073741823;
      }
LABEL_37:
      if ( IsValidCloneConfiguration(v132[8]) )
      {
        if ( (int)v27 >= 0 )
        {
          v32 = CCD_TOPOLOGY::Persist(v132, 0LL, v30, v31);
          v27 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry5(2LL, v32, *v13, *(unsigned int *)a2, v123, v119);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to persist most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_In"
                        "comingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
              v27,
              *v13,
              *(unsigned int *)a2,
              v123,
              v119);
            DxgkLogCodePointPacket(0x3Eu, 2u, v27, 0, *a2);
          }
          *(_DWORD *)(a1 + 32) |= 0x40u;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 3680LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The persisted topology requires cross-adapter clone support however it does not support Virtual Mode."
                    " Therefore the new monitor will be added in extend mode.",
          3680LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v27) = -1073741823;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v132);
    if ( (int)v27 >= 0 )
    {
      v12 = v123;
      v14 = v119;
      WdLogSingleEntry5(4LL, *v13, *(unsigned int *)a2, v123, v119, a5);
LABEL_136:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v127);
      goto LABEL_137;
    }
    if ( (_DWORD)v27 == -1073741266 )
    {
      v14 = v119;
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_135;
    }
    v33 = (int)v27;
    v14 = v119;
    WdLogSingleEntry5(4LL, v33, *v13, *(unsigned int *)a2, v123, v119);
    if ( a6 )
      *((_BYTE *)a6 + 49) = 1;
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v131, 8u, 0);
    v34 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v131, (const struct CCD_TOPOLOGY *)v127);
    v35 = v34;
    if ( v34 < 0 )
    {
      WdLogSingleEntry2(2LL, v34, v127);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to create copy of io_pNewTopologySet - will keep current topology. (NtStatus = 0x%I64x, io_pNewT"
                  "opologySet = 0x%I64x)",
        v35,
        (__int64)v127,
        0LL,
        0LL,
        0LL);
      v38 = CCD_TOPOLOGY::Persist(v127, 0LL, v36, v37);
      v39 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry2(2LL, v38, v127);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, io_"
                    "pNewTopologySet = 0x%I64x)",
          v39,
          (__int64)v127,
          0LL,
          0LL,
          0LL);
      }
      v40 = v39;
      v41 = v35;
      v42 = 3;
      goto LABEL_52;
    }
    v124 = 0;
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v127, (const struct _LUID *)a2, a3, &v124) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v127, v124);
    if ( !v128 || !*(_WORD *)(v128 + 20) )
    {
      v115 = CCD_BTL::Global();
      CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v115 + 8));
      goto LABEL_133;
    }
    v43 = v118[0];
    v48 = 0;
    if ( !v118[0] && !v118[3] )
    {
      if ( v118[4]
        || (v44 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0) + 7),
            v45 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v45[2], v44, v46),
            v43 = 0,
            IsPortraitFirstTarget) )
      {
        v48 = 1;
      }
    }
    v49 = DetermineDefaultTopology(v122[0], v48);
    if ( v49 == 3 )
    {
      if ( v43 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0) + 129)
        || *(_DWORD *)a2 == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0) + 4)
        && (v54 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0), *v126 == *((_DWORD *)v54 + 5)) )
      {
        if ( !v43 )
        {
          v125 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0) + 6);
          goto LABEL_93;
        }
      }
      else
      {
        v49 = 4;
      }
    }
    else if ( (unsigned __int16)(v49 - 4) > 1u )
    {
      WdLogSingleEntry1(1LL, 3828LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(defaultTopology == MultiScreenDefaultShellTopology::Cloned) || (defaultTopology == MultiScreenDefaultS"
                  "hellTopology::Conjoined) || (defaultTopology == MultiScreenDefaultShellTopology::Disjoint)",
        3828LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v127, (const struct _LUID *)a2);
    v52 = 16LL;
    v125 = UnusedVidpnSourceId;
    if ( UnusedVidpnSourceId == 16 )
    {
      if ( v128 )
        v53 = *(_WORD *)(v128 + 20);
      else
        v53 = 0;
      WdLogSingleEntry2(4LL, v53, 16LL);
      v57 = CCD_TOPOLOGY::Persist(v131, 0LL, v55, v56);
      v58 = v57;
      if ( v57 < 0 )
      {
        WdLogSingleEntry2(2LL, v57, v131);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Or"
                    "iginalTopologySet = 0x%I64x)",
          v58,
          (__int64)v131,
          0LL,
          0LL,
          0LL);
      }
      v40 = 0;
      v42 = 4;
      goto LABEL_81;
    }
    if ( v49 == 3 )
    {
      if ( !v43 )
      {
        WdLogSingleEntry1(1LL, 3905LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IncomingTargetSupportsVirtualTopologies",
          3905LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      for ( j = 0; ; ++j )
      {
        v60 = v128;
        v61 = v128 ? *(_WORD *)(v128 + 20) : 0;
        if ( j >= v61 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, j) + 129) )
        {
          v49 = 4;
          goto LABEL_93;
        }
      }
LABEL_94:
      if ( v60 )
        v62 = *(_WORD *)(v60 + 20);
      else
        v62 = 0;
      v63 = v62 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v127, v63, v52, v51) < v63 )
      {
        WdLogSingleEntry1(6LL, v63);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate 0x%I64x paths for newly added monitor topology - will keep current topology. (NumP"
                    "athsToReserve = 0x%I64u)",
          v63,
          0LL,
          0LL,
          0LL,
          0LL);
        v66 = CCD_TOPOLOGY::Persist(v131, 0LL, v64, v65);
        v67 = v66;
        if ( v66 < 0 )
        {
          WdLogSingleEntry2(2LL, v66, v131);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v67,
            (__int64)v131,
            0LL,
            0LL,
            0LL);
        }
        v41 = v63;
        v40 = v67;
        v42 = 5;
        goto LABEL_52;
      }
      v68 = v63 - 1;
      if ( !v118[0] )
      {
        v69 = v122[0];
        if ( v122[0] )
        {
          if ( v63 != 2 )
          {
            WdLogSingleEntry1(1LL, 3968LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumPathsToReserve == 2", 3968LL, 0LL, 0LL, 0LL, 0LL);
            v69 = v122[0];
          }
          if ( v48 )
            v68 = !IsInternalVideoOutput(v120);
          else
            v68 = ((unsigned __int8)~v69 >> 3) & 1;
          if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0) + 31) )
          {
            WdLogSingleEntry1(1LL, 4000LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"io_pNewTopologySet->GetPathDescriptor(0)->pDevMode == NULL",
              4000LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v70 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 0);
          v71 = 2LL;
          v72 = v133;
          do
          {
            v73 = *((_OWORD *)v70 + 1);
            *v72 = *(_OWORD *)v70;
            v74 = *((_OWORD *)v70 + 2);
            v72[1] = v73;
            v75 = *((_OWORD *)v70 + 3);
            v72[2] = v74;
            v76 = *((_OWORD *)v70 + 4);
            v72[3] = v75;
            v77 = *((_OWORD *)v70 + 5);
            v72[4] = v76;
            v78 = *((_OWORD *)v70 + 6);
            v72[5] = v77;
            v79 = *((_OWORD *)v70 + 7);
            v70 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v70 + 128);
            v72[6] = v78;
            v72 += 8;
            *(v72 - 1) = v79;
            --v71;
          }
          while ( v71 );
          v80 = *(_OWORD *)v70;
          v81 = *((_OWORD *)v70 + 1);
          v82 = *((_QWORD *)v70 + 4);
          *v72 = v80;
          v72[1] = v81;
          *((_QWORD *)v72 + 4) = v82;
          v83 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 1u);
          v84 = 2LL;
          v85 = v133;
          do
          {
            v86 = v85[1];
            *(_OWORD *)v83 = *v85;
            v87 = v85[2];
            *((_OWORD *)v83 + 1) = v86;
            v88 = v85[3];
            *((_OWORD *)v83 + 2) = v87;
            v89 = v85[4];
            *((_OWORD *)v83 + 3) = v88;
            v90 = v85[5];
            *((_OWORD *)v83 + 4) = v89;
            v91 = v85[6];
            *((_OWORD *)v83 + 5) = v90;
            v92 = v85[7];
            v85 += 8;
            *((_OWORD *)v83 + 6) = v91;
            v83 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v83 + 128);
            *((_OWORD *)v83 - 1) = v92;
            --v84;
          }
          while ( v84 );
          v93 = *v85;
          v94 = v85[1];
          v95 = *((_QWORD *)v85 + 4);
          *(_OWORD *)v83 = v93;
          *((_OWORD *)v83 + 1) = v94;
          *((_QWORD *)v83 + 4) = v95;
          *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, 1 - v68) = 0xCF00000000000LL;
        }
      }
      v96 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, v68);
      v97 = *a2;
      v98 = v96;
      v99 = v118[5] != 0;
      v118[5] = -v118[5];
      *((_QWORD *)v96 + 2) = v97;
      *((_DWORD *)v96 + 6) = v125;
      *((_DWORD *)v96 + 7) = a3;
      v100 = v118[6] == 0;
      *((_DWORD *)v96 + 22) = v120;
      *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v96 + 23) = v122[1];
      *((_BYTE *)v96 + 129) = (v99 ? 4 : 0) | (v118[0] != 0 ? 2 : 0) | !v100;
      *(_QWORD *)v96 = 0x8F00000000000LL;
      ++*(_WORD *)(v128 + 20);
      if ( v49 == 3 )
      {
        if ( !v128 || *(_WORD *)(v128 + 20) != 2 )
        {
          WdLogSingleEntry1(1LL, 4042LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"io_pNewTopologySet->GetPathsCount() == 2",
            4042LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v101 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v127, v68 == 0);
        v102 = *((_QWORD *)v101 + 19);
        *(_QWORD *)v98 |= 0x20000uLL;
        *((_QWORD *)v98 + 19) = v102;
        *((_DWORD *)v98 + 46) = *((_DWORD *)v101 + 46);
        *(_QWORD *)v98 |= 0x4000000000000uLL;
      }
      else
      {
        CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v127, v68);
      }
      v129 = 1;
      v130 = 4;
      v103 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v127, 0, 0);
      v58 = v103;
      if ( v103 >= 0 )
      {
        v110 = CCD_TOPOLOGY::Persist(v127, 1LL, v104, v105);
        v58 = v110;
        if ( v110 == -1073741266 )
        {
          v40 = 0;
          v41 = -1073741266;
          v42 = 7;
          goto LABEL_52;
        }
        if ( v110 >= 0 )
        {
          *(_BYTE *)(a1 + 31) = 0;
          goto LABEL_53;
        }
        WdLogSingleEntry2(2LL, v110, v128);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist the newly created topology for newly added monitor - will keep current topology. (N"
                    "tStatus = 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
          v58,
          v128,
          0LL,
          0LL,
          0LL);
        v113 = CCD_TOPOLOGY::Persist(v131, 0LL, v111, v112);
        v114 = v113;
        if ( v113 < 0 )
        {
          WdLogSingleEntry2(2LL, v113, v131);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v114,
            (__int64)v131,
            0LL,
            0LL,
            0LL);
        }
        v40 = v114;
        v42 = 8;
      }
      else
      {
        WdLogSingleEntry2(2LL, v103, v128);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to functionalize topology with newly added monitor - will keep current topology. (NtStatus = 0"
                    "x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
          v58,
          v128,
          0LL,
          0LL,
          0LL);
        v108 = CCD_TOPOLOGY::Persist(v131, 0LL, v106, v107);
        v109 = v108;
        if ( v108 < 0 )
        {
          WdLogSingleEntry2(2LL, v108, v131);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v109,
            (__int64)v131,
            0LL,
            0LL,
            0LL);
        }
        v40 = v109;
        v42 = 6;
      }
LABEL_81:
      v41 = v58;
LABEL_52:
      DxgkLogCodePointPacket(0x3Eu, v42, v41, v40, *a2);
LABEL_53:
      v14 = v119;
LABEL_133:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v131);
      v13 = v126;
LABEL_135:
      v12 = v123;
      goto LABEL_136;
    }
LABEL_93:
    v60 = v128;
    goto LABEL_94;
  }
LABEL_137:
  v116 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v117 = v116;
  if ( v116 < 0 )
  {
    WdLogSingleEntry5(2LL, v116, *v13, *(unsigned int *)a2, v12, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence/emergency-monitors invariance.(NtStatus = 0x%I64x, i_AdapterLuid = "
                "0x%I64x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v117,
      *v13,
      *(unsigned int *)a2,
      v12,
      v14);
    LODWORD(v117) = 0;
  }
  WdLogSingleEntry5(4LL, *v13, *(unsigned int *)a2, v12, v14, a5);
  return (unsigned int)v117;
}
