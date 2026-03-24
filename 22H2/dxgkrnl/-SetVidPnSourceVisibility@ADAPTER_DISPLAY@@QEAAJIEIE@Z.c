/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C0042200 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E0664 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E0770 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E09A4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1F48 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00E5CCC (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015095C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0212318 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02142C8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DECF4 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E50E4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C02FFF08 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00023AC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00024E8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002580 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001AE54 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003AFE8 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00E6E20 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C014F57C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C016A8F0 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C02120F0 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0216AD8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        BOOLEAN a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  char v10; // bl
  __int64 v11; // r8
  char v12; // r14
  char v13; // r9
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGADAPTER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  int v28; // r12d
  struct _LUID *v29; // rdx
  DXGADAPTER *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // [rsp+30h] [rbp-41h]
  unsigned __int64 v51; // [rsp+38h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v52; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-29h]
  ADAPTER_RENDER *v54[2]; // [rsp+50h] [rbp-21h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v55; // [rsp+60h] [rbp-11h] BYREF

  v52 = 0LL;
  v5 = *((_QWORD *)this + 14);
  v7 = (unsigned int)a2;
  v8 = 3968LL * (unsigned int)a2;
  v55 = 0LL;
  LODWORD(v51) = a4;
  v10 = *(_BYTE *)(v8 + v5 + 721);
  v50 = v10;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v39 + 24) = 1746LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v7) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v40 + 24) = 1747LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v11 = *((_QWORD *)this + 2);
  v55.VidPnSourceId = v7;
  v52.VidPnSourceId = v7;
  v52.Visible = a3;
  v12 = 0;
  v53 = (unsigned __int8)v7 | (v10 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v55.Flags.Value ^= (*(_BYTE *)&v55.Flags.0 ^ a3) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v41 + 24) = 1768LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v11 = *((_QWORD *)this + 2);
    v13 = 0;
  }
  else if ( *(_DWORD *)(v11 + 324) == 32902 && *(int *)(v11 + 2328) < 4864 )
  {
    v13 = 0;
  }
  else if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11) )
  {
    v12 = v13;
  }
  v14 = *(ADAPTER_RENDER **)(v11 + 2704);
  LODWORD(v54[0]) = 0;
  v54[1] = v14;
  if ( v14 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v42 + 24) = 1796LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v17 = *((_QWORD *)this + 2);
    if ( v12 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v17 + 2704), 6LL, (unsigned int)v7, 1LL);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v17 + 2704), 0, 1 << v7, 0, 1 << v7);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v54, (unsigned int)(1 << v7));
    }
  }
  if ( a3 )
  {
    v36 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v52, v11);
    v27 = v36;
    if ( v36 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, (unsigned int)v7) )
      {
        v44 = *((_QWORD *)this + 14);
        v55.X = *(_DWORD *)(v8 + v44 + 728);
        v55.Y = *(_DWORD *)(v8 + v44 + 732);
        v45 = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v55);
        LODWORD(v27) = v45;
        if ( v45 < 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v47, v46);
          *(_QWORD *)(v48 + 24) = 1851LL;
          WdLogEvent5_WdAssertion(v48);
        }
      }
      goto LABEL_21;
    }
LABEL_36:
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v43[3] = v7;
    v43[4] = *((_QWORD *)this + 2);
    v43[5] = v27;
    WdLogEvent5_WdError(v43);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v7, 1);
    v28 = v51;
    goto LABEL_22;
  }
  v18 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v18 + 2642) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v18) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v7, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v7);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v55) < 0 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v49 + 24) = 1876LL;
    WdLogEvent5_WdAssertion(v49);
  }
  v22 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v52, v21);
  v27 = v22;
  if ( v22 < 0 )
    goto LABEL_36;
LABEL_21:
  LOBYTE(v26) = a3;
  v28 = v51;
  LOBYTE(v25) = v50;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 316LL),
    (unsigned int)v7,
    v25,
    v26,
    v51);
LABEL_22:
  v30 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v51 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v30, v29, 0LL, &v51);
  DxgkLogCodePointPacketForSession(0x44u, v51, v53, v28, v27, *(_QWORD *)(v31 + 316));
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 2704LL);
  if ( v32 && v12 )
    ADAPTER_RENDER::FlushScheduler(v32, 7LL, (unsigned int)v7, 1LL);
  CVidSchSuspendResume::Resume(v54);
  return (unsigned int)v27;
}
