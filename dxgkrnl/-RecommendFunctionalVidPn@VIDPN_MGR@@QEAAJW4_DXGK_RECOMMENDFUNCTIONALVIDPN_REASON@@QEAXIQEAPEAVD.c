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
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  DMMVIDPN *v29; // rax
  DMMVIDPN *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // [rsp+28h] [rbp-51h]
  __int64 v33; // [rsp+48h] [rbp-31h] BYREF
  DMMVIDPN *v34; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v35[24]; // [rsp+58h] [rbp-21h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v36; // [rsp+70h] [rbp-9h] BYREF

  v5 = 0;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  *a5 = 0LL;
  v34 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v34);
  v15 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = ClientVidPn;
    goto LABEL_17;
  }
  v16 = v34;
  *(_QWORD *)&v36.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v36.RequestReason + 1) = 0;
  *(&v36.PrivateDriverDataSize + 1) = 0;
  v36.pVidPnTargetPrioritizationVector = 0LL;
  if ( v34 == (DMMVIDPN *)-88LL )
    v36.hRecommendedFunctionalVidPn = 0LL;
  else
    v36.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v34;
  v36.RequestReason = a2;
  v36.pPrivateDriverData = a3;
  v36.PrivateDriverDataSize = a4;
  if ( !this[1] )
    WdLogSingleEntry0(1LL);
  v17 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v17) )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)v16 + 172)) - 1) & *((_WORD *)v16 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v35,
    ((unsigned __int64)v16 + 152) & -(__int64)((DMMVIDPN *)((char *)v16 + 96) != 0LL),
    1u,
    v19,
    v32,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
    WdLogSingleEntry0(1LL);
  v20 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v36);
  v24 = v20;
  v15 = -1071774941;
  if ( v20 != -1071774941 )
  {
    if ( v20 < 0 )
    {
      WdLogSingleEntry2(2LL, v17, v20);
      v15 = v24;
      goto LABEL_16;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v35,
      v21,
      v22,
      v23);
    if ( !DMMVIDPN::IsFunctional(v16) )
      WdLogSingleEntry0(1LL);
    if ( !DMMVIDPN::IsFunctional(v16) )
    {
      WdLogSingleEntry2(2LL, v17, -1071774941LL);
      DxgCreateLiveDumpWithWdLogs2(403LL, 2060LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_17;
    }
    v33 = 0LL;
    v29 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
    if ( v29 )
      v30 = DMMVIDPN::DMMVIDPN(v29, v16);
    else
      v30 = 0LL;
    auto_rc<DMMVIDPN>::reset(&v33, (__int64)v30);
    v31 = v33;
    if ( v33 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v33 + 72))(v33 + 72) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v16 + 96), a2);
        v33 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, v31);
        auto_rc<DMMVIDPN>::reset(&v33, 0LL);
        v34 = 0LL;
        *a5 = v16;
        goto LABEL_35;
      }
      WdLogSingleEntry3(7LL, v31, v16, *(int *)(v31 + 80));
      v5 = *(_DWORD *)(v31 + 80);
    }
    else
    {
      WdLogSingleEntry1(6LL, v16);
      v5 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset(&v33, 0LL);
LABEL_35:
    v15 = v5;
    goto LABEL_17;
  }
  WdLogSingleEntry1(7LL, v17);
LABEL_16:
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35, v25, v26, v27);
LABEL_17:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
  return v15;
}
