BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v10; // si
  struct _LIST_ENTRY *v11; // r8
  __int64 v12; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf

  v5 = Length;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v15) = 0x8000;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v15;
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v10 = 0;
  if ( !CallbackRecord->State && !KiCheckForDuplicateBugCheckCallback(&KeBugCheckCallbackListHead, CallbackRecord) )
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Buffer = Buffer;
    CallbackRecord->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    CallbackRecord->Length = v5;
    CallbackRecord->Component = Component;
    CallbackRecord->State = 1;
    v12 = KeBugCheckCallbackListHead;
    if ( *(struct _LIST_ENTRY **)(KeBugCheckCallbackListHead + 8) != v11 )
      __fastfail(3u);
    CallbackRecord->Entry.Flink = (struct _LIST_ENTRY *)KeBugCheckCallbackListHead;
    v10 = 1;
    CallbackRecord->Entry.Blink = v11;
    *(_QWORD *)(v12 + 8) = CallbackRecord;
    KeBugCheckCallbackListHead = (__int64)CallbackRecord;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
