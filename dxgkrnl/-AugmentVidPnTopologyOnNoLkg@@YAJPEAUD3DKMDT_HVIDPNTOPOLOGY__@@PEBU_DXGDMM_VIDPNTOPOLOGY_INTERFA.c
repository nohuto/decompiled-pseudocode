/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02FB5E8
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C02FB168 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C02FAEB0 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C02FB070 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C02FBB8C (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
 */

__int64 __fastcall AugmentVidPnTopologyOnNoLkg(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        void *a3,
        const struct _DXGDMM_INTERFACE *a4,
        unsigned int a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a6,
        unsigned int a7,
        char a8,
        unsigned __int64 *const a9,
        unsigned int *const a10)
{
  unsigned int v10; // esi
  __int64 v15; // r15
  unsigned __int64 *v16; // r12
  unsigned int *v17; // rbx
  int AvailableTarget; // eax
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r15
  unsigned int v32; // [rsp+20h] [rbp-68h]
  unsigned int v33; // [rsp+20h] [rbp-68h]

  v10 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 3257LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3257LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3258LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3258LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 3259LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hDxgAdapter)", 3259LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 3260LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDxgDmmInterface)",
      3260LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = a5;
  if ( a5 == -1 )
  {
    WdLogSingleEntry1(1LL, 3261LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3261LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry1(1LL, 3262LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(o_pNumVidPnPresentPathsFromSource)",
      3262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = a10;
  *v16 = 0LL;
  if ( v17 )
    *v17 = -1;
  a5 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, v15, (__int64)a4, v32, 2u);
  v19 = AvailableTarget;
  if ( AvailableTarget != -1071774925 )
  {
    if ( AvailableTarget >= 0 )
      goto LABEL_30;
    goto LABEL_36;
  }
  v20 = v15;
  WdLogSingleEntry2(7LL, a1, v15);
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, v15, v21, v33, 1u);
  v19 = AvailableTarget;
  if ( AvailableTarget != -1071774925 )
  {
    if ( AvailableTarget >= 0 )
      goto LABEL_30;
LABEL_36:
    WdLogSingleEntry3(2LL, a1, v15, AvailableTarget);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to augment VidPN topology 0x%I64x at source 0x%I64x (status = 0x%I64x)",
      (__int64)a1,
      v15,
      v19,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  WdLogSingleEntry2(7LL, a1, v15);
  a7 = -1;
  v22 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, &a5);
  v19 = v22;
  if ( v22 == -1071774925 )
  {
    v27 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = a1;
    *(_QWORD *)(v27 + 32) = v15;
    return 3223192371LL;
  }
  if ( v22 < 0 )
  {
    WdLogSingleEntry3(2LL, a1, v15, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find cloned target in topology 0x%I64x while trying to augment it on source 0x%I64x (status = 0x%I64x)",
      (__int64)a1,
      v15,
      v19,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry1(1LL, 3388LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ReclaimedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
      3388LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v29 = a7;
  WdLogSingleEntry3(7LL, a7, a1, v15);
  v30 = AddPresentPath(a1, a2, v15, a7);
  v31 = v30;
  if ( v30 == -1071774975 || v30 == -1071774920 )
  {
    WdLogSingleEntry3(7LL, v20, v29, a3);
    return 3223192371LL;
  }
  if ( v30 < 0 )
  {
    WdLogSingleEntry4(2LL, v20, v29, a1, v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to add present path (0x%I64x, 0x%I64x) to VidPN topology 0x%I64x (status = 0x%I64x)",
      v20,
      v29,
      (__int64)a1,
      v31,
      0LL);
    return (unsigned int)v31;
  }
  v10 = a5;
LABEL_30:
  *v16 = 1LL;
  if ( v17 )
    *v17 = v10;
  return 0LL;
}
