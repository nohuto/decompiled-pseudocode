__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 DxgAdapter; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  DXGFASTMUTEX *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  DXGFASTMUTEX *v24; // rbx
  __int64 v26; // rbx
  unsigned int *v27; // r14
  bool v28; // cf
  __int64 v29; // rcx
  char v30; // di
  __int64 v31; // rax
  _QWORD *v32; // r13
  int v33; // eax
  __int64 v34; // rbp
  _DWORD *AdditionalModeEntry; // rsi
  int AdditinalMode; // eax
  int v37; // edi
  __int64 v38; // r8
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+50h] [rbp-58h] BYREF
  __int64 v49; // [rsp+58h] [rbp-50h]
  char v50; // [rsp+60h] [rbp-48h]
  DXGFASTMUTEX *v51; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 v52; // [rsp+B8h] [rbp+10h]

  v7 = a2;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v50 = 1;
    v48 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7059);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 7059);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a1;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_113:
    v37 = -1073741811;
    goto LABEL_57;
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, a1);
    v37 = -1071775742;
    goto LABEL_57;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(DxgAdapter + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(DxgAdapter + 168))
    || (v14 = *(_QWORD *)(DxgAdapter + 2920)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    goto LABEL_113;
  }
  v15 = *(_QWORD *)(v14 + 112);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, DxgAdapter);
    goto LABEL_113;
  }
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  v51 = (DXGFASTMUTEX *)(v15 + 80);
  if ( v15 == -80 )
    WdLogSingleEntry0(1LL);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v15 + 104) == KeGetCurrentThread() )
  {
    if ( *(int *)(v15 + 112) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v15 + 112);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v40 = *(_DWORD *)(v15 + 116);
        if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v17, v40);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v51 + 2);
      ExAcquirePushLockExclusiveEx(v15 + 88, 0LL);
    }
    if ( *(_QWORD *)(v15 + 104) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    v20 = v51;
    if ( *((_DWORD *)v51 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v15 + 104) = KeGetCurrentThread();
    *((_DWORD *)v20 + 8) = 1;
  }
  v21 = *(_QWORD *)(v15 + 40);
  v22 = v15 + 40;
  if ( v21 == v15 + 40 )
    goto LABEL_78;
  v23 = v21 - 152;
  v16 = 0LL;
  if ( !v21 )
    v23 = 0LL;
  if ( !v23 )
  {
LABEL_78:
    v42 = WdLogNewEntry5_WdTrace(v22, v16, v17, v18);
    *(_QWORD *)(v42 + 24) = v7;
    *(_QWORD *)(v42 + 32) = v15;
    MUTEX_LOCK::~MUTEX_LOCK(&v51);
    WdLogSingleEntry2(7LL, v7, v15);
    v37 = -1073741275;
    goto LABEL_57;
  }
  while ( *(_DWORD *)(v23 + 180) != (_DWORD)v7 )
  {
    v41 = *(_QWORD *)(v23 + 152);
    if ( v41 != v22 )
    {
      v23 = v41 - 152;
      if ( !v41 )
        v23 = 0LL;
      if ( v23 )
        continue;
    }
    goto LABEL_78;
  }
  v24 = v51;
  if ( *(struct _KTHREAD **)(v15 + 104) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v51, 0LL, 0LL);
  if ( *((int *)v24 + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)v24 + 8))-- == 1 )
  {
    *(_QWORD *)(v15 + 104) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v24 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  v26 = *(_QWORD *)(v23 + 232);
  if ( v26 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)v26, 1u);
  }
  *a3 = 0;
  v27 = (unsigned int *)(v26 + 208);
  *a4 = 0LL;
  v28 = *(_DWORD *)(v26 + 208) != -1;
  if ( *(_DWORD *)(v26 + 208) != -1 )
    goto LABEL_89;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 232) + 40LL))(*(_QWORD *)(v26 + 232)) == -2 )
    WdLogSingleEntry0(1LL);
  v29 = *(_QWORD *)(v26 + 232);
  v30 = 0;
  v52 = 0;
  v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31) >= 9216 )
  {
    if ( (v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 232) + 40LL))(*(_QWORD *)(v26 + 232)), v43 >= 4)
      && v43 < 14
      || v43 && (v44 = v43 - 1) != 0 && (v45 = v44 - 1) != 0 && (v46 = v45 - 1) != 0 && v46 != 11 )
    {
      v30 = 1;
      v52 = 1;
    }
  }
  v32 = (_QWORD *)(v26 + 216);
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 232) + 40LL))(*(_QWORD *)(v26 + 232));
  v34 = v33;
  if ( v33 == -2 )
    WdLogSingleEntry0(1LL);
  if ( v26 == -208 )
    WdLogSingleEntry0(1LL);
  if ( v26 == -216 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v34 == 15 )
  {
    *v27 = 0;
    *v32 = 0LL;
LABEL_88:
    v28 = *v27 != -1;
LABEL_89:
    if ( !v28 )
      WdLogSingleEntry0(1LL);
    if ( !*(_QWORD *)(v26 + 216) )
      WdLogSingleEntry0(1LL);
    v47 = *v27;
    v37 = 0;
    ++*(_DWORD *)(v26 + 224);
    *a3 = v47;
    *a4 = *(struct _DXGK_TARGETMODE_DETAIL_TIMING **)(v26 + 216);
    goto LABEL_56;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&qword_1C013C078, 0LL);
  if ( (_DWORD)v34 == -2 )
    WdLogSingleEntry0(1LL);
  AdditionalModeEntry = qword_1C013D108;
  if ( qword_1C013D108 )
  {
    while ( (_DWORD)v34 != AdditionalModeEntry[2] || v30 != *((_BYTE *)AdditionalModeEntry + 12) )
    {
      AdditionalModeEntry = *(_DWORD **)AdditionalModeEntry;
      if ( !AdditionalModeEntry )
        goto LABEL_48;
    }
    goto LABEL_102;
  }
