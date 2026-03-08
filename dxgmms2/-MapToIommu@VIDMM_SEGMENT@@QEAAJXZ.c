/*
 * XREFs of ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FDE0C
 * Callers:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00E1D24 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E42FC (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MapToIommu(VIDMM_SEGMENT *this)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  union _LARGE_INTEGER v4; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rdi
  char *i; // rbx
  char *v10; // r14
  int v11; // eax
  __int64 v12; // rbp
  VIDMM_SEGMENT *j; // rbx
  int v15; // eax
  struct _MDL *v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // eax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x40) != 0 )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = *(union _LARGE_INTEGER *)((char *)this + 32);
    LogicalAddress = SysMmGetLogicalAddress(*((void *const *)this + 60));
    v6 = SysMmMapIommuContiguousRange(
           *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
           LogicalAddress,
           v4,
           v3,
           0);
    v7 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      return v7;
    }
  }
  else if ( (v1 & 0x1001) != 0 )
  {
    v8 = (char *)this + 160;
    for ( i = (char *)*((_QWORD *)this + 20); i != v8; i = *(char **)i )
    {
      v10 = i - 408;
      v11 = VIDMM_GLOBAL::IoMmuMapAllocation(*((VIDMM_GLOBAL **)this + 1), (struct _VIDMM_GLOBAL_ALLOC *)(i - 408));
      v12 = v11;
      if ( v11 < 0 )
      {
LABEL_10:
        WdLogSingleEntry2(3LL, v10, v12);
        return (unsigned int)v12;
      }
    }
    for ( j = (VIDMM_SEGMENT *)*((_QWORD *)this + 22); j != (VIDMM_SEGMENT *)((char *)this + 176); j = *(VIDMM_SEGMENT **)j )
    {
      v10 = (char *)j - 408;
      v15 = VIDMM_GLOBAL::IoMmuMapAllocation(*((VIDMM_GLOBAL **)this + 1), (VIDMM_SEGMENT *)((char *)j - 408));
      v12 = v15;
      if ( v15 < 0 )
        goto LABEL_10;
    }
    v16 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    v17 = SysMmGetLogicalAddress(*((void *const *)this + 61));
    v18 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v17, v16, 0);
    v7 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v18);
      return v7;
    }
  }
  return 0LL;
}
