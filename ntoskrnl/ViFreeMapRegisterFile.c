__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, struct _SLIST_ENTRY *a2)
{
  volatile signed __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  _SLIST_ENTRY *Next; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdi
  unsigned int v14; // esi
  char *i; // rdi
  __int64 v16; // rcx
  unsigned int v17; // r9d
  ULONG_PTR v18; // r8
  __int64 v19; // rdx
  struct _SLIST_ENTRY *v20; // rcx

  if ( !a2 || LODWORD(a2->Next) != -1393569779 )
    return 0LL;
  v4 = (volatile signed __int64 *)(a1 + 152);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 152));
  v6 = *((_QWORD *)&a2->Next + 1);
  Next = a2[1].Next;
  if ( *(struct _SLIST_ENTRY **)(v6 + 8) != (struct _SLIST_ENTRY *)(&a2->Next + 1)
    || Next->Next != (_SLIST_ENTRY *)(&a2->Next + 1) )
  {
    __fastfail(3u);
  }
  Next->Next = (_SLIST_ENTRY *)v6;
  *(_QWORD *)(v6 + 8) = Next;
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  LODWORD(a2->Next) = 0;
  v13 = *((_QWORD *)&a2[2].Next + 1);
  if ( v13 )
  {
    if ( (*(_BYTE *)(v13 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v13 + 24), *((PMDL *)&a2[2].Next + 1));
    IoFreeMdl((PMDL)v13);
  }
  MmUnmapLockedPages(a2[4].Next, *((PMDL *)&a2[3].Next + 1));
  v14 = 0;
  for ( i = (char *)(&a2[5].Next + 1); v14 < *((_DWORD *)&a2[1].Next + 3); i += 32 )
  {
    v16 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)i )
    {
      v17 = *((_DWORD *)i + 2);
      v18 = (*(_DWORD *)i & 0xFFF) + v16 + 4096;
    }
    else
    {
      v18 = 0LL;
      v17 = 0;
    }
    ViCheckPadding(v16, 0x3000u, v18, v17);
    v19 = *((_QWORD *)i + 2);
    *((_DWORD *)i + 3) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v19, v14) )
      ExFreePoolWithTag(*((PVOID *)i + 2), 0);
    ++v14;
  }
  IoFreeMdl(*((PMDL *)&a2[3].Next + 1));
  v20 = (struct _SLIST_ENTRY *)*((_QWORD *)&a2[4].Next + 1);
  if ( v20 )
    VfUtilFreePoolCheckIRQL(v20);
  memset(a2, 0, 0x78uLL);
  VfUtilFreePoolCheckIRQL(a2);
  return 1LL;
}
