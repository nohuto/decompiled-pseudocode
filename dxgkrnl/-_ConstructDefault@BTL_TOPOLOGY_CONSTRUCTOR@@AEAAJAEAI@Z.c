/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03BD220
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C03BBD8C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C0009568 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01BAF14 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01BD5E8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DB31C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C02CE070 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03B78B0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C03B7A88 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1C03BBCD4 (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03BC994 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03BD140 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03BD824 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03BD860 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BD904 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BD994 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BDA54 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03BDAAC (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  DXGPROCESS *Current; // rax
  struct CCD_BTL *v11; // rax
  unsigned int v12; // r14d
  unsigned __int16 v13; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v15; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm1
  unsigned int v19; // r15d
  unsigned int j; // r15d
  unsigned int v21; // r14d
  unsigned int v22; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // r15
  __int64 v24; // rcx
  unsigned int v25; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  CCD_TOPOLOGY *v27; // rcx
  int v28; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // r14
  bool *v30; // r12
  bool *v31; // rdi
  const struct _LUID *v32; // r15
  int IsVirtualizationDisabledForTarget; // eax
  bool v34; // cl
  __int16 v35; // dx
  bool v36; // zf
  bool v37; // al
  int v38; // eax
  __int64 v39; // rax
  CCD_TOPOLOGY *v40; // rcx
  __int64 v41; // r15
  int v42; // esi
  __int64 v43; // r14
  int v44; // eax
  CCD_TOPOLOGY *v45; // rcx
  int v46; // esi
  int v47; // eax
  CCD_TOPOLOGY *v48; // rcx
  int v50; // [rsp+40h] [rbp-89h]
  __int128 v51; // [rsp+48h] [rbp-81h]
  __int128 v52; // [rsp+58h] [rbp-71h]
  __int128 v53; // [rsp+68h] [rbp-61h]
  _BYTE v54[64]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-9h]
  __int64 i; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 v57; // [rsp+140h] [rbp+77h]
  int v58; // [rsp+148h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304536)
    || (v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), v6 < 0) )
  {
    v50 = *((_DWORD *)this + 15);
    v51 = *(_OWORD *)((char *)this + 12);
    v52 = *(_OWORD *)((char *)this + 28);
    v53 = *(_OWORD *)((char *)this + 44);
    v57 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v58 = v57;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v54, 8u, 0);
    Current = DXGPROCESS::GetCurrent(v9);
    if ( !DXGPROCESS::IsRemoteConnection(Current) )
    {
      v11 = CCD_BTL::Global();
      if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v54, (struct CCD_BTL *)((char *)v11 + 8)) < 0 )
        goto LABEL_54;
    }
    v12 = 0;
    *a2 = 0;
    while ( 1 )
    {
      v13 = v55 ? *(_WORD *)(v55 + 20) : 0;
      if ( v12 >= v13 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v54, v12);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((_DWORD *)PathDescriptor + 7),
                  0,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v15 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v12 != v15 )
        {
          v16 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v54, v15);
          v17 = 2LL;
          do
          {
            *(_OWORD *)v16 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v16 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v16 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v16 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v16 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v16 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v16 + 6) = *((_OWORD *)PathDescriptor + 6);
            v16 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v16 + 128);
            v18 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v16 - 1) = v18;
            --v17;
          }
          while ( v17 );
          *(_OWORD *)v16 = *(_OWORD *)PathDescriptor;
          *((_OWORD *)v16 + 1) = *((_OWORD *)PathDescriptor + 1);
          *((_QWORD *)v16 + 4) = *((_QWORD *)PathDescriptor + 4);
        }
        ++*a2;
        ++v12;
      }
      else
      {
        v19 = 0;
        for ( i = (__int64)v54; v19 < *a2; ++v19 )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v19);
        for ( j = ++v12; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v54); ++j )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
      }
    }
    v21 = *a2;
    *(_WORD *)(v55 + 20) = *(_WORD *)a2;
    if ( v21 )
    {
      v22 = v21 - 1;
      do
      {
        v23 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v54, v22);
        v24 = *(_QWORD *)v23;
        if ( (*(_QWORD *)v23 & 0x4000000000000LL) != 0 )
        {
          v25 = 0;
          while ( 1 )
          {
            v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v54, v25);
            if ( _bittest64((const signed __int64 *)v26, 0x32u) )
            {
              if ( *((_DWORD *)v23 + 46) == *((_DWORD *)v26 + 46) )
                break;
            }
            if ( ++v25 >= v21 )
              goto LABEL_30;
          }
          *((_DWORD *)v23 + 46) = v25 | 0xFE530000;
        }
        else
        {
          *((_DWORD *)v23 + 46) = v22 | 0xFE530000;
          *(_QWORD *)v23 = v24 | 0x4000000000000LL;
        }
