/*
 * XREFs of PspUserThreadStartup @ 0x1406BFC00
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     MmGetSessionLocaleId @ 0x140620660 (MmGetSessionLocaleId.c)
 *     PfProcessCreateNotification @ 0x14062E8B4 (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1406C0488 (PspWriteTebIdealProcessor.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x140707AC0 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x1408879AC (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // r8
  __int64 Process; // r14
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS result; // eax
  struct _KPRCB *v9; // rdi
  ULONG LowPart; // ebx
  int v11; // r8d
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v15; // zf
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v19[112]; // [rsp+50h] [rbp-98h] BYREF

  v18[0] = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v18[2] = (__int64)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (__int64)CurrentThread->ApcState.Process;
  v18[1] = Process;
  if ( (*(_DWORD *)(Process + 2172) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId();
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process + 1124) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process + 1124), 0x13u) )
    {
      PfProcessCreateNotification(Process, *(_QWORD *)(Process + 1304));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v18, v5, v6, v7);
    v9 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v11 = ExGenRandom(1);
    v12 = __rdtsc();
    v6 = (unsigned int)v12 ^ v11;
    v5 = LODWORD(v18[0]) ^ HIDWORD(v18[0]) ^ LowPart ^ (unsigned int)v6 ^ v9->MmPageFaultCount ^ v9->InterruptCount ^ v9->InterruptTime;
    _InterlockedCompareExchange((volatile signed __int32 *)0xFFFFF78000000330LL, v5, 0);
  }
  if ( (*(_BYTE *)(Process + 992) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v19, 0, 0x68uLL);
    v16 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v19);
    LOBYTE(v17) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v16, v17);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process + 2172);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
