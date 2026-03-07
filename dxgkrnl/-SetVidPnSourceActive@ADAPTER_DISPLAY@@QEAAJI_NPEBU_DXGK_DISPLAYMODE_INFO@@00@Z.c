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
  __int64 v21; // r8
  __int64 v22; // rdx
  PERESOURCE *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ULONG v29; // eax
  char *v30; // r15
  PDRIVER_OBJECT v31; // rcx
  PERESOURCE *v32; // r12
  BLTQUEUE *v33; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v35; // r12
  _DWORD *v36; // rbx
  __int64 v37; // rdi
  const wchar_t *v38; // r9
  __int64 v39; // rsi
  unsigned int v40; // r12d
  int v41; // eax
  __int64 v42; // r8
  PERESOURCE *v43; // rax
  int v44; // eax
  __int64 v45; // rsi
  PERESOURCE *v46; // rcx
  _QWORD *v47; // [rsp+60h] [rbp-69h]
  unsigned int v48; // [rsp+68h] [rbp-61h]
  void *v49; // [rsp+70h] [rbp-59h] BYREF
  int v50; // [rsp+78h] [rbp-51h]
  __int64 v51; // [rsp+80h] [rbp-49h] BYREF
  __int64 v52; // [rsp+88h] [rbp-41h]
  __int64 v53; // [rsp+90h] [rbp-39h]
  __int64 v54; // [rsp+98h] [rbp-31h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-29h]
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int64 v57; // [rsp+B0h] [rbp-19h]
  __int64 v58; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-9h]

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 437LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 437LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 438LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      438LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1C00A26B0;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry1(1LL, 451LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      451LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 4000 * v9;
  v47 = 0LL;
  v13 = v9;
  v57 = v12;
  v14 = LOBYTE(v11[500 * v9 + 95]) == 0;
  v15 = 0x40000;
  *((_BYTE *)v11 + v12 + 760) = v7;
  v16 = this[2];
  v50 = v14;
  LODWORD(v49) = v7 ^ 1;
  v17 = v16[366];
  v18 = v14 != (v7 ^ 1);
  if ( v17 )
  {
    v47 = v17;
    v58 = 0LL;
    LODWORD(v59) = 0;
    if ( (_BYTE)v7 )
    {
      v19 = *(_DWORD *)((char *)this[16] + v12 + 1088);
      v48 = v19;
      if ( v19 == -1 )
      {
        WdLogSingleEntry1(1LL, 472LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"TargetId != D3DDDI_ID_UNINITIALIZED",
          472LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v19 = -1;
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(this[2], v19, &v58);
      if ( LinkInfoFromTarget < 0 )
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v48);
      v17 = v47;
    }
    LOBYTE(v12) = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, char *))(*(_QWORD *)(v17[92] + 8LL) + 520LL))(
      v47[93],
      (unsigned int)v9,
      v12,
      v10,
      (char *)&v58 + 4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v47[92] + 8LL) + 880LL))(v47[93], (unsigned int)v9);
    if ( v50 != (_DWORD)v49 )
    {
      v24 = this[2];
      if ( (unsigned int)v9 >= *((_DWORD *)v24 + 418) )
      {
        WdLogSingleEntry2(2LL, v9, *((unsigned int *)v24 + 418));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
          v9,
          *((unsigned int *)v24 + 418),
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VSYNC_TIME_STATS::MonitorPowerStateChange(
          (__int64)v24[527] + 112 * (((_DWORD)v24[349] & 0x10) != 0 ? v9 : 0),
          (v7 ^ 1) + 1);
      }
      if ( bTracingEnabled )
      {
        v25 = (__int64)this[2];
        v54 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v25, v9, 1, (__int64)&v54);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v51);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v27, v26, v28, v9, v7, v54, v55, v56, v51, v52, v53);
      }
    }
  }
  else
  {
    v32 = this[56];
    if ( v32 )
    {
      v49 = (void *)(2920 * v9);
      v33 = (BLTQUEUE *)((char *)v32[1] + 2920 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v33);
      else
        BLTQUEUE::DisableVSync(v33);
      _InterlockedExchange((volatile __int32 *)((char *)v49 + (_QWORD)v32[1] + 960), 0);
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
          v29 = IoSizeofWorkItem();
          v30 = (char *)operator new[](v29 + 12LL, 0x4B677844u, 64LL);
          if ( !v30 )
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
          *(_QWORD *)v30 = *(PERESOURCE *)((char *)this[2] + 404);
          v31 = g_pDriverObject;
          *((_DWORD *)v30 + 2) = v9;
          IoInitializeWorkItem(v31, (PIO_WORKITEM)(v30 + 12));
          IoQueueWorkItemEx(
            (PIO_WORKITEM)(v30 + 12),
            (PIO_WORKITEM_ROUTINE_EX)DxgkpDelayPresentCddPrimary,
            DelayedWorkQueue,
            v30);
        }
        goto LABEL_22;
      }
      goto LABEL_59;
    }
    if ( this[2][366] )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v9);
      v35 = DisplayedPrimaryAllocation;
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
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v49);
      v36 = v49;
      if ( !v49 )
      {
        v37 = 614LL;
        WdLogSingleEntry1(6LL, 614LL);
        v13 = 0LL;
        v38 = L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS";
        v39 = 0LL;
        v40 = -1073741801;
        v15 = 262145;
LABEL_49:
        DxgkLogInternalTriageEvent(0LL, v15, -1, (__int64)v38, v37, v13, v39, 0LL, 0LL);
        operator delete(v36);
        return v40;
      }
      memset(v49, 0, 0x840uLL);
      *v36 = v9;
      *((_QWORD *)v36 + 2) = *((_QWORD *)v35 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD))(*(_QWORD *)(v47[95] + 8LL) + 208LL))(
        v47[96],
        *((_QWORD *)v35 + 1),
        v36 + 1,
        v36 + 2,
        0LL);
      v36[138] |= 1u;
      v41 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v47[92] + 8LL) + 816LL))(v47[93], v36);
      v40 = v41;
      if ( v41 < 0 )
      {
        v42 = v9;
        v39 = v41;
        WdLogSingleEntry3(2LL, this[2], v42, v41);
        v37 = (__int64)this[2];
        v38 = L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).";
        goto LABEL_49;
      }
      operator delete(v36);
    }
    if ( ((_DWORD)this[64] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v43 = this[2], *((_DWORD *)v43 + 103) == 1297040209) && *((int *)v43 + 705) <= 1300 )
    {
      v44 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 2048, a6);
      v45 = v44;
      if ( v44 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v44);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this[2],
          v13,
          v45,
          0LL,
          0LL);
        return (unsigned int)v45;
      }
      goto LABEL_22;
    }
LABEL_59:
    v22 = v57;
    if ( !*((_BYTE *)this[16] + v57 + 761) )
      v18 = 1;
    if ( this[2][366] )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v47[92] + 8LL) + 888LL))(v47[93], (unsigned int)v9);
    }
    else
    {
      v46 = this[56];
      if ( v46 )
      {
        v22 = 2920 * v9;
        _InterlockedExchange((volatile __int32 *)&v46[1][9].ActiveCount + 730 * v9, 1);
      }
    }
    goto LABEL_22;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 2048, a6);
LABEL_22:
  if ( v18 )
  {
    v58 = 1LL;
    v59 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)&v58, v22, v21) < 0 )
    {
      WdLogSingleEntry1(1LL, 744LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(NotificationStatus)", 744LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return 0LL;
}