LABEL_30:
        --v22;
        --v21;
      }
      while ( v21 );
    }
    if ( !*a2 || (unsigned __int16)(v58 - 1) <= 1u )
      goto LABEL_54;
    v27 = *(CCD_TOPOLOGY **)this;
    *((_WORD *)this + 4) = *(_WORD *)a2;
    v28 = CCD_TOPOLOGY::CopyInheritScope(v27, (const struct CCD_TOPOLOGY *)v54);
    if ( v28 < 0 )
    {
      WdLogSingleEntry1(2LL, v28);
      goto LABEL_54;
    }
    if ( *a2 != 1 )
      v58 = 4;
    v29 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
    v30 = (bool *)this + 60;
    v31 = (bool *)this + 54;
    v32 = (const struct _LUID *)((char *)v29 + 16);
    *(_QWORD *)((char *)this + 12) = *((_QWORD *)v29 + 2);
    *((_DWORD *)this + 5) = *((_DWORD *)v29 + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)v29 + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)v29 + 22);
    *((_DWORD *)this + 8) = *((_DWORD *)v29 + 23);
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)v29 + 16),
                                          *((_DWORD *)v29 + 7),
                                          (int)this + 53,
                                          (int)this + 60,
                                          (__int64)this + 54,
                                          0LL,
                                          0LL,
                                          0LL);
    if ( IsVirtualizationDisabledForTarget >= 0 )
    {
      v34 = *v30;
      v35 = v58;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      v36 = !*v31;
      *v30 = !v34;
      *v31 = v36;
      *((_BYTE *)this + 11) = v35 == 3;
      v37 = v35 == 3 && !v34;
      *((_BYTE *)this + 10) = v37;
      if ( v34 && v35 == 3 )
      {
        *((_BYTE *)this + 10) = 0;
        v38 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0, v32, *((_DWORD *)v29 + 6));
        v6 = v38;
        if ( v38 >= 0 )
        {
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v29 + 22)) )
          {
            v39 = *(_QWORD *)(*(_QWORD *)this + 64LL);
            if ( v39 )
            {
              if ( *(_WORD *)(v39 + 20) >= 2u )
                CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
            }
          }
          goto LABEL_71;
        }
        WdLogSingleEntry5(
          2LL,
          v38,
          *((int *)v29 + 5),
          v32->LowPart,
          *((unsigned int *)v29 + 6),
          *(_QWORD *)(*(_QWORD *)this + 64LL));
LABEL_54:
        v40 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        *(_OWORD *)((char *)this + 12) = v51;
        *a2 = 0;
        *(_OWORD *)((char *)this + 28) = v52;
        *(_OWORD *)((char *)this + 44) = v53;
        *((_DWORD *)this + 15) = v50;
        CCD_TOPOLOGY::Clear(v40);
        v41 = v57;
        v42 = v57;
        switch ( v57 )
        {
          case 1u:
            v44 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            break;
          case 2u:
            v44 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
            break;
          case 3u:
            v44 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
            break;
          default:
            if ( (unsigned int)v57 - 4 >= 2 )
            {
              v43 = v57;
              WdLogSingleEntry1(1LL, v57);
              v6 = -1073741823;
LABEL_65:
              v45 = *(CCD_TOPOLOGY **)this;
              *((_DWORD *)this + 2) = 0;
              CCD_TOPOLOGY::Clear(v45);
              v46 = v42 - 3;
              if ( v46 )
              {
                if ( (unsigned int)(v46 - 1) > 1 )
                {
LABEL_70:
                  WdLogSingleEntry3(3LL, v6, *(_QWORD *)this, v43);
                  v48 = *(CCD_TOPOLOGY **)this;
                  *((_DWORD *)this + 2) = 0;
                  CCD_TOPOLOGY::Clear(v48);
                  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
                  goto LABEL_71;
                }
                v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
              }
              else
              {
                v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
              }
              v6 = v47;
              if ( v47 < 0 )
                goto LABEL_70;
LABEL_71:
              CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v54);
              return (unsigned int)v6;
            }
            v44 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
            break;
        }
        v6 = v44;
        if ( v44 >= 0 )
          goto LABEL_71;
        v43 = v41;
        goto LABEL_65;
      }
      IsVirtualizationDisabledForTarget = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
      v6 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget >= 0 )
        goto LABEL_71;
    }
    WdLogSingleEntry4(
      2LL,
      *((unsigned int *)v29 + 7),
      *((int *)v29 + 5),
      v32->LowPart,
      IsVirtualizationDisabledForTarget);
    goto LABEL_54;
  }
  WdLogNewEntry5_WdTrace(v5, v4, v7, v8);
  return (unsigned int)v6;
}
