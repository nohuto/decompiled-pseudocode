__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(volatile signed __int32 *a1)
{
  unsigned __int8 v2; // si
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  volatile signed __int32 **v5; // rcx
  __int64 v6; // r15
  KIRQL v7; // al
  bool v8; // zf
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8
  void *v23; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v4 = *(_QWORD *)a1;
    v5 = (volatile signed __int32 **)*((_QWORD *)a1 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = (volatile signed __int32 *)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *((unsigned int *)a1 + 6);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
    v8 = dword_140C3EFB0-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3EFA8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v8 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
    if ( !--dword_140C38AD8 && byte_140C38B50 )
    {
      qword_140C38B58 += MEMORY[0xFFFFF78000000008] - qword_140C38B60;
      qword_140C38B60 = 0LL;
    }
    --dword_140C38AE0[v6];
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38AD0);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v8 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v14);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v19 >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v22 = v20->SchedulerAssist;
      v8 = (v21 & v22[5]) == 0;
      v22[5] &= v21;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    v23 = (void *)*((_QWORD *)a1 + 2);
    if ( v23 )
      ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    PnpDeleteDeviceActionRequest(a1);
  }
  return v2;
}
