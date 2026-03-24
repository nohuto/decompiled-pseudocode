/*
 * XREFs of KiCheckForThreadDispatch @ 0x1403413C4
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     KiBeginThreadWait @ 0x140241FA0 (KiBeginThreadWait.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiFastReadyThread @ 0x1403411A0 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x140341340 (KiExitThreadWait.c)
 *     KeGenericProcessorCallback @ 0x14035C6D8 (KeGenericProcessorCallback.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbp
  ULONG_PTR v5; // rsi
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= 2u )
  {
    if ( v2 )
    {
      LOBYTE(v2) = *(_BYTE *)(a1 + 12586);
      if ( !(_BYTE)v2 )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v2) = KiRequestSoftwareInterrupt(a1, a2);
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = SchedulerAssist[6];
            SchedulerAssist[6] = v17 + 1;
            if ( v17 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v16[6] - 1;
            v16[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v24, v7, v8, v9);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v5, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v12;
      if ( *(_BYTE *)(v12 + 388) == 1 )
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v12 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = v4;
      KiQueueReadyThread(a1, v5, v13, v14);
      LOBYTE(v15) = v4;
      v6 = (unsigned __int8)KiSwapContext(v5, v12, v15) == 0;
    }
    else
    {
      v6 = (*(_DWORD *)(v5 + 116) & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v6 = (v20[5] & 0xFFFF0003) == 0;
          v20[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    LOBYTE(v2) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v2 <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          LODWORD(v2) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v6 = ((unsigned int)v2 & v22[5]) == 0;
          v22[5] &= v2;
          if ( v6 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v4);
  }
  return v2;
}
