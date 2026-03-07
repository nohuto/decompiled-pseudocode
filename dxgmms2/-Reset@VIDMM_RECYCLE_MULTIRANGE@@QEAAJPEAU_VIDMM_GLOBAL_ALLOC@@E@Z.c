__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v3; // esi
  unsigned __int64 v4; // r9
  unsigned int v7; // edi
  char *v8; // rcx
  __int64 v9; // r8
  char v10; // r15
  struct VIDMM_RECYCLE_RANGE *NextRange; // r14
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // r12
  int v14; // eax
  int v15; // edx
  unsigned int v16; // r14d
  int v17; // eax
  NTSTATUS v18; // eax
  unsigned __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+70h] [rbp+40h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v23; // [rsp+78h] [rbp+48h]
  void *v24; // [rsp+88h] [rbp+58h] BYREF

  v23 = a2;
  v3 = 0;
  v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v24 = 0LL;
  v20 = v4;
  v7 = 0;
  WdLogSingleEntry1(4LL, this);
  if ( *((_BYTE *)this + 153) )
  {
    v7 = -1071775472;
LABEL_23:
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v8, &EventPerformanceWarning, v9, 18);
LABEL_20:
    if ( !v3 )
      return v7;
LABEL_33:
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
    return v7;
  }
  v10 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v12 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 1);
  do
  {
    if ( *((_DWORD *)NextRange + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, NextRange);
      LOBYTE(NumberOfBytesToUnlock) = 0;
      v14 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(NextRange, (bool *)&NumberOfBytesToUnlock);
      if ( v14 < 0 )
      {
        WdLogSingleEntry3(
          3LL,
          NextRange,
          v14,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v13, NextRange);
        v10 = 1;
      }
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  v15 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  if ( (unsigned int)(v15 - 3) <= 3 )
  {
    v16 = 1028;
    if ( v15 != 3 )
      v16 = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, v20, 1);
    if ( *((_BYTE *)this + 152) && (v8 = (char *)*((_QWORD *)this + 20)) != 0LL )
    {
      v8 += *((_QWORD *)this + 21);
      v3 = 1;
      v24 = v8;
    }
    else
    {
      v7 = -1071775472;
    }
    if ( (v7 & 0x80000000) != 0 )
    {
LABEL_19:
      if ( v7 != -1071775472 )
        goto LABEL_20;
      goto LABEL_23;
    }
  }
  else
  {
    v24 = (void *)*((_QWORD *)this + 6);
    v16 = 4;
    if ( v15 != 2 )
      v16 = 1028;
  }
  v17 = VidMmAllocateVirtualMemory(&v24, &v20, 0x80000u, v16);
  v7 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    goto LABEL_19;
  }
  VidMmiSetPriorityForMemoryPages(v23, v24, v20);
  if ( !a3 )
    goto LABEL_20;
  if ( v3 )
    goto LABEL_33;
  BaseAddress = v24;
  NumberOfBytesToUnlock = v20;
  v18 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
  WdLogSingleEntry3(4LL, BaseAddress, NumberOfBytesToUnlock, v18);
  return v7;
}
