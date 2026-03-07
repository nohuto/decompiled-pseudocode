__int64 __fastcall ExQuerySystemLockInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // edi
  _DWORD *v8; // rsi
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 *v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  v3 = 8;
  if ( a2 >= 8 )
  {
    *a1 = 0;
    v8 = a1 + 2;
    v7 = 0;
    MmLockPagableSectionByHandle(ExPageLockHandle);
    v9 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    v10 = ExpSystemResourcesList;
    v11 = &ExpSystemResourcesList;
    v12 = v9;
    while ( (__int64 *)v10 != v11 )
    {
      ++*a1;
      v3 += 48;
      if ( v3 < 0x30 )
      {
        v7 = -1073741675;
        break;
      }
      if ( a2 >= v3 )
      {
        *(_QWORD *)v8 = v10;
        v8[2] = 1;
        v13 = ExpOwnerEntryToThread((__int64 *)(v10 + 48));
        if ( v13 )
          v14 = *(_QWORD *)(v13 + 1232);
        else
          v14 = 0LL;
        *((_QWORD *)v8 + 2) = v14;
        v8[6] = *(_DWORD *)(v10 + 64);
        v8[7] = *(_DWORD *)(v10 + 68);
        v8[10] = *(_DWORD *)(v10 + 72);
        v8[11] = *(_DWORD *)(v10 + 76);
        v8 += 12;
      }
      else
      {
        v7 = -1073741820;
      }
      v10 = *(_QWORD *)v10;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&ExpResourceSpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v12);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = v3;
  return v7;
}
