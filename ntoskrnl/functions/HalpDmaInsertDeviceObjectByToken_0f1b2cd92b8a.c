__int64 __fastcall HalpDmaInsertDeviceObjectByToken(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rdi
  __int64 *i; // rax
  __int64 Pool2; // rax
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  v4 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaPdoListLock);
  for ( i = (__int64 *)HalpDmaPdoList; i != &HalpDmaPdoList; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      if ( !i[3] )
        i[3] = a2;
      goto LABEL_6;
    }
  }
  Pool2 = ExAllocatePool2(66LL, 40LL, 1147953480LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_BYTE *)(Pool2 + 32) = a3;
    v11 = (__int64 *)qword_140C63F98;
    if ( *(__int64 **)qword_140C63F98 != &HalpDmaPdoList )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &HalpDmaPdoList;
    *(_QWORD *)(Pool2 + 8) = v11;
    *v11 = Pool2;
    qword_140C63F98 = Pool2;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_6:
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaPdoListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v4;
}
