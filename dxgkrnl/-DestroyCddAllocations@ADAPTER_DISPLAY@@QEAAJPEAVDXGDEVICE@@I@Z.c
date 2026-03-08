/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C62F8
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C6250 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03A9DBC (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01785A8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  PERESOURCE *v11; // rax
  unsigned int v12; // ecx
  PERESOURCE *v13; // r9
  PERESOURCE *v14; // rdx
  PERESOURCE v15; // r9
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rbp
  struct DXGALLOCATION *v20; // r8
  PERESOURCE *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  PERESOURCE v26; // rcx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1203LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      1203LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 500 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[16][500 * v4], v6, v7, v8) )
  {
    if ( (struct _LIST_ENTRY *)*((_QWORD *)DXGPROCESS::GetCurrent(v10) + 7) != this[16][v9 + 3]->SystemResourcesList.Flink[1165].Blink )
    {
      WdLogSingleEntry1(1LL, 1220LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOw"
                  "nedSession().GetEProcessCSRSS()",
        1220LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = this[2];
    if ( *((int *)v11 + 638) < 0x2000 )
      v12 = 1;
    else
      v12 = *((_DWORD *)v11 + 72);
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      if ( v12 )
      {
        v24 = v9 * 8 + 88;
        v25 = v12;
        do
        {
          *(PERESOURCE *)((char *)this[16] + v24) = 0LL;
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      this[16][v9 + 75] = 0LL;
      return 0LL;
    }
    v13 = this[16];
    if ( !v13[v9 + 11] )
    {
LABEL_10:
      v14 = this[16];
      v15 = v14[v9 + 75];
      if ( v15 )
      {
        if ( *((_QWORD *)a2 + 235) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1901) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            (struct DXGRESOURCE *)v15->ExclusiveWaiters,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        }
        else
        {
          v26 = v14[v9 + 77];
          if ( v26 )
          {
            ObfDereferenceObject(v26);
            this[16][v9 + 77] = 0LL;
          }
        }
        this[16][v9 + 75] = 0LL;
      }
      if ( *((_DWORD *)this[2] + 50) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[15], (unsigned int)v4, 0LL, 0LL, 0, 1);
      return 0LL;
    }
    v17 = v9 * 8 + 88;
    if ( v12 )
    {
      v18 = v9 * 8 + 88;
      v19 = v12;
      do
      {
        v20 = *(struct DXGALLOCATION **)((char *)v13 + v18);
        if ( v20 )
        {
          ADAPTER_DISPLAY::DisablePrimaryAllocation((ADAPTER_DISPLAY *)this, a2, v20);
          v13 = this[16];
        }
        v18 += 8LL;
        --v19;
      }
      while ( v19 );
    }
    DXGDEVICE::DestroyAllocationInternal(
      a2,
      0,
      0LL,
      (struct DXGRESOURCE *)v13[v9 + 11]->ExclusiveWaiters,
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
    v21 = this[2];
    if ( *((int *)v21 + 638) < 0x2000 )
    {
      v22 = 1;
    }
    else
    {
      v22 = *((_DWORD *)v21 + 72);
      if ( !v22 )
        goto LABEL_10;
    }
    v23 = v22;
    do
    {
      *(PERESOURCE *)((char *)this[16] + v17) = 0LL;
      v17 += 8LL;
      --v23;
    }
    while ( v23 );
    goto LABEL_10;
  }
  WdLogSingleEntry2(2LL, this[2], -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
    (__int64)this[2],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
