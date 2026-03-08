/*
 * XREFs of IommuBeginDeviceReset @ 0x14051F660
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommuBeginDeviceReset(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbp
  char v3; // r14
  __int64 v5; // rax
  volatile signed __int64 *v6; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  volatile signed __int64 *v10; // r15
  __int64 **v11; // rbp
  __int64 *i; // r8
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf

  v2 = *(_QWORD *)(a1 + 88);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( HalpHvIommu )
    return 3221225659LL;
  v6 = (volatile signed __int64 *)(v5 + 416);
  if ( !*(_QWORD *)(v5 + 328) || !*(_QWORD *)(v5 + 336) )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx(v5 + 416, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  v10 = (volatile signed __int64 *)(v2 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v11 = (__int64 **)(v2 + 80);
  for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
  {
    if ( !a2 || *(_DWORD *)(i[4] + 16) == *a2 )
    {
      *((_BYTE *)i + 40) = 1;
      v3 = 1;
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v3 == 0 ? 0xC0000225 : 0;
}
