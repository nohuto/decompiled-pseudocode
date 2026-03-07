__int64 __fastcall HalpVpptArmTimer(__int64 *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v7; // r14
  int v8; // esi
  __int64 *v9; // rcx
  __int64 **v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  int *v13; // rax
  int *i; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  LARGE_INTEGER v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) == 2 )
    v3 = HalpTimerScaleCounter(a3, *(_QWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 192LL), 10000000LL);
  byte_140C62498 = HalpAcquireHighLevelLock(&qword_140C62490);
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    v7 = 0LL;
    v8 = -1;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL);
    v8 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      goto LABEL_19;
    *v10 = v9;
    v9[1] = (__int64)v10;
  }
  v22.QuadPart = 0LL;
  v11 = RtlGetInterruptTimePrecise(&v22) + v3;
  v12 = 0LL;
  a1[4] = v11;
  if ( a2 != 3 )
    v12 = v3;
  a1[5] = v12;
  v13 = &HalpVpptQueue;
  for ( i = *(int **)&HalpVpptQueue; i != &HalpVpptQueue && v11 >= *((_QWORD *)i + 4); i = *(int **)i )
    v13 = i;
  v15 = *(_QWORD *)v13;
  if ( *(int **)(*(_QWORD *)v13 + 8LL) != v13 )
LABEL_19:
    __fastfail(3u);
  *a1 = v15;
  a1[1] = (__int64)v13;
  *(_QWORD *)(v15 + 8) = a1;
  *(_QWORD *)v13 = a1;
  if ( *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL) != v7 || *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL) != v8 )
    HalpVpptUpdatePhysicalTimer();
  *((_DWORD *)a1 + 5) = 2;
  *((_BYTE *)a1 + 24) = 1;
  v16 = (unsigned __int8)byte_140C62498;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C62490);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v16);
  return 0LL;
}
