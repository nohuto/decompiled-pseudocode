/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EF524
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EDE18 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000A460 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0167880 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0169720 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkIsMonitorConnected @ 0x1C0224820 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02EBD50 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1C02EDD58 (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02EEBF0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EF42C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EFBC4 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EFC00 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFCA8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFD4C (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFE10 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02EFE5C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02F0E5C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int16 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct CCD_BTL *v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // edi
  unsigned __int16 v18; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v20; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  unsigned int v24; // r14d
  unsigned int j; // r14d
  unsigned int v26; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // r15
  __int64 v28; // rcx
  unsigned int v29; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  CCD_TOPOLOGY *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v36; // r14
  bool *v37; // r12
  const struct _LUID *v38; // r15
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  CCD_TOPOLOGY *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r14d
  int v47; // eax
  bool v48; // cl
  __int16 v49; // dx
  bool v50; // zf
  bool v51; // al
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  unsigned __int16 v57; // cx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  CCD_TOPOLOGY *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // eax
  _QWORD *v67; // rax
  CCD_TOPOLOGY *v68; // rcx
  int v70; // [rsp+40h] [rbp-79h]
  __int128 v71; // [rsp+48h] [rbp-71h]
  __int128 v72; // [rsp+58h] [rbp-61h]
  __int128 v73; // [rsp+68h] [rbp-51h]
  _BYTE v74[64]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v75; // [rsp+C0h] [rbp+7h]
  __int64 i; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int16 v77; // [rsp+130h] [rbp+77h]
  int v78; // [rsp+138h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 304368)
    || (LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), (int)v6 < 0) )
  {
    v70 = *((_DWORD *)this + 15);
    v71 = *(_OWORD *)((char *)this + 12);
    v72 = *(_OWORD *)((char *)this + 28);
    v73 = *(_OWORD *)((char *)this + 44);
    v77 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v78 = v77;
    v7 = v77;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v74, 8u, 0);
    Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
    if ( !DXGPROCESS::IsRemoteConnection(Current) )
    {
      v15 = CCD_BTL::Global(v14, v13);
      if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v74, (struct CCD_BTL *)((char *)v15 + 8)) < 0 )
      {
LABEL_46:
        v43 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        *(_OWORD *)((char *)this + 12) = v71;
        *a2 = 0;
        *(_OWORD *)((char *)this + 28) = v72;
        *(_OWORD *)((char *)this + 44) = v73;
        *((_DWORD *)this + 15) = v70;
        CCD_TOPOLOGY::Clear(v43);
        switch ( v7 )
        {
          case 1u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            break;
          case 2u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
            break;
          case 3u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
            break;
          default:
            v46 = v7 - 4;
            if ( v46 > 1 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v45, v44);
              *(_QWORD *)(v61 + 24) = v7;
              WdLogEvent5_WdAssertion(v61);
              LODWORD(v6) = -1073741823;
              goto LABEL_76;
            }
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
            break;
        }
        LODWORD(v6) = v47;
        if ( v47 < 0 )
        {
          v46 = v7 - 4;
LABEL_76:
          v62 = *(CCD_TOPOLOGY **)this;
          *((_DWORD *)this + 2) = 0;
          CCD_TOPOLOGY::Clear(v62);
          if ( v7 == 3 )
          {
            v66 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          }
          else
          {
            if ( v46 > 1 )
              goto LABEL_81;
            v66 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          }
          LODWORD(v6) = v66;
LABEL_81:
          if ( (int)v6 < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63, v65);
            v67[3] = (int)v6;
            v67[4] = *(_QWORD *)this;
            v67[5] = v7;
            WdLogEvent5_WdWarning(v67);
            v68 = *(CCD_TOPOLOGY **)this;
            *((_DWORD *)this + 2) = 0;
            CCD_TOPOLOGY::Clear(v68);
            LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          }
        }
