/*
 * XREFs of RaInitializeRaidResources @ 0x1C004E0B0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002BBDC (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     McTemplateK0zqqqqi_EtwWriteTransfer @ 0x1C004D964 (McTemplateK0zqqqqi_EtwWriteTransfer.c)
 *     RaFreeRaidResources @ 0x1C004DF60 (RaFreeRaidResources.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        PSLIST_HEADER ListHead,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  int v6; // eax
  char v7; // r10
  unsigned __int64 v8; // rdx
  SIZE_T v11; // r14
  __int64 v12; // r8
  unsigned __int64 Alignment_low; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // edx
  ULONG MaximumProcessorCount; // ebx
  unsigned int Alignment; // ecx
  PVOID Pool; // rax
  __int64 v21; // rsi
  PVOID *v22; // rcx
  unsigned int v23; // esi
  struct _SLIST_ENTRY *v24; // rax
  struct _SLIST_ENTRY *v25; // rbx
  unsigned int v26; // ecx
  union _SLIST_HEADER *v27; // rcx
  char *v28; // rcx

  LODWORD(ListHead[5].Alignment) = a2;
  ListHead[5].Region = a4;
  v6 = 16;
  if ( a2 <= 0x10 )
    v6 = a2;
  *((_DWORD *)&ListHead[7].HeaderX64 + 1) = a6;
  v7 = a2;
  v8 = PhysicalMemorySize;
  *((_DWORD *)&ListHead[4].HeaderX64 + 3) = v6;
  v11 = a3;
  LODWORD(ListHead[6].Alignment) = 0;
  v12 = 512LL;
  *((_BYTE *)&ListHead[7].HeaderX64 + 8) = a5 == 0;
  *((_DWORD *)&ListHead[5].HeaderX64 + 1) = v11;
  *((_DWORD *)&ListHead[7].HeaderX64 + 3) = 0;
  Alignment_low = 256LL;
  v14 = *(_QWORD *)(a4 + 64);
  if ( !v8 )
    goto LABEL_15;
  if ( v8 >= 0x40000000 )
  {
    if ( v8 < 0x80000000 )
    {
      v12 = 128LL;
      goto LABEL_16;
    }
    if ( v8 >= 0x200000000LL )
    {
      v15 = 0x400000000LL;
      if ( v8 < 0x400000000LL )
        goto LABEL_16;
      Alignment_low = LODWORD(ListHead[5].Alignment);
      while ( 1 )
      {
        v12 = (unsigned int)(2 * v12);
        v15 *= 2LL;
        if ( (unsigned int)v12 >= (unsigned int)Alignment_low )
          break;
        if ( v15 > 0x800000000000LL || v8 < v15 )
          goto LABEL_16;
      }
    }
LABEL_15:
    v12 = (unsigned int)Alignment_low;
    goto LABEL_16;
  }
  v12 = 64LL;
LABEL_16:
  if ( !v8
    || (v16 = LODWORD(ListHead[5].Alignment),
        Alignment_low = v16 * *((unsigned int *)&ListHead[5].HeaderX64 + 1),
        v8 /= 0x2710uLL,
        Alignment_low > v8) )
  {
    LODWORD(v16) = v12;
  }
  if ( (unsigned int)v16 > StorPreAllocatedMaxIoResourceCount )
    LODWORD(v16) = StorPreAllocatedMaxIoResourceCount;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zqqqqi_EtwWriteTransfer(
      Alignment_low,
      v8,
      v12,
      *(const wchar_t **)(v14 + 48),
      *(_DWORD *)(v14 + 56),
      v16,
      v7,
      v11);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount > 0x10 )
  {
    if ( MaximumProcessorCount > 0x40 )
    {
      if ( MaximumProcessorCount <= 0x100 )
      {
        LODWORD(ListHead[4].Alignment) = 16;
        Alignment = 16;
        goto LABEL_31;
      }
      Alignment = 32;
    }
    else
    {
      Alignment = 8;
    }
    LODWORD(ListHead[4].Alignment) = Alignment;
    goto LABEL_31;
  }
  LODWORD(ListHead[4].Alignment) = 0;
  InitializeSListHead(ListHead);
  Alignment = ListHead[4].Alignment;
LABEL_31:
  *((_DWORD *)&ListHead[4].HeaderX64 + 1) = MaximumProcessorCount;
  if ( Alignment )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * Alignment, 0x53526152u, a4);
    ListHead->Alignment = (unsigned __int64)Pool;
    if ( Pool )
      LODWORD(Pool) = ListHead[4].Alignment;
    else
      LODWORD(ListHead[4].Alignment) = 0;
    v21 = 0LL;
    if ( (_DWORD)Pool )
    {
      while ( 1 )
      {
        *(_QWORD *)(ListHead->Alignment + 8 * v21) = ExAllocatePoolWithTag(
                                                       NonPagedPoolNxCacheAligned,
                                                       0x10uLL,
                                                       0x53526152u);
        v22 = (PVOID *)ListHead->Alignment;
        if ( !*(_QWORD *)(ListHead->Alignment + 8 * v21) )
          break;
        InitializeSListHead(*(PSLIST_HEADER *)(ListHead->Alignment + 8 * v21));
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= LODWORD(ListHead[4].Alignment) )
          goto LABEL_44;
      }
      if ( (unsigned int)v21 < 2 )
      {
        if ( (_DWORD)v21 == 1 )
        {
          ExFreePoolWithTag(*v22, 0x53526152u);
          v22 = (PVOID *)ListHead->Alignment;
        }
        ExFreePoolWithTag(v22, 0x53526152u);
        LODWORD(ListHead[4].Alignment) = 0;
        InitializeSListHead(ListHead);
      }
      else
      {
        LODWORD(ListHead[4].Alignment) = v21;
      }
    }
  }
LABEL_44:
  v23 = 0;
  if ( (_DWORD)v16 )
  {
    while ( 1 )
    {
      v24 = *((_BYTE *)&ListHead[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v11, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)StorAllocateContiguousIoResources(v11, v17, v14);
      v25 = v24;
      if ( !v24 )
        break;
      v26 = ListHead[4].Alignment;
      if ( v26 )
        v27 = *(union _SLIST_HEADER **)(ListHead->Alignment + 8LL * (v23 % v26));
      else
        v27 = ListHead;
      ExpInterlockedPushEntrySList(v27, v24);
      LODWORD(v25[2].Next) = 523124044;
      *((_DWORD *)&v25[48].Next + 2) = a6;
      if ( a6 )
        v28 = (char *)v25 + (unsigned int)(v11 - a6);
      else
        v28 = 0LL;
      *((_QWORD *)&v25[49].Next + 1) = v28;
      if ( *((_BYTE *)&ListHead[7].HeaderX64 + 8) )
        v25[51].Next = 0LL;
      if ( ++v23 >= (unsigned int)v16 )
        goto LABEL_60;
    }
    ++LODWORD(ListHead[6].Alignment);
  }
LABEL_60:
  if ( v23 >= *((_DWORD *)&ListHead[4].HeaderX64 + 3) )
  {
    *((_DWORD *)&ListHead[4].HeaderX64 + 2) = v23;
    return 0LL;
  }
  else
  {
    RaFreeRaidResources(ListHead, a4, a5);
    return 3221225495LL;
  }
}
