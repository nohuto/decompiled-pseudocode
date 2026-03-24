/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B13E8
 * Callers:
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF670 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B13BC (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  char *v5; // r15
  char *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  void *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  ULONG_PTR ReturnLength; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 120LL) )
  {
    return 1;
  }
  else if ( (**(_DWORD **)(v2 + 496) & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v5 = (char *)this + 39920;
    v6 = (char *)*((_QWORD *)a2 + 2);
    v7 = *(_QWORD *)(v2 + 8) >> 12;
    v4 = 2;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39920));
    while ( (_DWORD)v7 )
    {
      ReturnLength = 0LL;
      v8 = 2000;
      v9 = v6;
      if ( (unsigned int)v7 < 0x7D0 )
        v8 = v7;
      LODWORD(v7) = v7 - v8;
      v10 = (_QWORD *)((char *)this + 7928);
      v11 = v8;
      do
      {
        *v10 = 0LL;
        *(v10 - 1) = v6;
        v10 += 2;
        v6 += 4096;
        --v11;
      }
      while ( v11 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v9,
             MemoryWorkingSetExList,
             (char *)this + 7920,
             16LL * v8,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v8 )
      {
        v15 = 0;
        v16 = (_QWORD *)((char *)this + 7928);
        while ( (*v16 & 1) != 0 || (*v16 & 0xC00000LL) == 0x400000 )
        {
          ++v15;
          v16 += 2;
          v6 += 4096;
          if ( v15 >= v8 )
            goto LABEL_17;
        }
        v4 = 3;
        break;
      }
      v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
      *(_QWORD *)(v17 + 24) = 5473LL;
      WdLogEvent5_WdAssertion(v17);
      v4 = 3;
LABEL_17:
      if ( v4 == 3 )
        break;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
