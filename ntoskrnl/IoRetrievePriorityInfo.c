NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT IoPriorityHint; // ecx
  unsigned __int64 v8; // rdx
  unsigned int BasePriority; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  _IO_PRIORITY_HINT v13; // ecx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  int v16; // edi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *i; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf

  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    IoPriorityHint = IoGetIoPriorityHint(Irp);
    goto LABEL_7;
  }
  if ( !FileObject )
  {
    if ( Thread )
    {
      v13 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
      v14 = Thread->Process[1].Affinity.StaticBitmap[16];
      if ( v14 && v13 >= *(_DWORD *)(v14 + 1068) )
        v13 = *(_DWORD *)(v14 + 1068);
      if ( v13 < IoPriorityNormal && Thread == KeGetCurrentThread() && LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
        v13 = IoPriorityNormal;
      PriorityInfo->IoPriority = v13;
      goto LABEL_8;
    }
    goto LABEL_44;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
  {
    if ( Thread )
    {
      IoPriorityHint = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
      v8 = Thread->Process[1].Affinity.StaticBitmap[16];
      if ( v8 && IoPriorityHint >= *(_DWORD *)(v8 + 1068) )
        IoPriorityHint = *(_DWORD *)(v8 + 1068);
      if ( IoPriorityHint < IoPriorityNormal
        && Thread == KeGetCurrentThread()
        && LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
      {
        IoPriorityHint = IoPriorityNormal;
      }
      goto LABEL_7;
    }
LABEL_44:
    PriorityInfo->ThreadPriority = -1;
    PriorityInfo->PagePriority = -1;
    return 0;
  }
  v15 = FileObjectExtension[22];
  if ( v15 )
  {
    IoPriorityHint = v15 - 1;
  }
  else
  {
    if ( !Thread )
      goto LABEL_44;
    IoPriorityHint = (unsigned int)PsGetIoPriorityThread((__int64)Thread);
  }
LABEL_7:
  PriorityInfo->IoPriority = IoPriorityHint;
  if ( !Thread )
    goto LABEL_44;
LABEL_8:
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_10;
  v16 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v22) = 4;
    else
      v22 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v22;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    for ( i = (char *)SchedulingGroup + CurrentPrcb->ScbOffset; i; i = (char *)*((_QWORD *)i + 51) )
    {
      v16 = ((unsigned __int8)i[112] >> 3) & 1;
      if ( v16 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v23 - 2) <= 0xDu )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v16 )
    BasePriority = 1;
  else
LABEL_10:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v10 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  v11 = Thread->Process[1].Affinity.StaticBitmap[16];
  if ( v11 && v10 >= *(_DWORD *)(v11 + 1076) )
    v10 = *(_DWORD *)(v11 + 1076);
  PriorityInfo->PagePriority = v10;
  return 0;
}
