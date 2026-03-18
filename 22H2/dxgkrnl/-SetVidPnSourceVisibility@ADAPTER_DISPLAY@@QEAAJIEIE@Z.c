/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C0017190 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0167DE0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0172140 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01950A0 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE3C8 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03B0888 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03B213C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C03D4190 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002930 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002C98 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0005150 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0005320 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0017054 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0172880 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01946BC (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C0194EE0 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01E76F8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // r12d
  char v10; // bl
  char v11; // r15
  __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGADAPTER *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  int v22; // r13d
  struct _LUID *v23; // rdx
  DXGADAPTER *v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v32; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-29h]
  ADAPTER_RENDER *v34; // [rsp+70h] [rbp-21h] BYREF
  __int64 v35; // [rsp+78h] [rbp-19h]
  struct _DXGKARG_SETPOINTERPOSITION v36; // [rsp+80h] [rbp-11h] BYREF

  v32 = 0LL;
  v5 = *((_QWORD *)this + 16);
  v7 = a2;
  v8 = 4000LL * a2;
  v36 = 0LL;
  LODWORD(v31) = a4;
  v9 = a3;
  v10 = *(_BYTE *)(v5 + v8 + 761);
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1792LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      1792LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_BYTE)v9 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
  {
    WdLogSingleEntry1(1LL, 1793LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1793LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v36.VidPnSourceId = v7;
  v32.VidPnSourceId = v7;
  v32.Visible = v9;
  v33 = (unsigned __int8)v7 | (v10 != 0 ? 0x80000000 : 0) | ((_BYTE)v9 != 0 ? 0x40000000 : 0);
  v11 = 0;
  v12 = *((_QWORD *)this + 2);
  v36.Flags.Value ^= (v36.Flags.Value ^ v9) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      WdLogSingleEntry1(1LL, 1814LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1814LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v12 + 412) == 32902 && *(int *)(v12 + 2552) < 4864 )
  {
LABEL_29:
    v13 = 0;
    goto LABEL_9;
  }
  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v12) )
    v11 = v13;
LABEL_9:
  v14 = *((_QWORD *)this + 2);
  LODWORD(v34) = 0;
  v35 = *(_QWORD *)(v14 + 2928);
  if ( v35 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      WdLogSingleEntry1(1LL, 1842LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1842LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2928), 6LL, (unsigned int)v7);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(v15 + 2928),
        0,
        (unsigned int)(1 << v7),
        0,
        1 << v7);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v34, 1 << v7);
    }
  }
  if ( (_BYTE)v9 )
  {
    v28 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v32);
    v21 = v28;
    if ( v28 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v7) )
      {
        v29 = *((_QWORD *)this + 16);
        v36.X = *(_DWORD *)(v29 + v8 + 768);
        v36.Y = *(_DWORD *)(v29 + v8 + 772);
        v30 = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36, v19);
        LODWORD(v21) = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry1(1LL, 1897LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1897LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_22;
    }
    WdLogSingleEntry3(2LL, v7, *((_QWORD *)this + 2), v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)",
      v7,
      *((_QWORD *)this + 2),
      v21,
      0LL,
      0LL);
LABEL_38:
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v7, 1);
    v22 = v31;
    goto LABEL_23;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v16 + 2866) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v16) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v7, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v7);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36, v17) < 0 )
  {
    WdLogSingleEntry1(1LL, 1922LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1922LL, 0LL, 0LL, 0LL, 0LL);
  }
  v18 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v32);
  v21 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(2LL, v7, *((_QWORD *)this + 2), v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)",
      v7,
      *((_QWORD *)this + 2),
      v21,
      0LL,
      0LL);
    goto LABEL_38;
  }
LABEL_22:
  LOBYTE(v20) = v9;
  v22 = v31;
  LOBYTE(v19) = v10;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 404LL),
    (unsigned int)v7,
    v19,
    v20,
    v31);
LABEL_23:
  v24 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v31 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v24, v23, 0LL, &v31);
  DxgkLogCodePointPacketForSession(0x44u, v31, v33, v22, v21, v25);
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL);
  if ( v26 && v11 )
    ADAPTER_RENDER::FlushScheduler(v26, 7LL, (unsigned int)v7);
  CVidSchSuspendResume::Resume(&v34);
  return (unsigned int)v21;
}
