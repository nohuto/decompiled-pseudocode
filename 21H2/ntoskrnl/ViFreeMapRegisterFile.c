/*
 * XREFs of ViFreeMapRegisterFile @ 0x1409CF3C4
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409CC590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CCA00 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CE1A0 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14037E620 (VfUtilFreePoolCheckIRQL.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x1409CECA0 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x1409CF650 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, _SLIST_ENTRY *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  _SLIST_ENTRY *Next; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rdi
  unsigned int v13; // esi
  char *i; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r9d
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  _SLIST_ENTRY *v19; // rcx

  if ( !a2 || LODWORD(a2->Next) != -1393569779 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v5 = *((_QWORD *)&a2->Next + 1);
  Next = a2[1].Next;
  if ( *(_SLIST_ENTRY **)(v5 + 8) != (_SLIST_ENTRY *)(&a2->Next + 1) || Next->Next != (_SLIST_ENTRY *)(&a2->Next + 1) )
    __fastfail(3u);
  Next->Next = (_SLIST_ENTRY *)v5;
  *(_QWORD *)(v5 + 8) = Next;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 120));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  LODWORD(a2->Next) = 0;
  v12 = *((_QWORD *)&a2[2].Next + 1);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v12 + 24), *((PMDL *)&a2[2].Next + 1));
    IoFreeMdl((PMDL)v12);
  }
  MmUnmapLockedPages(a2[4].Next, *((PMDL *)&a2[3].Next + 1));
  v13 = 0;
  for ( i = (char *)(&a2[5].Next + 1); v13 < *((_DWORD *)&a2[1].Next + 3); i += 32 )
  {
    v15 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)i )
    {
      v16 = *((_DWORD *)i + 2);
      v17 = (*(_DWORD *)i & 0xFFF) + v15 + 4096;
    }
    else
    {
      v17 = 0LL;
      v16 = 0;
    }
    ViCheckPadding(v15, 0x3000u, v17, v16);
    v18 = *((_QWORD *)i + 2);
    *((_DWORD *)i + 3) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v18, v13) )
      ExFreePoolWithTag(*((PVOID *)i + 2), 0);
    ++v13;
  }
  IoFreeMdl(*((PMDL *)&a2[3].Next + 1));
  v19 = (_SLIST_ENTRY *)*((_QWORD *)&a2[4].Next + 1);
  if ( v19 )
    VfUtilFreePoolCheckIRQL(v19);
  memset(a2, 0, 0x78uLL);
  VfUtilFreePoolCheckIRQL(a2);
  return 1LL;
}
