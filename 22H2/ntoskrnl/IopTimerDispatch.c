/*
 * XREFs of IopTimerDispatch @ 0x140500DB0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403D1490 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB464 (RtlpComputeEpilogueOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x140409390 (KiCustomAccessRoutine1.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall IopTimerDispatch(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // r14d
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r15d
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v14; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  _DWORD v20[76]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v21; // [rsp+130h] [rbp-C8h]
  _WORD v22[45]; // [rsp+140h] [rbp-B8h] BYREF
  _DWORD *v23; // [rsp+1A0h] [rbp-58h]
  _OWORD v24[2]; // [rsp+1A8h] [rbp-50h] BYREF

  v23 = v20;
  v21 = DeferredContext;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v20[39] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset(v22, 0, sizeof(v22));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v20[16] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v22[41] = SystemArgument1;
    *(_QWORD *)&v22[5] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v22[33] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine1((unsigned int *)DeferredContext);
  }
  if ( *(_DWORD *)DeferredContext )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v12 = *(_DWORD *)DeferredContext;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v12; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        v14 = i + 1;
        if ( v8 )
        {
          memset(v24, 0, sizeof(v24));
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v24, 1082130432LL, v10, v11);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v14->Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(0xF46u, 0x40800000u, (__int64)&i[1], 8, 0x400A02u, (__int64)v24);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v14->Flink)(i[2].Flink, i[1].Blink);
        }
        --v12;
      }
    }
    KxReleaseSpinLock(&IopTimerLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
}
