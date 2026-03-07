__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  void *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  volatile __int64 *v7; // rcx
  int v8; // edx
  unsigned __int8 v9; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0;
  v4 = a1;
  if ( (a3 & 0xFFFFFFFC) == 0 && a3 != 3 )
  {
    if ( a1 && a1[5] != a2[5] )
      return 3221225712LL;
    v5 = MiLockSectionControlArea(a2[5], a3 & 1, &v16);
    v6 = v5;
    if ( !v5 )
      return 0LL;
    if ( (*(_DWORD *)(v5 + 56) & 1) == 0 )
    {
      v7 = (volatile __int64 *)(v5 + 64);
      if ( !v4 )
      {
        v4 = (void *)(*v7 & 0xFFFFFFFFFFFFFFF0uLL);
        if ( !v4 )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( (void *)(*v7 & 0xFFFFFFFFFFFFFFF0uLL) == v4 )
      {
LABEL_8:
        ObFastReplaceObject(v7, (__int64)a2);
        ObfReferenceObjectWithTag(a2, 0x746C6644u);
        ObDereferenceObjectDeferDeleteWithTag(v4, 0x746C6644u);
      }
    }
LABEL_9:
    v8 = *(_DWORD *)(v6 + 56);
    if ( (v8 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
      *(_DWORD *)(v6 + 56) = v8 & 0xFFFFFDFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v9 = v16;
      if ( v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = v16;
        v14 = ~(unsigned __int16)(-1LL << (v16 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v9 = v16;
    }
    __writecr8(v9);
    return 0LL;
  }
  return 3221225713LL;
}
