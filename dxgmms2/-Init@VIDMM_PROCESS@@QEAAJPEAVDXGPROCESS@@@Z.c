__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  struct VIDMM_PARTITION *v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v8; // rax
  int v9; // eax
  void *v10; // rax
  VIDMM_RECYCLE_HEAP_MGR *v11; // rax
  struct _KPROCESS *v12; // rcx
  int v13; // ebp
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  VIDMM_PROCESS_HEAP *v23; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v5 = *((_DWORD *)a2 + 106);
  if ( (v5 & 0x100) != 0 )
  {
    v6 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 76) + 624LL);
  }
  else if ( (v5 & 0x80u) != 0 )
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 78);
  }
  else
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  }
  *this = v6;
  this[1] = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 8) + 80LL);
  this[4] = a2;
  v7 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(72LL, 0x34346956u, 64LL);
  if ( v7 )
    v8 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v7, (struct VIDMM_PROCESS *)this);
  else
    v8 = 0LL;
  this[5] = v8;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C0076808);
    WdLogSingleEntry1(6LL, 218LL);
LABEL_29:
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 3221225495LL;
  }
  v9 = *((_DWORD *)a2 + 106);
  if ( (v9 & 0x100) != 0 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)a2 + 76) + 64LL);
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 8);
    else
      v22 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v22 + 24);
    goto LABEL_15;
  }
  if ( !dword_1C0076478 && (v9 & 0x80) == 0 )
  {
    v23 = (VIDMM_PROCESS_HEAP *)operator new(320LL, 0x30316956u, 64LL);
    if ( v23 )
    {
      v11 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v23);
      goto LABEL_13;
    }
LABEL_37:
    v11 = 0LL;
    goto LABEL_13;
  }
  v10 = (void *)operator new(1696LL, 0x30316956u, 64LL);
  if ( !v10 )
    goto LABEL_37;
  v11 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v10);
LABEL_13:
  this[3] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C0076854);
    WdLogSingleEntry1(6LL, 253LL);
    goto LABEL_29;
  }
  v12 = *this;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v12, &ApcState);
  v13 = (*(__int64 (__fastcall **)(struct VIDMM_PARTITION *, struct VIDMM_PARTITION **))(*(_QWORD *)this[3] + 8LL))(
          this[3],
          this);
  KeUnstackDetachProcess(&ApcState);
  if ( v13 < 0 )
    return (unsigned int)v13;
LABEL_15:
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v15 = 8 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 8uLL) )
    v15 = -1LL;
  v17 = operator new[](v15, 0x33316956u, 256LL);
  this[2] = (struct VIDMM_PARTITION *)v17;
  if ( !v17 )
  {
    _InterlockedIncrement(&dword_1C00767F8);
    WdLogSingleEntry1(6LL, 288LL);
    goto LABEL_29;
  }
  if ( (*((_DWORD *)a2 + 106) & 2) != 0 )
  {
    *((_DWORD *)this + 24) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v18 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 36);
  if ( v18 < 0 )
    return (unsigned int)v18;
  return v2;
}
