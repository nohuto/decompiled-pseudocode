__int64 __fastcall NtTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // r15d
  _KPROCESS *Process; // rbp
  char PreviousMode; // r12
  __int64 result; // rax
  _KPROCESS *v8; // rdi
  struct _KPROCESS *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  volatile signed __int64 *p_Lock; // rdi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v14; // ett
  unsigned int v15; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  Object = 0LL;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    if ( !PreviousMode )
      v3 = (Process->SecureState.SecureHandle & 1) == 0;
    v8 = (_KPROCESS *)Object;
    v9 = (struct _KPROCESS *)Object;
    v10 = *((_DWORD *)Object + 272);
    --CurrentThread->KernelApcDisable;
    v15 = v10;
    v11 = PspTerminateProcess(v9, (__int64)CurrentThread, a2, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == Process )
    {
      if ( PreviousMode == 1 || (Process->SecureState.SecureHandle & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread(a2);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v15, v11);
    }
    goto LABEL_18;
  }
  if ( PreviousMode != 1 && (Process->SecureState.SecureHandle & 1) == 0
    || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) != 0 )
  {
    return 3221225659LL;
  }
  p_Lock = (volatile signed __int64 *)&Process[1].Header.Lock;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  do
  {
    v14 = DirectoryTableBase_high;
    DirectoryTableBase_high = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                DirectoryTableBase_high | 0x40000000,
                                DirectoryTableBase_high);
  }
  while ( v14 != DirectoryTableBase_high );
  if ( (DirectoryTableBase_high & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)&Process[1].Spare2[11] == 259 )
      *(_DWORD *)&Process[1].Spare2[11] = a2;
    if ( (_InterlockedExchangeAdd64(p_Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    v11 = PspTerminateAllThreads(Process, (__int64)CurrentThread, a2, 0);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return v11;
  }
  if ( (_InterlockedExchangeAdd64(p_Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  PspTerminateThreadByPointer((__int64)CurrentThread, a2, 1);
  return 0LL;
}
