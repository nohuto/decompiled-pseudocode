/*
 * XREFs of KiProcessDeferredReadyList @ 0x140230540
 * Callers:
 *     KeSetPriorityBoost @ 0x14022F060 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x14022F920 (KeClearSystemPriority.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140271FFC (KiAbApplyWakeupBoost.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KiExitThreadWait @ 0x140341340 (KiExitThreadWait.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403CABCC (KeSetAffinityProcess.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rbp
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // zf
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v23; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  KiReadyDeferredReadyList(a1, a2);
  v6 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v3 < 2u )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      KiAbProcessContextSwitch(v7, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[6];
          SchedulerAssist[6] = v13 + 1;
          if ( v13 == -1 )
LABEL_23:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v11[6] - 1;
            v11[6] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v23);
        while ( *(_QWORD *)(a1 + 48) );
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6];
            v12[6] = v15 + 1;
            if ( v15 == -1 )
              goto LABEL_23;
          }
        }
      }
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v7, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v10;
      if ( *(_BYTE *)(v10 + 388) == 1 )
        *(_DWORD *)(v10 + 132) = *(_DWORD *)(v10 + 132) - *(_DWORD *)(v10 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v10 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = v3;
      KiQueueReadyThread(a1, v7);
      if ( !(unsigned __int8)KiSwapContext(v7, v10, (unsigned __int8)v3) )
        goto LABEL_4;
      if ( !KiIrqlFlags )
        goto LABEL_16;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_16;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_16;
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = (v17[5] & 0xFFFF0003) == 0;
      v17[5] &= 0xFFFF0003;
      if ( !v18 )
        goto LABEL_16;
    }
    else
    {
      if ( (*(_DWORD *)(v7 + 116) & 0x40) == 0 )
        goto LABEL_4;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v16 = KeGetCurrentPrcb(),
            v19 = v16->SchedulerAssist,
            v18 = (v19[5] & 0xFFFF0003) == 0,
            v19[5] &= 0xFFFF0003,
            !v18) )
      {
LABEL_16:
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_4:
        LOBYTE(v6) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v6) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v6 <= 0xDu )
            {
              v20 = KeGetCurrentPrcb();
              v21 = v20->SchedulerAssist;
              LODWORD(v6) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v18 = ((unsigned int)v6 & v21[5]) == 0;
              v21[5] &= v6;
              if ( v18 )
                LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v20);
            }
          }
        }
        __writecr8(v3);
        return v6;
      }
    }
    KiRemoveSystemWorkPriorityKick(v16);
    goto LABEL_16;
  }
  if ( v6 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v6 )
    {
      LOBYTE(v5) = 2;
      LOBYTE(v6) = KiRequestSoftwareInterrupt(a1, v5);
    }
  }
  return v6;
}
