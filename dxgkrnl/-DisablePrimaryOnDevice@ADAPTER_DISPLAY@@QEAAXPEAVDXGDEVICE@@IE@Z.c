/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02B9B2C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BA068 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002CE8 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01669D0 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0176558 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C7720 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C7A20 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02E6868 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E89D4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned int v4; // r12d
  unsigned __int8 v5; // bl
  __int64 v9; // rdx
  int *v10; // rcx
  char v11; // r13
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  unsigned int v13; // ebx
  unsigned int i; // ebp
  int v15; // edi
  unsigned int j; // ebp
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rbx
  int v20; // r8d
  struct COREDEVICEACCESS *v21; // r9

  v4 = 0;
  v5 = a4;
  if ( !a2 || *((_DWORD *)a2 + 116) == 2 )
  {
    WdLogSingleEntry1(1LL, 3686LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDevice != NULL) && !pDevice->IsCddDevice()",
      3686LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3687LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_ALL) || (VidPnSourceId < GetNumVidPnSources())",
      3687LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3688LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 3689LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3689LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  v10 = *(int **)(v9 + 16);
  if ( *((int **)a2 + 235) == v10 )
  {
    if ( v10[705] < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((PERESOURCE **)this, (PERESOURCE **)v9);
    }
    else
    {
      v11 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v10);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 && !v5 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8u, a3, 0);
        }
        else
        {
          v13 = 0;
          for ( i = 0; v13 < *((_DWORD *)this + 24); ++v13 )
          {
            if ( a3 == -3 || v13 == a3 )
            {
              v15 = 1 << v13;
              if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v13) == a2 )
                v4 |= v15;
              i |= v15;
            }
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), i, 0LL, v4, 0);
          v5 = a4;
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 24); ++j )
      {
        if ( a3 == -3 || j == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, j) == a2 )
          {
            if ( !v11 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j);
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 744LL),
                     j) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j, v17);
              v11 = 1;
            }
            v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, j, 0, 8, v5);
            if ( v18 < 0 )
            {
              v19 = v18;
              WdLogSingleEntry3(2LL, j, *((_QWORD *)this + 2), v18);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
                j,
                *((_QWORD *)this + 2),
                v19,
                0LL,
                0LL);
            }
          }
          if ( *((_DWORD *)a2 + 116) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, j);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2820LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations(a2, j, v20, v21);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, j);
          }
        }
        v5 = a4;
      }
    }
  }
}
