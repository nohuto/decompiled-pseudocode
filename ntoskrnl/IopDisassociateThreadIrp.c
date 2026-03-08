/*
 * XREFs of IopDisassociateThreadIrp @ 0x140552D34
 * Callers:
 *     IoCancelThreadIo @ 0x1407D9E54 (IoCancelThreadIo.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IoAllocateErrorLogEntry @ 0x1403C11C0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403C13F0 (IoWriteErrorLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int *p_SystemCallNumber; // rsi
  unsigned __int8 v2; // cl
  bool v3; // cf
  KIRQL v4; // al
  _QWORD *v5; // rdi
  KIRQL v6; // bp
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  LONG_PTR result; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rdi
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r8
  int v22; // eax
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_SystemCallNumber = &KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
  {
    if ( KiIrqlFlags )
    {
      v2 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v2 <= 0xFu && CurrentIrql <= 0xFu )
      {
        v3 = v2 < 2u;
        goto LABEL_13;
      }
    }
    goto LABEL_16;
  }
  v4 = KeAcquireQueuedSpinLock(0xBuLL);
  v5 = *(_QWORD **)p_SystemCallNumber;
  v6 = v4;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v4);
    if ( KiIrqlFlags )
    {
      v7 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu )
      {
        v3 = v7 < 2u;
LABEL_13:
        if ( !v3 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
LABEL_16:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag((PVOID)v5[15], 0x746C6644u);
  v13 = *(_QWORD **)p_SystemCallNumber;
  v14 = **(_QWORD **)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || *(_QWORD **)(v14 + 8) != v13
    || (*(_QWORD *)p_SystemCallNumber = v14,
        *(_QWORD *)(v14 + 8) = p_SystemCallNumber,
        v5[1] = v5,
        *v5 = v5,
        v15 = (_QWORD *)qword_140C5D848,
        *(__int64 **)qword_140C5D848 != &IopDeadIrps) )
  {
    __fastfail(3u);
  }
  *v13 = &IopDeadIrps;
  v13[1] = v15;
  *v15 = v13;
  qword_140C5D848 = (__int64)v13;
  if ( *((_BYTE *)v5 + 35) <= *((_BYTE *)v5 + 34)
    && (v17 = v5[20]) != 0
    && (v16 = v5[19], v18 = *(void **)(v16 + 40), *(void **)(v17 + 8) == v18) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v16 + 40), 0x746C6644u);
  }
  else
  {
    v18 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v6);
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v18 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v18, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObject(v18);
  }
  return result;
}
