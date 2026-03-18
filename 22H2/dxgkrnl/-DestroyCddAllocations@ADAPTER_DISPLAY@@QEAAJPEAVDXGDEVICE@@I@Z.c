/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016A4FC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE3C8 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03B0888 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01885C4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01A1EB0 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbp
  struct DXGALLOCATION *v17; // r8
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rcx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1204LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      1204LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4000 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4000 * v4 + *((_QWORD *)this + 16))) )
  {
    if ( *((_QWORD *)DXGPROCESS::GetCurrent(v7) + 7) != *(_QWORD *)(**(_QWORD **)(*((_QWORD *)this + 16) + v6 + 24)
                                                                  + 18648LL) )
    {
      WdLogSingleEntry1(1LL, 1221LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOw"
                  "nedSession().GetEProcessCSRSS()",
        1221LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *((_QWORD *)this + 2);
    if ( *(int *)(v8 + 2552) < 0x2000 )
      v9 = 1;
    else
      v9 = *(_DWORD *)(v8 + 288);
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      if ( v9 )
      {
        v21 = v6 + 88;
        v22 = v9;
        do
        {
          *(_QWORD *)(v21 + *((_QWORD *)this + 16)) = 0LL;
          v21 += 8LL;
          --v22;
        }
        while ( v22 );
      }
      *(_QWORD *)(*((_QWORD *)this + 16) + v6 + 600) = 0LL;
      return 0LL;
    }
    v10 = *((_QWORD *)this + 16);
    if ( !*(_QWORD *)(v10 + v6 + 88) )
    {
LABEL_10:
      v11 = *((_QWORD *)this + 16);
      v12 = *(_QWORD *)(v11 + v6 + 600);
      if ( v12 )
      {
        if ( *((_QWORD *)a2 + 235) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1901) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v12 + 40),
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        }
        else
        {
          v23 = *(void **)(v11 + v6 + 616);
          if ( v23 )
          {
            ObfDereferenceObject(v23);
            *(_QWORD *)(*((_QWORD *)this + 16) + v6 + 616) = 0LL;
          }
        }
        *(_QWORD *)(*((_QWORD *)this + 16) + v6 + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 15), v4, 0LL, 0, 0, 1);
      return 0LL;
    }
    v14 = v6 + 88;
    if ( v9 )
    {
      v15 = v6 + 88;
      v16 = v9;
      do
      {
        v17 = *(struct DXGALLOCATION **)(v15 + v10);
        if ( v17 )
        {
          ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v17);
          v10 = *((_QWORD *)this + 16);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    DXGDEVICE::DestroyAllocationInternal(
      a2,
      0,
      0LL,
      *(struct DXGRESOURCE **)(*(_QWORD *)(v6 + v10 + 88) + 40LL),
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
    v18 = *((_QWORD *)this + 2);
    if ( *(int *)(v18 + 2552) < 0x2000 )
    {
      v19 = 1;
    }
    else
    {
      v19 = *(_DWORD *)(v18 + 288);
      if ( !v19 )
        goto LABEL_10;
    }
    v20 = v19;
    do
    {
      *(_QWORD *)(v14 + *((_QWORD *)this + 16)) = 0LL;
      v14 += 8LL;
      --v20;
    }
    while ( v20 );
    goto LABEL_10;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
    *((_QWORD *)this + 2),
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
