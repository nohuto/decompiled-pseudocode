// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        __int64 a4)
{
  char v4; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  int AllocationInfo; // ebx
  __int64 v11; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v13; // eax
  __int64 v15; // r15
  _QWORD *v16; // rax
  void *v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF

  v17 = 0LL;
  v4 = a4;
  v18 = 0LL;
  LODWORD(BaseAddress) = 0;
  v20 = 0;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != **((_QWORD **)this + 1) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = a3;
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a3, &v18, &v17, (unsigned int *)&BaseAddress, &v20);
  if ( AllocationInfo < 0 )
    goto LABEL_8;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v13 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, _DWORD))VirtualMemoryInterface)(
          -1LL,
          &v17,
          0LL,
          &v18,
          0x80000,
          (_DWORD)BaseAddress);
  AllocationInfo = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
LABEL_8:
    if ( AllocationInfo == -1071775472 && bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventPerformanceWarning, v11, 18);
    goto LABEL_12;
  }
  VidMmiSetPriorityForMemoryPages(a2, v17, v18);
  if ( v4 )
  {
    if ( v20 )
      goto LABEL_13;
    BaseAddress = v17;
    NumberOfBytesToUnlock[0] = v18;
    v15 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
    if ( g_IsInternalReleaseOrDbg )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v16[3] = BaseAddress;
      v16[4] = NumberOfBytesToUnlock[0];
      v16[5] = v15;
    }
  }
LABEL_12:
  if ( v20 )
LABEL_13:
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)AllocationInfo;
}
