__int64 __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 **v7; // rax
  _DWORD *v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // r15
  KIRQL v11; // al
  bool v12; // zf
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  unsigned __int64 v18; // rsi
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = *(__int64 **)v3;
      if ( *(_QWORD *)(v3 + 16) == a1 )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v5[1] != v3 || *v7 != (__int64 *)v3 )
          __fastfail(3u);
        *v7 = v5;
        v5[1] = (__int64)v7;
        v8 = *(_DWORD **)(v3 + 48);
        if ( v8 )
          *v8 = -1073741810;
        v9 = *(struct _KEVENT **)(v3 + 40);
        if ( v9 )
          KeSetEvent(v9, 0, 0);
        v10 = *(unsigned int *)(v3 + 24);
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
        v12 = dword_140C3EFB0-- == 1;
        v13 = v11;
        if ( v12 )
          PopDirectedDripsClearDisengageReason(4);
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3EFA8);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v12 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v13);
        v18 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
        if ( !--dword_140C38AD8 && byte_140C38B50 )
        {
          qword_140C38B58 += MEMORY[0xFFFFF78000000008] - qword_140C38B60;
          qword_140C38B60 = 0LL;
        }
        --dword_140C38AE0[v10];
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38AD0);
        if ( KiIrqlFlags )
        {
          v19 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v12 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        __writecr8(v18);
        ObfDereferenceObject(*(PVOID *)(v3 + 16));
        PnpDeleteDeviceActionRequest((volatile signed __int32 *)v3);
      }
      v3 = (__int64)v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v24 = v23->SchedulerAssist;
      v12 = ((unsigned int)result & v24[5]) == 0;
      v24[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(v4);
  return result;
}
