/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02E06D8
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01862A8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DDD04 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C005C048 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C005C230 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C011D170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016B2B0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C021D8C4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DE988 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r13d
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  DMMVIDPN *v15; // rbx
  ADAPTER_DISPLAY *v16; // r14
  __int64 v17; // rax
  DXGADAPTER *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  ADAPTER_DISPLAY *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  DMMVIDPN *v42; // rax
  unsigned __int8 v43; // r8
  DMMVIDPN *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct DMMVIDPN **v49; // rdi
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  unsigned __int64 v55; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v56; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v57[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v58; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v59; // [rsp+D0h] [rbp+67h]

  v59 = (int)a2;
  v5 = a5;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v56 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v56);
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = ClientVidPn;
    goto LABEL_34;
  }
  *(_QWORD *)&v58.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v58.RequestReason + 1) = 0;
  *(&v58.PrivateDriverDataSize + 1) = 0;
  v58.pVidPnTargetPrioritizationVector = 0LL;
  v15 = v56;
  if ( v56 == (DMMVIDPN *)-88LL )
    v58.hRecommendedFunctionalVidPn = 0LL;
  else
    v58.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v56;
  v58.pPrivateDriverData = a3;
  v16 = this[1];
  v58.RequestReason = v8;
  v58.PrivateDriverDataSize = a4;
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v17);
    v16 = this[1];
  }
  v18 = (DXGADAPTER *)*((_QWORD *)v16 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v18) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  LOBYTE(v20) = *((_BYTE *)v15 + 172);
  if ( ((unsigned __int16)((2 << v20) - 1) & *((_WORD *)v15 + 87)) != 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v22);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this, v19);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v57,
    (__int64)v15 + 152,
    1u,
    v24,
    v55,
    NumTargetsWithMonitorObjects);
  v27 = this[1];
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, v25);
    WdLogEvent5_WdAssertion(v28);
    v27 = this[1];
  }
  v29 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v27, &v58, v26);
  v32 = v29;
  v14 = -1071774941;
  if ( v29 == -1071774941 )
  {
    v33 = WdLogNewEntry5_WdDmmEvent(v31);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdDmmEvent(v33);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v57, v34);
    goto LABEL_34;
  }
  if ( v29 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v35 + 24) = v18;
    *(_QWORD *)(v35 + 32) = v32;
    WdLogEvent5_WdError(v35);
    v14 = v32;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v57, v30);
  if ( !DMMVIDPN::IsFunctional(v15) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( DMMVIDPN::IsFunctional(v15) )
  {
    a5 = 0LL;
    v42 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
    if ( v42 )
      v44 = DMMVIDPN::DMMVIDPN(v42, v15, v43);
    else
      v44 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v44);
    v49 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v15 + 96), (unsigned int)v59);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v49);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v56 = 0LL;
        v14 = 0;
        *v5 = v15;
        goto LABEL_34;
      }
      v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v52);
      v53[3] = v49;
      v53[4] = v15;
      v53[5] = *((int *)v49 + 20);
      WdLogEvent5_WdDmmEvent(v53);
      v51 = *((_DWORD *)v49 + 20);
    }
    else
    {
      v50 = WdLogNewEntry5_WdLowResource(v46, v45, v47, v48);
      *(_QWORD *)(v50 + 24) = v15;
      WdLogEvent5_WdLowResource(v50);
      v51 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v14 = v51;
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(v40, v39);
    *(_QWORD *)(v41 + 24) = v18;
    *(_QWORD *)(v41 + 32) = -1071774941LL;
    WdLogEvent5_WdError(v41);
    DxgCreateLiveDumpWithWdLogs(0x193u, 2060LL, 0LL, 0LL, 0LL, 0);
  }
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v56, 0LL);
  return v14;
}
