/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009560 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0043000 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0069BB4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0199DD4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C019A618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B54C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E19B0 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

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
  __int64 v37; // rbx
  __int64 v39; // [rsp+20h] [rbp-E0h]
  char v40[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DMMVIDPN *v44; // [rsp+60h] [rbp-A0h] BYREF
  DMMVIDPNTOPOLOGY *v45; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v46; // [rsp+70h] [rbp-90h]
  VIDPN_MGR *v47; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v48; // [rsp+80h] [rbp-80h]
  _BYTE v49[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v51[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v52[68]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  v48 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
    WdLogSingleEntry0(1LL);
  v46 = *(ADAPTER_DISPLAY **)(v3 + 2920);
  v47 = (VIDPN_MGR *)*((_QWORD *)v46 + 13);
  v6 = v47;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50, (__int64)v47);
  WdLogSingleEntry2(7LL, v5, v47);
  v44 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v47, (__int64 *)&v44) < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_50;
  }
  v45 = (struct DMMVIDPN *)((char *)v44 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v51,
    ((unsigned __int64)v44 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v44 + 96) != 0LL),
    2u,
    v7,
    v39,
    *((_QWORD *)v44 + 17));
  v41 = -1;
  if ( a3 )
  {
    v8 = *(ADAPTER_DISPLAY **)(v3 + 2920);
    v43 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v8, &v43, &v41, (enum _DXGK_PRIMARY_TARGET_TYPE *)v49);
    v9 = v41;
    if ( v43 != (_DWORD)v5 )
      v9 = -1;
    v41 = v9;
  }
  v10 = v41;
  v11 = 0;
  v40[0] = 0;
  for ( i = 0; ; ++i )
  {
    v42 = -1;
    v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v45, (char *)(unsigned int)v5, i, (unsigned int *)&v42);
    if ( v13 < 0 )
    {
      if ( v13 == -1071774919 )
        break;
      WdLogSingleEntry0(1LL);
    }
    if ( v42 == -1 )
      break;
    if ( v42 == v10 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v45, v5, v42);
      if ( !Path )
        WdLogSingleEntry0(1LL);
      v18 = *((_DWORD *)Path + 28);
      v42 = v18;
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
        v11 = v40[0];
        continue;
      }
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v14, v15, v16) < 0 )
        WdLogSingleEntry0(1LL);
      v19 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
      if ( v19 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, v3, v19);
        if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v42) < 0 )
          WdLogSingleEntry0(1LL);
      }
      v11 = 1;
      v40[0] = 1;
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v45, v5, v42, 0LL) < 0 )
        WdLogSingleEntry0(1LL);
      v11 = 1;
      --i;
      v40[0] = 1;
    }
  }
  v20 = v44;
  if ( !v11 )
  {
    v22 = v47;
    v21 = v48;
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
    v24 = v46;
    v33 = ADAPTER_DISPLAY::DestroyCddAllocations(v46, v21, v5);
    if ( v33 < 0 )
      WdLogSingleEntry3(2LL, v5, v3, v33);
    goto LABEL_43;
  }
  memset(v52, 0, 0x104uLL);
  v21 = v48;
  v22 = v47;
  v40[0] = 0;
  v23 = VIDPN_MGR::SetTimingsFromVidPn(v47, 0, 1u, v44, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v52, v40, 0, v48, 0LL);
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(3LL, v20, v23);
    goto LABEL_35;
  }
  v25 = v52[21];
  if ( !_bittest(&v25, v5) )
    goto LABEL_39;
  WdLogSingleEntry3(3LL, v20, v5, -1071774970LL);
LABEL_35:
  v24 = v46;
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
    v37 = v36;
    WdLogSingleEntry3(2LL, v5, v3, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reset VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
      v5,
      v3,
      v37,
      0LL,
      0LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v44, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v50 + 40));
  return 0LL;
}
