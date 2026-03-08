/*
 * XREFs of KiExecuteDpc @ 0x140396B20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140396BD0 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToEndDpcProcessing @ 0x14057A6F4 (KiTryToEndDpcProcessing.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  struct _KTHREAD *v8; // rcx
  _DWORD v10[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v10[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 13240) = 1;
  while ( 1 )
  {
    v10[0] = 0;
    KeWaitForGate(a1 + 32320, 5LL, 0);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 13246) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs(a1, (unsigned __int64)CurrentThread, v10, 1u);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v6 = *SchedulerAssist;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( !(unsigned __int8)KiTryToEndDpcProcessing(a1 + 13246, a1 + 13168) );
    v8 = KeGetCurrentThread();
    if ( v8->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
