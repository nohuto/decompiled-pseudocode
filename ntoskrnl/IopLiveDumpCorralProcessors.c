/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x140A97E30
 * Callers:
 *     IopLiveDumpEnterCorralledState @ 0x140A980DC (IopLiveDumpEnterCorralledState.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405583B8 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140559304 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpLockPages @ 0x14094BAE0 (IopLiveDumpLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A987A4 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpCorralProcessors(char *DeferredContext)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 MillisecondCounter; // r12
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  int v7; // eax
  int v8; // r15d
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int16 *v13[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-8h]
  int v15; // [rsp+5Ah] [rbp-6h]
  __int16 v16; // [rsp+5Eh] [rbp-2h]
  int v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+58h] BYREF

  v1 = *(_QWORD *)DeferredContext;
  v2 = 0LL;
  *((_DWORD *)DeferredContext + 2) = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  MillisecondCounter = 0LL;
  v18 = 0;
  v11 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages();
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  IopLiveDumpTraceSystemQuiesceStart();
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)IopLiveDumpCorralDpc, DeferredContext);
  DeferredContext[25] = 2;
  v13[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v13[0] = (unsigned __int16 *)KeActiveProcessors;
  v14 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v13) )
  {
    if ( v17 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)DeferredContext + 4);
    }
    else
    {
      v8 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v17 + 2048;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v18 = 0;
      while ( v8 == *((_DWORD *)DeferredContext + 4) )
        KeYieldProcessorEx(&v18);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    v2 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  if ( (*(_DWORD *)(v1 + 80) & 0x100) == 0 )
    IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL, &v11);
  PoAllProcIntrDisabled = 1;
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 7LL, &v20);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL, &v19);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  v9 = *(_DWORD *)(v1 + 80);
  if ( (v9 & 0x80u) != 0 )
    LOBYTE(v9) = IopLiveDumpTraceCorralProcessorsDuration(*(_QWORD *)DeferredContext, v2, v11, v20, v19);
  return v9;
}
