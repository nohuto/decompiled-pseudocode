// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v3; // rbx
  struct _VIDMM_PROCESS_HEAP_BLOCK **v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r9
  void *v8; // rcx
  struct _VIDMM_PROCESS_HEAP_BLOCK *v9; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  struct _VIDMM_PROCESS_HEAP_BLOCK *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = (struct _VIDMM_PROCESS_HEAP_BLOCK **)(v3 + 8);
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v6[3] = *(_QWORD *)(v3 + 56);
    v6[4] = *(_QWORD *)(v3 + 16);
    v6[5] = *v5;
  }
  if ( *(_BYTE *)(v3 + 72) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 21LL, this, v3, 0LL);
  }
  DXGFASTMUTEX::Acquire((VIDMM_PROCESS_HEAP *)((char *)this + 16));
  v8 = *(void **)(v3 + 32);
  if ( v8 )
  {
    MmUnsecureVirtualMemory(v8);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v9 = *v5;
  if ( *((_DWORD *)*v5 + 6) != 1 )
  {
    if ( *((_QWORD *)v9 + 7) || *((_QWORD *)v9 + 11) )
    {
      LOBYTE(v7) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)this + 120LL))(
        this,
        *(_QWORD *)a2,
        v3,
        v7);
    }
    else
    {
      v17 = *(_QWORD *)(v3 + 16) + *((_QWORD *)v9 + 4);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, __int64, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        &v17,
        v3 + 56,
        0x4000LL);
    }
  }
  VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)*v5 + 9), *(struct _VIDMM_POOL_BLOCK **)(v3 + 24));
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *(_QWORD *)(v3 + 56);
  v12 = (_QWORD *)*((_QWORD *)this + 1);
  v13 = *((_DWORD *)*v5 + 20);
  v14 = *(_QWORD *)(v3 + 56);
  if ( v13 == 1 )
  {
    v12[20] -= v14;
  }
  else if ( v13 == 2 )
  {
    v12[22] -= v14;
  }
  else
  {
    v12[24] -= v14;
  }
  --*((_DWORD *)*v5 + 6);
  if ( bTracingEnabled )
  {
    v15 = *v5;
    v16 = (unsigned int)(*((_DWORD *)*v5 + 20) - 3) > 3 ? *((_QWORD *)v15 + 4) : *((_QWORD *)v15 + 11);
    v12 = *(_QWORD **)(v3 + 56);
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        (__int64)v12,
        &EventDestroyProcessAllocationDetails,
        v11,
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        v3,
        (char)v12,
        v16);
  }
  if ( !*((_DWORD *)*v5 + 6) )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = *v5;
    VIDMM_PROCESS_HEAP::FreeBlock(this, *v5);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), (PVOID)v3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 2);
}
