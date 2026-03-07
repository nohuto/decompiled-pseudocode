__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  char v3; // r12
  KSPIN_LOCK v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  KSPIN_LOCK i; // rdi
  _DWORD *v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf

  v1 = *(KSPIN_LOCK **)(a1 + 88);
  v3 = 0;
  v4 = v1[3];
  if ( HalpHvIommu || !*(_QWORD *)(v4 + 328) || !*(_QWORD *)(v4 + 336) )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx(v4 + 416, 0LL);
  (*(void (__fastcall **)(_QWORD, KSPIN_LOCK, _QWORD))(v4 + 328))(
    *(_QWORD *)(v4 + 16),
    v1[5],
    *(unsigned int *)(a1 + 60));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  KxAcquireSpinLock(v1 + 2);
  for ( i = v1[10]; (KSPIN_LOCK *)i != v1 + 10; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      *(_BYTE *)(i + 40) = 0;
      v3 = 1;
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 424));
      v9 = (_DWORD *)v1 + 29;
      v10 = 512LL;
      do
      {
        if ( (*v9 & 1) != 0 && ((*v9 >> 1) & 0xFFFFF) == *(_DWORD *)(*(_QWORD *)(i + 32) + 16LL) )
          *(_QWORD *)(v9 - 1) = 0LL;
        v9 += 2;
        --v10;
      }
      while ( v10 );
      KxReleaseSpinLock((volatile signed __int64 *)(v4 + 424));
      (*(void (__fastcall **)(_QWORD, KSPIN_LOCK, _QWORD))(v4 + 336))(
        *(_QWORD *)(v4 + 16),
        v1[5],
        *(unsigned int *)(*(_QWORD *)(i + 32) + 16LL));
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)v1 + 2);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 416));
  KeAbPostRelease(v4 + 416);
  return v3 == 0 ? 0xC0000225 : 0;
}
