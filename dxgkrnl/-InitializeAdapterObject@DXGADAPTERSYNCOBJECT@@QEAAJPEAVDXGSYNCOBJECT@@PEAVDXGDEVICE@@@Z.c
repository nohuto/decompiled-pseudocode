__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct DXGDEVICE *a3)
{
  char *v3; // rbp
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v11; // r10
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // r15d
  __int64 v16; // rbx
  struct _KTHREAD **v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v21; // rbp
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v22; // rax
  ADAPTER_RENDER *v23; // rcx
  int CpuEvent; // eax
  unsigned int v25; // r14d
  char *v26; // rsi
  char *v27; // rdi
  char **v28; // rax
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF
  __int128 v30; // [rsp+60h] [rbp-28h]

  v3 = (char *)this + 32;
  v4 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 1789LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pVidSchSyncObject", 1789LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 71) & 2) != 0 )
    goto LABEL_10;
  v8 = *((_QWORD *)this + 2);
  v9 = *(_QWORD *)(v8 + 736);
  if ( (unsigned int)(*((_DWORD *)a2 + 50) - 5) > 1 )
  {
    v11 = 0LL;
  }
  else
  {
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2);
    v8 = *((_QWORD *)this + 2);
    v11 = MonitoredFenceStorage;
  }
  v12 = 0LL;
  if ( (*((_DWORD *)a2 + 51) & 4) != 0 )
    v12 = *((_QWORD *)a2 + 39);
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, _QWORD, __int64, _QWORD, char *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v9 + 8) + 608LL))(
          *(_QWORD *)(v8 + 744),
          a2,
          (char *)a2 + 200,
          *((unsigned int *)a2 + 70),
          v12,
          0LL,
          v3,
          v11);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, v13);
    return v14;
  }
  v15 = *((_DWORD *)a2 + 51);
  if ( (v15 & 0x100) == 0 || !a3 )
  {
LABEL_10:
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    v16 = *((_QWORD *)this + 2);
    v17 = (struct _KTHREAD **)(v16 + 192);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v16 + 192));
    v18 = (__int64 *)(v16 + 240);
    v19 = *v18;
    if ( *(__int64 **)(*v18 + 8) == v18 )
    {
      *(_QWORD *)this = v19;
      *((_QWORD *)this + 1) = v18;
      *(_QWORD *)(v19 + 8) = this;
      *v18 = (__int64)this;
      DXGFASTMUTEX::Release(v17);
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 51) & 4) != 0;
      if ( (*((_DWORD *)a2 + 51) & 4) == 0 )
        return 0LL;
      v26 = (char *)a2 + 296;
      v27 = (char *)this + 48;
      v28 = (char **)*((_QWORD *)v26 + 1);
      if ( *v28 == v26 )
      {
        *(_QWORD *)v27 = v26;
        *((_QWORD *)v27 + 1) = v28;
        *v28 = v27;
        *((_QWORD *)v26 + 1) = v27;
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  v21 = *((_QWORD *)a3 + 5);
  if ( (*(_DWORD *)(v21 + 424) & 0x100) != 0 )
  {
    v22 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)*((_QWORD *)a2 + 26);
    *((_QWORD *)this + 5) = v22;
  }
  else
  {
    v22 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)operator new[](0x28uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 5) = v22;
    if ( !v22 )
    {
      WdLogSingleEntry1(6LL, 1828LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for m_pKmdSignalCpuEvent",
        1828LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v22);
  v29 = 0LL;
  v30 = 0LL;
  if ( (v15 & 0x10) != 0
    || (v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 2),
        *((_QWORD *)&v29 + 1) = *((_QWORD *)this + 5),
        *(_QWORD *)&v29 = *((_QWORD *)a3 + 77),
        CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v23, (struct _DXGKARG_CREATECPUEVENT *)&v29),
        v25 = CpuEvent,
        CpuEvent >= 0) )
  {
    if ( (*(_DWORD *)(v21 + 424) & 0x100) != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)(v21 + 608) + 608LL) + 160LL;
    else
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = *((_QWORD *)a2 + 11);
    **((_QWORD **)this + 5) = v4;
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = *((_QWORD *)&v30 + 1);
    *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = a2;
    goto LABEL_10;
  }
  WdLogSingleEntry2(3LL, a2, CpuEvent);
  return v25;
}
