/*
 * XREFs of KeSetLegacyAffinityThread @ 0x14035E050
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r9
  __int64 v9; // rdi
  ULONG_PTR CurrentThread; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPRCB *v15; // rdi
  _DWORD *v16; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  bool v27; // zf
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v32; // [rsp+28h] [rbp-60h] BYREF
  __int128 v33; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( !a2 )
    return v3;
  v32 = 0LL;
  v33 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  WORD4(v33) = *(_WORD *)(a1 + 560);
  v9 = qword_140CFC848[WORD4(v33)] & a2;
  if ( v9 && (v9 & *(_QWORD *)(v2 + 8LL * WORD4(v33) + 88)) == v9 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)&v33 = v9;
    KiSetAffinityThread(a1, (__int64)&v32, (__int64)&v33, v8);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v32);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v15 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        v16 = v15->SchedulerAssist;
        if ( v16 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v23 = v16[6];
            v16[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v21 = v15->SchedulerAssist;
        if ( v21 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v24 = v21[6] - 1;
            v21[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v31, v12, v13, v14);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v18, v19);
      LOBYTE(v20) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      {
LABEL_39:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_9:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v27 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        __writecr8(CurrentIrql);
        return v3;
      }
    }
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v27 = (v26[5] & 0xFFFF0003) == 0;
      v26[5] &= 0xFFFF0003;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
    goto LABEL_39;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2LL);
  return v3;
}
