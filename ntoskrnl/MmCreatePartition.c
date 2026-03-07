__int64 __fastcall MmCreatePartition(union _SLIST_HEADER **a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned int PartitionLargePageListCount; // eax
  __int64 v7; // r11
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r12
  SIZE_T v11; // r14
  union _SLIST_HEADER *Pool; // rax
  union _SLIST_HEADER *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int16 PartitionId; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v22; // edi

  if ( (a2 & 1) != 0 )
  {
    *a1 = (union _SLIST_HEADER *)&MiSystemPartition;
    result = 0LL;
    qword_140C6B188 = (__int64)a1;
    return result;
  }
  v5 = 16LL * (unsigned int)(2 * dword_140C6577C)
     + ((88LL * (unsigned int)(6 * dword_140C6577C) + 25408LL * (unsigned __int16)KeNumberNodes + 22031) & 0xFFFFFFFFFFFFFFF0uLL);
  PartitionLargePageListCount = MiGetPartitionLargePageListCount();
  v8 = 24576 * v7;
  v9 = v7 * (16LL * (unsigned int)dword_140C65800[0] + 8);
  v10 = 24LL * PartitionLargePageListCount;
  v11 = 24576 * v7 + ((v10 + v9 + 15 + v5) & 0xFFFFFFFFFFFFFFF0uLL);
  Pool = (union _SLIST_HEADER *)MiAllocatePool(64, v11, 0x6150694Du);
  v13 = Pool;
  if ( !Pool )
    return 3221225626LL;
  qword_140C67A58 = v11;
  Pool[1].Alignment = (unsigned __int64)&Pool[1376];
  v14 = (__int64)&Pool[1588 * (unsigned __int16)KeNumberNodes + 1376];
  Pool[156].Alignment = v14;
  v15 = v14 + 88LL * (unsigned int)(3 * dword_140C6577C);
  Pool[156].Region = v15;
  v16 = (v15 + 88LL * (unsigned int)(3 * dword_140C6577C) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  Pool[425].Region = v16;
  v17 = v16 + 16LL * (unsigned int)dword_140C6577C;
  Pool[426].Alignment = v17;
  v18 = v17 + 16LL * (unsigned int)dword_140C6577C;
  v13[12].Region = (unsigned __int64)a1;
  v13[1002].Region = v18;
  v19 = v18 + v10;
  v13[1013].Alignment = v18 + v10;
  PartitionId = MiAllocatePartitionId(v13);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v13, PartitionId);
  MiPopulateFreeKernelShadowStackCacheEntries(v13, (struct _SLIST_ENTRY *)((v19 + v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8);
  if ( !(unsigned int)MiInitializeMemoryEvents(v13)
    || !(unsigned int)MiCreatePfnBitMaps(v13, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v13)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v13[152].Alignment = (unsigned __int64)CacheAwareRundownProtection) == 0) )
  {
    v22 = -1073741670;
    goto LABEL_14;
  }
  v22 = MiInitializePartitionThreads(v13);
  if ( v22 < 0 )
  {
LABEL_14:
    MiDeletePartition(v13);
    goto LABEL_15;
  }
  *a1 = v13;
LABEL_15:
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)&v13->HeaderX64 + 1) |= 0x80u;
    v13[1059] = 0LL;
    v13[1060] = 0LL;
    v13[1061] = 0LL;
    v13[1062].Alignment = 0LL;
  }
  return (unsigned int)v22;
}
