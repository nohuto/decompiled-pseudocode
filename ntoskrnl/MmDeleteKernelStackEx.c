/*
 * XREFs of MmDeleteKernelStackEx @ 0x140318070
 * Callers:
 *     PspDeleteKernelStack @ 0x1402ED360 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x1403D0A50 (MmDeleteKernelStack.c)
 *     KiFreeProcessorStacks @ 0x14056994C (KiFreeProcessorStacks.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x14056FFF0 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiEnableOptionalXStateFeatures @ 0x14057033C (KiEnableOptionalXStateFeatures.c)
 *     KeUninitThread @ 0x14079B04C (KeUninitThread.c)
 *     KeUserModeCallback @ 0x1407DA1F0 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AB970 (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
 * Callees:
 *     MiClearStackOwners @ 0x1402D4AA0 (MiClearStackOwners.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogKernelStackEvent @ 0x140642970 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStackEx(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r15d
  int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // edi
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // r14
  _QWORD *v11; // r13
  __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // ebx
  unsigned __int8 v17; // bp
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  struct _KPRCB *v20; // rdx
  __int64 v21; // rcx
  signed __int64 result; // rax
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 i; // rdx
  int *v27; // rdi
  __int64 v28; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r8
  size_t v31; // r8
  struct _LIST_ENTRY *Flink; // r8
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  bool v38; // zf
  signed __int64 v39; // rcx
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int8 v48; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v50; // r8
  int v51; // eax
  __int64 v52; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v53; // [rsp+38h] [rbp-50h]
  __int64 v54; // [rsp+40h] [rbp-48h]
  int v55; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v56; // [rsp+98h] [rbp+10h]
  __int64 v57; // [rsp+A8h] [rbp+20h]

  v56 = a2;
  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = 18;
  }
  else if ( (a2 & 8) != 0 )
  {
    v7 = 3;
  }
  else
  {
    v7 = (unsigned __int8)byte_140C6813C;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
    MiLogKernelStackEvent(a1 - (v7 << 12), v7, 0LL);
  v8 = v7 << 12;
  v9 = a1 - v8;
  if ( KasaniEnabled )
  {
    if ( v9 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v9, 0LL);
    if ( (v9 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v9, 8uLL);
    if ( a1 < v9 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v9, v8);
    v31 = (unsigned __int64)v8 >> 3;
    if ( v31 )
      memset((void *)(KasaniShadow + ((v9 + 0x800000000000LL) >> 3)), 0, v31);
  }
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( a3 )
    v11 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  else
    v11 = &MiSystemPartition;
  v53 = v11;
  if ( v6 )
    return MiDeleteKernelStack(v10, v4);
  v12 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v12 |= 0x20uLL;
      if ( (v33 & 0x42) != 0 )
        v12 |= 0x42uLL;
    }
  }
  v52 = v12;
  v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v52) >> 12) & 0xFFFFFFFFFFLL);
  v14 = v13 - 0x220000000000LL;
  v15 = 0LL;
  v16 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v13 >> 4)) + 8);
  if ( (v4 & 8) != 0 )
    v15 = 2LL;
  v54 = v15;
  if ( (v4 & 4) == 0 )
  {
    LODWORD(v25) = 4;
LABEL_32:
    for ( i = (unsigned int)v15; ; i = 0LL )
    {
      v27 = (int *)(v11[2] + 32 * (794LL * v16 + i + 725));
      if ( *(unsigned __int16 *)v27 < v27[4] )
        break;
      if ( (_DWORD)v15 != 1 )
        return MiDeleteKernelStack(v10, v4);
      LODWORD(v15) = 0;
    }
    v28 = (__int64)(v10 << 25) >> 16;
    *(_QWORD *)(v28 + 4064) = qword_140C69550 ^ v28;
    *(_DWORD *)(v28 + 4088) = v15;
    if ( (_DWORD)v15 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v27, (PSLIST_ENTRY)(v28 + 4080));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v25 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v25;
    }
    if ( (unsigned int)MiClearStackOwners(v10, v4) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v27, (PSLIST_ENTRY)(v28 + 4080));
      if ( KiIrqlFlags )
      {
        v48 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && CurrentIrql <= 0xFu && v48 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v50 = CurrentPrcb->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v38 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    if ( KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(CurrentIrql);
    return MiDeleteKernelStack(v10, v4);
  }
  v57 = 4LL;
  while ( 1 )
  {
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
    {
      v23 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v17 == 2 )
        LODWORD(v24) = 4;
      else
        v24 = (-1LL << (v17 + 1)) & 4;
      v23[5] |= v24;
    }
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    v18 = MI_READ_PTE_LOCK_FREE(v10);
    if ( v52 == v18 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v34 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v17 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v38 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    __writecr8(v17);
    v52 = MI_READ_PTE_LOCK_FREE(v10);
    v39 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v52) >> 12) & 0xFFFFFFFFFFLL);
    v14 = v39 - 0x220000000000LL;
    v16 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v39 >> 4)) + 8);
  }
  if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFELL) != 0 )
    v19 = 8 * (*(_QWORD *)v14 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v19 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = v56;
  LODWORD(v15) = v54;
  v11 = v53;
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v17 <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << (v17 + 1));
      v38 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v17);
  if ( v19 != -32LL
    || (v20 = KeGetCurrentPrcb(), LODWORD(v15) = 1, v20->SchedulerSubNode->Affinity.Reserved[0] != v16)
    || v20->CachedStack
    || v11 != (_QWORD *)&MiSystemPartition
    || (v21 = (__int64)(v10 << 25) >> 16,
        *(_QWORD *)(v21 + 4064) = qword_140C69550 ^ v21,
        *(_DWORD *)(v21 + 4088) = 1,
        (result = _InterlockedCompareExchange64((volatile signed __int64 *)&v20->CachedStack, v21 + 4080, 0LL)) != 0) )
  {
    LODWORD(v25) = v57;
    goto LABEL_32;
  }
  return result;
}
