__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTER *v3; // r15
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rcx
  int DxgAdapterSafe; // eax
  DXGADAPTER *v7; // rbx
  struct DXGADAPTER *v8; // rbx
  struct DXGADAPTER *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rbx
  struct DXGADAPTER *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r12d
  struct DXGADAPTER *v22; // rbx
  __int64 v23; // r14
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  signed __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // r9d
  int v38; // eax
  __int64 v39; // [rsp+50h] [rbp-19h] BYREF
  __int64 v40; // [rsp+58h] [rbp-11h]
  int v41; // [rsp+60h] [rbp-9h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1h]
  char v43; // [rsp+70h] [rbp+7h]
  bool v45; // [rsp+E0h] [rbp+77h]
  struct DXGADAPTER *v46; // [rsp+E8h] [rbp+7Fh] BYREF

  v41 = -1;
  v3 = a1;
  v42 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v32 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_33;
  }
  v5 = *(_QWORD *)v3;
  v46 = 0LL;
  v39 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v5, &v46, &v39);
  if ( DxgAdapterSafe < 0 )
  {
    v32 = DxgAdapterSafe;
    goto LABEL_33;
  }
  v7 = v46;
  if ( (*((_DWORD *)v46 + 698) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v46);
    DXGADAPTER::ReleaseReference(v7);
    v32 = -1073741790;
    goto LABEL_33;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v46 + 3);
  v8 = v46;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v8 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v8 + 38);
  v9 = v46;
  if ( *((_DWORD *)v46 + 50) != 1
    || *((_BYTE *)v46 + 2833)
    || (v10 = (_QWORD *)*((_QWORD *)v46 + 366)) == 0LL
    || *(_BYTE *)(v10[2] + 209LL) )
  {
LABEL_13:
    v15 = 0;
    if ( *((_DWORD *)v9 + 50) != 1 )
    {
      v22 = v46;
      v32 = -1073741130;
      WdLogSingleEntry2(3LL, v46, -1073741130LL);
      goto LABEL_27;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v37 = *((_DWORD *)Current + 68);
        if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v37);
      }
      ExAcquirePushLockExclusiveEx((char *)Current + 248, 0LL);
    }
    v18 = v46;
    v19 = v46;
    *((_QWORD *)Current + 32) = KeGetCurrentThread();
    v20 = HMGRTABLE::AllocHandle((char *)Current + 280, v19, 1LL, 0LL, 0);
    *((_QWORD *)Current + 32) = 0LL;
    v21 = v20;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)v18 + 3);
    v22 = v46;
    if ( !v21 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v46);
      v32 = -1073741801;
      v15 = 0;
      goto LABEL_27;
    }
    v23 = *((_QWORD *)v46 + 366);
    if ( !v23 )
    {
LABEL_26:
      v15 = v21;
      v32 = 0;
LABEL_27:
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v9 = v46;
      if ( v33 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
      if ( v32 >= 0 )
      {
        *((_DWORD *)v3 + 2) = v15;
        v32 = 0;
        *(_QWORD *)((char *)v3 + 12) = *(_QWORD *)((char *)v9 + 404);
      }
      goto LABEL_31;
    }
    v24 = 0;
    v45 = (*((_DWORD *)Current + 106) & 0x80) != 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v23 + 72, 0LL);
    *(_QWORD *)(v23 + 80) = KeGetCurrentThread();
    v25 = *((_QWORD *)Current + 6);
    v40 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 240LL);
    v26 = *(_QWORD *)(v25 + 8 * v40);
    if ( !v26 )
    {
      v27 = operator new[](0x98uLL, 0x4B677844u, 256LL);
      v26 = v27;
      if ( !v27 )
      {
        v24 = -1073741801;
LABEL_24:
        *(_QWORD *)(v23 + 80) = 0LL;
        ExReleasePushLockExclusiveEx(v23 + 72, 0LL);
        KeLeaveCriticalRegion();
        if ( v24 < 0 )
        {
          DXGPROCESS::CloseAdapter(Current, (struct ADAPTER_RENDER *)v23);
          DXGPROCESS::FreeHandleSafe(Current, v21);
          v22 = v46;
          DXGADAPTER::ReleaseReferenceNoTracking(v46);
          v32 = v24;
          v15 = 0;
          goto LABEL_27;
        }
        v22 = v46;
        goto LABEL_26;
      }
      *(_QWORD *)(v27 + 8) = 0LL;
      *(_DWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 0LL;
      *(_QWORD *)(v27 + 32) = 0LL;
      *(_QWORD *)(v27 + 40) = 0LL;
      *(_QWORD *)(v27 + 48) = 0LL;
      *(_QWORD *)(v27 + 56) = 0LL;
      *(_QWORD *)(v27 + 64) = 0LL;
      *(_QWORD *)(v27 + 72) = 0LL;
      *(_QWORD *)(v27 + 80) = 0LL;
      *(_DWORD *)(v27 + 104) = 0;
      *(_WORD *)(v27 + 108) = 0;
      *(_QWORD *)(v27 + 112) = 0LL;
      *(_QWORD *)(v27 + 120) = 0LL;
      *(_DWORD *)(v27 + 128) = 0;
      v28 = (_QWORD *)(v27 + 88);
      *(_DWORD *)(v27 + 132) = 1;
      v29 = (_QWORD *)(v27 + 136);
      v29[1] = v29;
      *v29 = v29;
      *(_QWORD *)(v26 + 64) = Current;
      *(_QWORD *)(v26 + 80) = v23;
      if ( *(struct _KTHREAD **)(v23 + 80) != KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 4439LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
          4439LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v30 = *(_QWORD **)(v23 + 304);
      if ( *v30 != v23 + 296 )
        __fastfail(3u);
      *(_QWORD *)(v26 + 96) = v30;
      *v28 = v23 + 296;
      *v30 = v28;
      v31 = v40;
      *(_QWORD *)(v23 + 304) = v28;
      ++*(_DWORD *)(v23 + 312);
      v3 = a1;
      *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v31) = v26;
    }
    ++*(_DWORD *)(v26 + 56);
    if ( v45 )
    {
      v38 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
              (DXGPROCESS_RENDER_ADAPTER_INFO *)v26,
              Current,
              (struct ADAPTER_RENDER *)v23);
      v24 = v38;
      if ( v38 < 0 )
        WdLogSingleEntry1(3LL, v38);
    }
    goto LABEL_24;
  }
  v11 = *((_QWORD *)Current + 8);
  v12 = v10[92];
  v13 = v10[93];
  if ( v11 )
  {
    v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)v12 - 1) + 16);
    if ( v14 )
      goto LABEL_12;
  }
  else
  {
    v14 = 0LL;
  }
  WdLogSingleEntry1(1LL, 1003LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1003LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 8) + 840LL))(v13, v14) )
    goto LABEL_13;
  WdLogSingleEntry2(4LL, v9, Current);
  DXGADAPTER::ReleaseReference(v9);
  v32 = -1073741790;
LABEL_31:
  _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
  ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v34) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v41);
  }
  return (unsigned int)v32;
}
