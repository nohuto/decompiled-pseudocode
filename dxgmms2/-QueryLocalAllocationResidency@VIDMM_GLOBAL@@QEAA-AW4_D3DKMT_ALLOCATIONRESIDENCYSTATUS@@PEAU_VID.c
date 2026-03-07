__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  char *v5; // r13
  char *v6; // rbp
  __int64 v7; // rdi
  _QWORD *v8; // r14
  unsigned int v9; // esi
  void *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 112LL) )
  {
    return 1;
  }
  else if ( (**(_DWORD **)(v2 + 536) & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v5 = (char *)this + 39928;
    v6 = (char *)*((_QWORD *)a2 + 2);
    v7 = *(_QWORD *)(v2 + 8) >> 12;
    v4 = 2;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39928));
LABEL_15:
    if ( (_DWORD)v7 )
    {
      ReturnLength = 0LL;
      v8 = (_QWORD *)((char *)this + 7936);
      v9 = 2000;
      v10 = v6;
      if ( (unsigned int)v7 < 0x7D0 )
        v9 = v7;
      LODWORD(v7) = v7 - v9;
      v11 = (_QWORD *)((char *)this + 7936);
      v12 = v9;
      do
      {
        *v11 = 0LL;
        *(v11 - 1) = v6;
        v11 += 2;
        v6 += 4096;
        --v12;
      }
      while ( v12 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v10,
             MemoryWorkingSetExList,
             (char *)this + 7928,
             16LL * v9,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v9 )
      {
        v13 = 0;
        v4 = 2;
        while ( (*v8 & 1) != 0 || (*v8 & 0xC00000LL) == 0x400000 )
        {
          ++v13;
          v8 += 2;
          v6 += 4096;
          if ( v13 >= v9 )
            goto LABEL_15;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, 5821LL);
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
      }
      v4 = 3;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
