/*
 * XREFs of KiCompleteBootProcessorContextInitialization @ 0x14037226C
 * Callers:
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateDpcDelegateThread @ 0x140371F1C (KiAllocateDpcDelegateThread.c)
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiResetBootProcessorApicMask @ 0x14079C768 (KiResetBootProcessorApicMask.c)
 *     MmAllocateIsrStack @ 0x14080AFF0 (MmAllocateIsrStack.c)
 *     KiInitializePrcbContext @ 0x140A86364 (KiInitializePrcbContext.c)
 */

__int64 KiCompleteBootProcessorContextInitialization()
{
  KPCR *Pcr; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rbp
  char *v5; // rax
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 CurrentIrql; // di
  _KTHREAD *v9; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  char *v16; // [rsp+40h] [rbp+8h] BYREF
  _KTHREAD *v17; // [rsp+48h] [rbp+10h] BYREF

  Pcr = KeGetPcr();
  v17 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  result = KiInitializePrcbContext(CurrentPrcb, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0LL) )
    {
      v16 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
      if ( (unsigned __int8)MmAllocateIsrStack(&v16, 0LL) )
      {
        v3 = 1;
        LODWORD(v4) = 4;
        while ( 1 )
        {
          v5 = *(char **)((char *)Pcr->NtTib.StackBase + 8 * v3 + 28);
          v16 = v5;
          if ( KiKvaShadow )
            v16 = (char *)(*((_QWORD *)v5 + 1) + 32LL);
          if ( !(unsigned __int8)MmAllocateIsrStack(&v16, 0LL) )
            break;
          if ( ++v3 > 4 )
          {
            result = KiAllocateDpcDelegateThread(&v17, CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0], v6, v7);
            if ( (int)result >= 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql != 2 )
                  v4 = (-1LL << (CurrentIrql + 1)) & 4;
                SchedulerAssist[5] |= v4;
              }
              v9 = v17;
              KiStartPrcbThread(v17, CurrentPrcb);
              CurrentPrcb->DpcDelegateThread = v9;
              if ( KiIrqlFlags )
              {
                v11 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
                {
                  v12 = KeGetCurrentPrcb();
                  v13 = v12->SchedulerAssist;
                  v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v15 = (v14 & v13[5]) == 0;
                  v13[5] &= v14;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v12);
                }
              }
              __writecr8(CurrentIrql);
              return 0LL;
            }
            return result;
          }
        }
      }
    }
    return 3221225495LL;
  }
  return result;
}
