/*
 * XREFs of KiGenericCallDpcInitiatorWorker @ 0x1402DC8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiInitiateGenericCallDpc @ 0x1402DC9E4 (KiInitiateGenericCallDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiGenericCallDpcInitiatorWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // di
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax
  struct _KTHREAD *v7; // rcx
  bool v8; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiDpcCorralLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  KiInitiateGenericCallDpc(a1, a2);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock);
  LOBYTE(v6) = KeAbPostRelease((ULONG_PTR)&KiDpcCorralLock);
  v7 = KeGetCurrentThread();
  v8 = v7->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v6 = &v7->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
