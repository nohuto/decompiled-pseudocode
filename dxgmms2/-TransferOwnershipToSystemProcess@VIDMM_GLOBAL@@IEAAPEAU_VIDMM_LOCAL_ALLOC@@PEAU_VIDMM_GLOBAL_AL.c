struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToSystemProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct VIDMM_DEVICE *v6; // rdx
  __int64 v8; // r8
  struct _VIDMM_LOCAL_ALLOC *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v16[2]; // [rsp+20h] [rbp-48h]
  struct _KEVENT **v17; // [rsp+28h] [rbp-40h]
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v18 = 0;
  if ( (int)VIDMM_GLOBAL::OpenOneAllocation(this, v6, a2, 0LL, 0, 0LL, &v19, &v18) < 0 )
  {
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry2(6LL, a2, *((_QWORD *)a2 + 1));
    DxgkLogInternalTriageEvent(v14, 262145LL);
    return 0LL;
  }
  v9 = *(struct _VIDMM_LOCAL_ALLOC **)v19;
  if ( *((int *)a2 + 91) > 0 )
  {
    v13 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(this, a3, *(struct _VIDMM_LOCAL_ALLOC **)v19);
    if ( v13 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076784);
      WdLogSingleEntry3(6LL, a2, *((_QWORD *)a2 + 1), v13);
      DxgkLogInternalTriageEvent(v15, 262145LL);
      VIDMM_GLOBAL::CloseOneAllocation(this, v19, 0LL, 0, 0, 0LL);
      return 0LL;
    }
  }
  if ( bTracingEnabled )
  {
    v10 = v9 ? *(unsigned int *)(*((_QWORD *)v9 + 1) + 8LL) : 0LL;
    if ( (byte_1C00769C1 & 8) != 0 )
    {
      LODWORD(v17) = v10;
      v16[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq_EtwWriteTransfer(v10, &EventTransferAllocationOwnership, v8, a2, *(_QWORD *)&v16[0].0, v17);
    }
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    v11 = *((_QWORD *)a2 + 15);
    if ( v11 )
    {
      VidMmRecordAlloc(this, a2, a3, v11, *((_QWORD *)a2 + 2), 1);
      VidMmRecordAlloc(this, a2, v9, *((_QWORD *)a2 + 15), *((_QWORD *)a2 + 2), 0);
    }
  }
  return v9;
}
