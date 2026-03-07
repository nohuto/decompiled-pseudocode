_QWORD *__fastcall HalpBuddyAllocatorBltFindAndPop(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v8; // rdi
  volatile signed __int64 *v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // r10
  _QWORD **v13; // rdx
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v18; // edx
  _DWORD *SchedulerAssist; // r9
  bool v20; // zf
  _QWORD *v22; // rcx
  _QWORD *v23; // rax

  v5 = a2[5];
  if ( v5 == -1 )
    LODWORD(v8) = 63;
  else
    _BitScanForward64((unsigned __int64 *)&v8, v5 + 1);
  v9 = a2 + 13;
  _BitScanForward64((unsigned __int64 *)&v10, a1);
  v11 = KeAcquireSpinLockRaiseToDpc(a2 + 13);
  if ( (unsigned int)v10 > (unsigned int)v8 )
  {
LABEL_11:
    v14 = 0LL;
  }
  else
  {
    v12 = a2[12];
    while ( 1 )
    {
      v13 = (_QWORD **)(v12 + 16LL * (unsigned int)(v10 - 12));
      v14 = *v13;
      if ( *v13 != v13 )
        break;
LABEL_10:
      LODWORD(v10) = v10 + 1;
      if ( (unsigned int)v10 > (unsigned int)v8 )
        goto LABEL_11;
    }
    while ( 1 )
    {
      v15 = v14[6];
      if ( v14[7] + v15 - 1 >= a1 + a3 - 1 && v15 <= a4 - a1 + 1 )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v13 )
        goto LABEL_10;
    }
    v22 = (_QWORD *)*v14;
    v23 = (_QWORD *)v14[1];
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v23 != v14 )
      __fastfail(3u);
    *v23 = v22;
    v22[1] = v23;
    v14[1] = v14;
    *v14 = v14;
  }
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  return v14;
}
