/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0172140
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03B1B84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03B213C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00052E0 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C001CC04 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1C001CC80 (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x1C004191C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     McTemplateK0qtxxxxxx_EtwWriteTransfer @ 0x1C00428F4 (McTemplateK0qtxxxxxx_EtwWriteTransfer.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0172110 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0173348 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C019D978 (MonitorGetLinkInfoFromTarget.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01DE36C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01E7324 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C03D18E0 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        unsigned __int8 a3,
        const struct _DXGK_DISPLAYMODE_INFO *a4,
        bool a5,
        unsigned __int8 a6)
{
  int v7; // ebx
  __int64 v9; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *v10; // r12
  PERESOURCE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  bool v14; // zf
  int v15; // r13d
  PERESOURCE *v16; // rax
  _QWORD *v17; // rax
  bool v18; // r14
  unsigned int v19; // eax
  int LinkInfoFromTarget; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  PERESOURCE *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  ULONG v30; // eax
  char *v31; // r15
  PDRIVER_OBJECT v32; // rcx
  PERESOURCE *v33; // r12
  BLTQUEUE *v34; // rcx
  PERESOURCE *v35; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v37; // r12
  _DWORD *v38; // rbx
  __int64 v39; // rdi
  const wchar_t *v40; // r9
  __int64 v41; // rsi
  unsigned int v42; // r12d
  int v43; // eax
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // rsi
  PERESOURCE *v47; // rcx
  _QWORD *v48; // [rsp+60h] [rbp-69h]
  unsigned int v49; // [rsp+68h] [rbp-61h]
  void *v50; // [rsp+70h] [rbp-59h] BYREF
  int v51; // [rsp+78h] [rbp-51h]
  __int64 v52; // [rsp+80h] [rbp-49h] BYREF
  __int64 v53; // [rsp+88h] [rbp-41h]
  __int64 v54; // [rsp+90h] [rbp-39h]
  __int64 v55; // [rsp+98h] [rbp-31h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-29h]
  __int64 v57; // [rsp+A8h] [rbp-21h]
  __int64 v58; // [rsp+B0h] [rbp-19h]
  __int64 v59; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-9h]

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 438LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 438LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 439LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      439LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1C00AB9A0;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry1(1LL, 452LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      452LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 4000 * v9;
  v48 = 0LL;
  v13 = v9;
  v58 = v12;
  v14 = LOBYTE(v11[500 * v9 + 95]) == 0;
  v15 = 0x40000;
  *((_BYTE *)v11 + v12 + 760) = v7;
  v16 = this[2];
  v51 = v14;
  LODWORD(v50) = v7 ^ 1;
  v17 = v16[366];
  v18 = v14 != (v7 ^ 1);
  if ( v17 )
  {
    v48 = v17;
    v59 = 0LL;
    LODWORD(v60) = 0;
    if ( (_BYTE)v7 )
    {
      v19 = *(_DWORD *)((char *)this[16] + v12 + 1088);
      v49 = v19;
      if ( v19 == -1 )
      {
        WdLogSingleEntry1(1LL, 473LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"TargetId != D3DDDI_ID_UNINITIALIZED",
          473LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v19 = -1;
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(this[2], v19, &v59);
      if ( LinkInfoFromTarget < 0 )
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v49);
      v17 = v48;
    }
    LOBYTE(v12) = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, char *))(*(_QWORD *)(v17[92] + 8LL) + 520LL))(
      v48[93],
      (unsigned int)v9,
      v12,
      v10,
      (char *)&v59 + 4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v48[92] + 8LL) + 880LL))(v48[93], (unsigned int)v9);
    if ( v51 != (_DWORD)v50 )
    {
      v25 = this[2];
      if ( (unsigned int)v9 >= *((_DWORD *)v25 + 418) )
      {
        WdLogSingleEntry2(2LL, v9, *((unsigned int *)v25 + 418));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
          v9,
          *((unsigned int *)v25 + 418),
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VSYNC_TIME_STATS::MonitorPowerStateChange(
          (__int64)v25[527] + 112 * (((_DWORD)v25[349] & 0x10) != 0 ? v9 : 0),
          (v7 ^ 1) + 1);
      }
      if ( bTracingEnabled )
      {
        v26 = (__int64)this[2];
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        v54 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v26, v9, 1, (__int64)&v55);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v52);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v28, v27, v29, v9, v7, v55, v56, v57, v52, v53, v54);
      }
    }
  }
  else
  {
    v33 = this[56];
    if ( v33 )
    {
      v50 = (void *)(2920 * v9);
      v34 = (BLTQUEUE *)((char *)v33[1] + 2920 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v34);
      else
        BLTQUEUE::DisableVSync(v34);
      _InterlockedExchange((volatile __int32 *)((char *)v50 + (_QWORD)v33[1] + 960), 0);
    }
  }
  if ( (_BYTE)v7 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v9, 0) )
        {
          v30 = IoSizeofWorkItem();
          v31 = (char *)operator new[](v30 + 12LL, 0x4B677844u, 64LL);
          if ( !v31 )
          {
            WdLogSingleEntry1(6LL, this);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate work item for delay presnet CDD primary for adapter 0x%I64x",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225495LL;
          }
          *(_QWORD *)v31 = *(PERESOURCE *)((char *)this[2] + 404);
          v32 = g_pDriverObject;
          *((_DWORD *)v31 + 2) = v9;
          IoInitializeWorkItem(v32, (PIO_WORKITEM)(v31 + 12));
          IoQueueWorkItemEx(
            (PIO_WORKITEM)(v31 + 12),
            (PIO_WORKITEM_ROUTINE_EX)DxgkpDelayPresentCddPrimary,
            DelayedWorkQueue,
            v31);
        }
        goto LABEL_22;
      }
      v35 = this[2];
      goto LABEL_43;
    }
    if ( *(_QWORD *)(v21 + 2928) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v9);
      v37 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) != 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, -1071775482LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source 0x%I64x on adapter 0x%I64x to be active since there is no displayed primar"
                    "y, returning 0x%I64x.",
          (__int64)this[2],
          v9,
          -1071775482LL,
          0LL,
          0LL);
        return 3223191814LL;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v50);
      v38 = v50;
      if ( !v50 )
      {
        v39 = 615LL;
        WdLogSingleEntry1(6LL, 615LL);
        v13 = 0LL;
        v40 = L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS";
        v41 = 0LL;
        v42 = -1073741801;
        v15 = 262145;
LABEL_54:
        DxgkLogInternalTriageEvent(0LL, v15, -1, (__int64)v40, v39, v13, v41, 0LL, 0LL);
        operator delete(v38);
        return v42;
      }
      memset(v50, 0, 0x840uLL);
      *v38 = v9;
      *((_QWORD *)v38 + 2) = *((_QWORD *)v37 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD))(*(_QWORD *)(v48[95] + 8LL) + 208LL))(
        v48[96],
        *((_QWORD *)v37 + 1),
        v38 + 1,
        v38 + 2,
        0LL);
      v38[138] |= 1u;
      v43 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v48[92] + 8LL) + 816LL))(v48[93], v38);
      v42 = v43;
      if ( v43 < 0 )
      {
        v44 = v9;
        v41 = v43;
        WdLogSingleEntry3(2LL, this[2], v44, v43);
        v39 = (__int64)this[2];
        v40 = L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).";
        goto LABEL_54;
      }
      operator delete(v38);
    }
    if ( ((_DWORD)this[64] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v35 = this[2], *((_DWORD *)v35 + 103) == 1297040209) && *((int *)v35 + 705) <= 1300 )
    {
      v45 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 0x800u, a6);
      v46 = v45;
      if ( v45 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v45);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this[2],
          v13,
          v46,
          0LL,
          0LL);
        return (unsigned int)v46;
      }
      goto LABEL_22;
    }
LABEL_43:
    v23 = v58;
    if ( !*((_BYTE *)this[16] + v58 + 761) )
      v18 = 1;
    if ( v35[366] )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v48[92] + 8LL) + 888LL))(v48[93], (unsigned int)v9);
    }
    else
    {
      v47 = this[56];
      if ( v47 )
      {
        v23 = 2920 * v9;
        _InterlockedExchange((volatile __int32 *)&v47[1][9].ActiveCount + 730 * v9, 1);
      }
    }
    goto LABEL_22;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 0x800u, a6);
LABEL_22:
  if ( v18 )
  {
    v59 = 1LL;
    v60 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)&v59, v23, v22) < 0 )
    {
      WdLogSingleEntry1(1LL, 745LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(NotificationStatus)", 745LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return 0LL;
}