LABEL_48:
  ExReleasePushLockEx(&qword_1C013C078, 0LL);
  ExAcquirePushLockExclusiveEx(&qword_1C013C078, 0LL);
  if ( (_DWORD)v34 == -2 )
    WdLogSingleEntry0(1LL);
  AdditionalModeEntry = qword_1C013D108;
  if ( qword_1C013D108 )
  {
    while ( (_DWORD)v34 != AdditionalModeEntry[2] || v30 != *((_BYTE *)AdditionalModeEntry + 12) )
    {
      AdditionalModeEntry = *(_DWORD **)AdditionalModeEntry;
      if ( !AdditionalModeEntry )
        goto LABEL_51;
    }
LABEL_102:
    ExReleasePushLockEx(&qword_1C013C078, 0LL);
    KeLeaveCriticalRegion();
LABEL_103:
    if ( !AdditionalModeEntry )
      WdLogSingleEntry0(1LL);
    *v27 = AdditionalModeEntry[4];
    *v32 = AdditionalModeEntry + 5;
    goto LABEL_88;
  }
LABEL_51:
  AdditionalModeEntry = 0LL;
  AdditinalMode = pLoadAdditinalMode((unsigned int)v34);
  v37 = AdditinalMode;
  if ( AdditinalMode == -1073741772 || AdditinalMode == -1073741275 )
  {
    WdLogSingleEntry1(7LL, v34);
LABEL_53:
    ExReleasePushLockEx(&qword_1C013C078, 0LL);
    KeLeaveCriticalRegion();
    if ( v37 < 0 )
    {
      if ( AdditionalModeEntry )
        WdLogSingleEntry0(1LL);
      goto LABEL_56;
    }
    goto LABEL_103;
  }
  if ( AdditinalMode >= 0 )
  {
    AdditionalModeEntry = (_DWORD *)pGetAdditionalModeEntry((unsigned int)v34, v52);
    if ( !AdditionalModeEntry )
    {
      WdLogSingleEntry1(7LL, v34);
      v37 = -1073741275;
      goto LABEL_111;
    }
    goto LABEL_53;
  }
  WdLogSingleEntry2(3LL, v34, AdditinalMode);
LABEL_111:
  ExReleasePushLockEx(&qword_1C013C078, 0LL);
  KeLeaveCriticalRegion();
LABEL_56:
  ExReleaseResourceLite((PERESOURCE)v26);
  KeLeaveCriticalRegion();
LABEL_57:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v38, v48);
  return (unsigned int)v37;
}
