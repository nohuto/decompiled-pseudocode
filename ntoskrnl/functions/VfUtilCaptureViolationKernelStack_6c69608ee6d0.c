char __fastcall VfUtilCaptureViolationKernelStack(PCONTEXT ContextRecord, _QWORD *a2)
{
  char v5; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  int v9; // ecx
  signed __int64 v10; // rdi
  size_t v11; // r8
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  v19 = 0LL;
  v17 = 0;
  if ( !ContextRecord )
    return 0;
  v5 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v8;
  }
  RtlCaptureContext(ContextRecord);
  if ( !(unsigned __int8)KeQueryCurrentStackInformation((__int64)&v17, (__int64)&Src, (__int64)&v19)
    || v17 <= 9 && (v9 = 929, _bittest(&v9, v17)) )
  {
    v5 = 0;
  }
  else
  {
    v10 = KeGetCurrentStackPointer() - (_BYTE *)Src;
    memset(&VfRuleViolationStackSavedArea, 0, 0x6000uLL);
    v11 = v19 - (_QWORD)Src;
    if ( (unsigned __int64)(v19 - (_QWORD)Src) > 0x6000 )
      v11 = 24576LL;
    memmove(&VfRuleViolationStackSavedArea, Src, v11);
    *a2 = &VfRuleViolationStackSavedArea;
    ContextRecord->Rsp = (unsigned __int64)&VfRuleViolationStackSavedArea + v10;
  }
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
