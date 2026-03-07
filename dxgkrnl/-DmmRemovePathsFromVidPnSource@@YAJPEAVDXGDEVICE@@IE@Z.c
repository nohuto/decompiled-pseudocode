__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  VIDPN_MGR *v6; // rbx
  __int64 v7; // r9
  ADAPTER_DISPLAY *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  char v11; // r14
  unsigned int i; // r13d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v18; // eax
  int v19; // eax
  struct DMMVIDPN *v20; // rbx
  struct DXGDEVICE *v21; // r13
  VIDPN_MGR *v22; // r14
  int v23; // eax
  ADAPTER_DISPLAY *v24; // rbx
  int v25; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v42; // [rsp+20h] [rbp-E0h]
  char v43[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DMMVIDPN *v47; // [rsp+60h] [rbp-A0h] BYREF
  DMMVIDPNTOPOLOGY *v48; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v49; // [rsp+70h] [rbp-90h]
  VIDPN_MGR *v50; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v51; // [rsp+80h] [rbp-80h]
  _BYTE v52[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v55[68]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  v51 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
    WdLogSingleEntry0(1LL);
  v49 = *(ADAPTER_DISPLAY **)(v3 + 2920);
  v50 = (VIDPN_MGR *)*((_QWORD *)v49 + 13);
  v6 = v50;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v53, (__int64)v50);
  WdLogSingleEntry2(7LL, v5, v50);
  v47 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v50, (__int64 *)&v47) < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_50;
  }
  v48 = (struct DMMVIDPN *)((char *)v47 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v54,
    ((unsigned __int64)v47 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v47 + 96) != 0LL),
    2u,
    v7,
    v42,
    *((_QWORD *)v47 + 17));
  v44 = -1;
  if ( a3 )
  {
    v8 = *(ADAPTER_DISPLAY **)(v3 + 2920);
    v46 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v8, &v46, &v44, (enum _DXGK_PRIMARY_TARGET_TYPE *)v52);
    v9 = v44;
    if ( v46 != (_DWORD)v5 )
      v9 = -1;
    v44 = v9;
  }
  v10 = v44;
  v11 = 0;
  v43[0] = 0;
  for ( i = 0; ; ++i )
  {
    v45 = -1;
    v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v48, (char *)(unsigned int)v5, i, (unsigned int *)&v45);
    if ( v13 < 0 )
    {
      if ( v13 == -1071774919 )
        break;
      WdLogSingleEntry0(1LL);
    }
    if ( v45 == -1 )
      break;
    if ( v45 == v10 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v48, v5, v45);
      if ( !Path )
        WdLogSingleEntry0(1LL);
      v18 = *((_DWORD *)Path + 28);
      v45 = v18;
      if ( v18 == D3DKMDT_VPPS_UNPINNED )
      {
        WdLogSingleEntry1(1LL, 13949LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ScalingMode != D3DKMDT_VPPS_UNPINNED",
          13949LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( ((v18 - 1) & 0xFFFFFFFD) == 0 )
      {
        goto LABEL_30;
      }
      if ( (*((_DWORD *)Path + 30) & 4) == 0 )
      {
LABEL_30:
        v11 = v43[0];
        continue;
      }
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v14, v15, v16) < 0 )
        WdLogSingleEntry0(1LL);
      v19 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
      if ( v19 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, v3, v19);
        if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v45) < 0 )
          WdLogSingleEntry0(1LL);
      }
      v11 = 1;
      v43[0] = 1;
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v48, v5, v45, 0LL) < 0 )
        WdLogSingleEntry0(1LL);
      v11 = 1;
      --i;
      v43[0] = 1;
    }
  }
  v20 = v47;
  if ( !v11 )
  {
    v22 = v50;
    v21 = v51;
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v22, v20);
    v31 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
      v32[3] = v20;
      v32[4] = v3;
      v32[5] = v31;
    }
    v24 = v49;
    v33 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v49, v21, v5);
    if ( v33 < 0 )
      WdLogSingleEntry3(2LL, v5, v3, v33);
    goto LABEL_43;
  }
  memset(v55, 0, 0x104uLL);
  v21 = v51;
  v22 = v50;
  v43[0] = 0;
  v23 = VIDPN_MGR::SetTimingsFromVidPn(v50, 0, 1u, v47, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v55, v43, 0, v51, 0LL);
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(3LL, v20, v23);
    goto LABEL_35;
  }
  v25 = v55[21];
  if ( !_bittest(&v25, v5) )
    goto LABEL_39;
  WdLogSingleEntry3(3LL, v20, v5, -1071774970LL);
LABEL_35:
  v24 = v49;
LABEL_43:
  v34 = *(_QWORD *)(v3 + 2928);
  if ( v34 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v34 + 736) + 8LL) + 880LL))(
      *(_QWORD *)(v34 + 744),
      (unsigned int)v5);
  }
  else
  {
    v35 = *((_QWORD *)v24 + 56);
    if ( v35 )
      _InterlockedExchange((volatile __int32 *)(2920 * v5 + *(_QWORD *)(v35 + 8) + 960), 0);
  }
  v36 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v24, v5, 0, 256, 0);
  if ( v36 < 0 )
  {
    v40 = v36;
    WdLogSingleEntry3(2LL, v5, v3, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reset VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
      v5,
      v3,
      v40,
      0LL,
      0LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v54, v37, v38, v39);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v47, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v53 + 40));
  return 0LL;
}
