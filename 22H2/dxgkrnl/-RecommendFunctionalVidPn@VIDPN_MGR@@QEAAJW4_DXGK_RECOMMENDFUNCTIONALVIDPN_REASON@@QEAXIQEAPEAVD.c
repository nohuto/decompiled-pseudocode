/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0211360
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0211244 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C03ADB3C (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C001FB24 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00691C8 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016D6C0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01993D0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B448 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C02114E8 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE0E4 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C03AE368 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  int v5; // ebx
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  DMMVIDPN *v16; // rsi
  DXGADAPTER *v17; // r15
  __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // r14d
  DMMVIDPN *v23; // rax
  DMMVIDPN *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // [rsp+28h] [rbp-51h]
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  DMMVIDPN *v28; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-21h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v30; // [rsp+70h] [rbp-9h] BYREF

  v5 = 0;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  *a5 = 0LL;
  v28 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v28);
  v15 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = ClientVidPn;
    goto LABEL_17;
  }
  v16 = v28;
  *(_QWORD *)&v30.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v30.RequestReason + 1) = 0;
  *(&v30.PrivateDriverDataSize + 1) = 0;
  v30.pVidPnTargetPrioritizationVector = 0LL;
  if ( v28 == (DMMVIDPN *)-88LL )
    v30.hRecommendedFunctionalVidPn = 0LL;
  else
    v30.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v28;
  v30.RequestReason = a2;
  v30.pPrivateDriverData = a3;
  v30.PrivateDriverDataSize = a4;
  if ( !this[1] )
    WdLogSingleEntry0(1LL);
  v17 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v17) )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)v16 + 172)) - 1) & *((_WORD *)v16 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v29,
    ((unsigned __int64)v16 + 152) & -(__int64)((DMMVIDPN *)((char *)v16 + 96) != 0LL),
    1u,
    v19,
    v26,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
    WdLogSingleEntry0(1LL);
  v20 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v30);
  v21 = v20;
  v15 = -1071774941;
  if ( v20 != -1071774941 )
  {
    if ( v20 < 0 )
    {
      WdLogSingleEntry2(2LL, v17, v20);
      v15 = v21;
      goto LABEL_16;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
    if ( !DMMVIDPN::IsFunctional(v16) )
      WdLogSingleEntry0(1LL);
    if ( !DMMVIDPN::IsFunctional(v16) )
    {
      WdLogSingleEntry2(2LL, v17, -1071774941LL);
      DxgCreateLiveDumpWithWdLogs2(403LL, 2060LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_17;
    }
    v27 = 0LL;
    v23 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
    if ( v23 )
      v24 = DMMVIDPN::DMMVIDPN(v23, v16);
    else
      v24 = 0LL;
    auto_rc<DMMVIDPN>::reset(&v27, (__int64)v24);
    v25 = v27;
    if ( v27 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v27 + 72))(v27 + 72) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v16 + 96), a2);
        v27 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, v25);
        auto_rc<DMMVIDPN>::reset(&v27, 0LL);
        v28 = 0LL;
        *a5 = v16;
        goto LABEL_35;
      }
      WdLogSingleEntry3(7LL, v25, v16, *(int *)(v25 + 80));
      v5 = *(_DWORD *)(v25 + 80);
    }
    else
    {
      WdLogSingleEntry1(6LL, v16);
      v5 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset(&v27, 0LL);
LABEL_35:
    v15 = v5;
    goto LABEL_17;
  }
  WdLogSingleEntry1(7LL, v17);
LABEL_16:
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
LABEL_17:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
  return v15;
}