LABEL_83:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v74);
        return (unsigned int)v6;
      }
    }
    v16 = 0;
    *a2 = 0;
    v17 = 0;
    while ( 1 )
    {
      v18 = v75 ? *(_WORD *)(v75 + 20) : 0;
      if ( v16 >= v18 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v16);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((unsigned int *)PathDescriptor + 7),
                  0,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v20 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v16 != v20 )
        {
          v21 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v20);
          v22 = 2LL;
          do
          {
            *(_OWORD *)v21 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v21 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v21 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v21 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v21 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v21 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v21 + 6) = *((_OWORD *)PathDescriptor + 6);
            v21 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v21 + 128);
            v23 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v21 - 1) = v23;
            --v22;
          }
          while ( v22 );
          *(_OWORD *)v21 = *(_OWORD *)PathDescriptor;
          v20 = *a2;
        }
        v17 = v20 + 1;
        *a2 = v20 + 1;
      }
      else
      {
        v24 = 0;
        for ( i = (__int64)v74; v24 < *a2; ++v24 )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v24);
        for ( j = v16 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v74); ++j )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
        v17 = *a2;
      }
      ++v16;
    }
    *(_WORD *)(v75 + 20) = *(_WORD *)a2;
    if ( !v17 )
      goto LABEL_69;
    v26 = v17 - 1;
    do
    {
      v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v26);
      v28 = *(_QWORD *)v27;
      if ( (*(_QWORD *)v27 & 0x4000000000000LL) != 0 )
      {
        v29 = 0;
        while ( 1 )
        {
          v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v29);
          if ( (*(_QWORD *)v30 & 0x4000000000000LL) != 0 && *((_DWORD *)v27 + 46) == *((_DWORD *)v30 + 46) )
            break;
          if ( ++v29 >= v17 )
            goto LABEL_35;
        }
        *((_DWORD *)v27 + 46) = v29 | 0xFE530000;
      }
      else
      {
        *((_DWORD *)v27 + 46) = v26 | 0xFE530000;
        *(_QWORD *)v27 = v28 | 0x4000000000000LL;
      }
LABEL_35:
      --v26;
      --v17;
    }
    while ( v17 );
    if ( *a2 && (unsigned __int16)(v78 - 1) > 1u )
    {
      v31 = *(CCD_TOPOLOGY **)this;
      *((_WORD *)this + 4) = *a2;
      v32 = CCD_TOPOLOGY::CopyInheritScope(v31, (const struct CCD_TOPOLOGY *)v74);
      v6 = v32;
      if ( v32 < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v35 + 24) = v6;
        WdLogEvent5_WdError(v35);
        goto LABEL_45;
      }
      if ( *a2 != 1 )
        v78 = 4;
      v36 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0LL);
      v37 = (bool *)this + 60;
      v38 = (const struct _LUID *)((char *)v36 + 16);
      *(_QWORD *)((char *)this + 12) = *((_QWORD *)v36 + 2);
      *((_DWORD *)this + 5) = *((_DWORD *)v36 + 6);
      *((_DWORD *)this + 6) = *((_DWORD *)v36 + 7);
      *((_DWORD *)this + 7) = *((_DWORD *)v36 + 22);
      *((_DWORD *)this + 8) = *((_DWORD *)v36 + 23);
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)((char *)v36 + 16),
                                            *((unsigned int *)v36 + 7),
                                            (bool *)this + 53,
                                            (bool *)this + 60,
                                            0LL,
                                            0LL,
                                            0LL);
      v6 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
        v42[3] = *((unsigned int *)v36 + 7);
        v42[4] = *((int *)v36 + 5);
        v42[5] = v38->LowPart;
        v42[6] = v6;
        WdLogEvent5_WdError(v42);
LABEL_44:
        v7 = v77;
        goto LABEL_45;
      }
      v48 = *v37;
      v49 = v78;
      v50 = !*v37;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      *v37 = v50;
      *((_BYTE *)this + 11) = v49 == 3;
      v51 = v49 == 3 && !v48;
      *((_BYTE *)this + 10) = v51;
      if ( !v48 || v49 != 3 )
      {
        v58 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
        v6 = v58;
        if ( v58 >= 0 )
          goto LABEL_83;
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59);
        v55[3] = *((unsigned int *)v36 + 7);
        v55[4] = *((int *)v36 + 5);
        v55[5] = v38->LowPart;
        v55[6] = v6;
        goto LABEL_59;
      }
      *((_BYTE *)this + 10) = 0;
      v52 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0LL, v38, *((_DWORD *)v36 + 6));
      v6 = v52;
      if ( v52 < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53);
        v55[3] = v6;
        v55[4] = *((int *)v36 + 5);
        v55[5] = v38->LowPart;
        v55[6] = *((unsigned int *)v36 + 6);
        v55[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
LABEL_59:
        WdLogEvent5_WdError(v55);
        goto LABEL_44;
      }
      if ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v36 + 22)) )
        goto LABEL_44;
      v56 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v56 )
        v57 = *(_WORD *)(v56 + 20);
      else
        v57 = 0;
      if ( v57 >= 2u )
        CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
      v7 = v77;
    }
    else
    {
LABEL_69:
      LODWORD(v6) = -1073741637;
    }
LABEL_45:
    if ( (int)v6 >= 0 )
      goto LABEL_83;
    goto LABEL_46;
  }
  WdLogNewEntry5_WdTrace(v5, v4);
  return (unsigned int)v6;
}
