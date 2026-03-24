/*
 * XREFs of PsUnregisterSiloMonitor @ 0x14090B530
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x140580ED8 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x140580EE8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140617F50 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090EF94 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14090F02C (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v3; // r9
  void (__fastcall *v4)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v7; // rsi
  __int64 v8; // rax
  PVOID *v9; // rcx
  _DWORD *v10; // r9
  __int64 HostSiloStorage; // rax
  __int64 v12; // r8
  int v13; // ebx
  _OWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v4 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v14, v3);
      for ( i = 0LL; ; i = v7 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v7 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v7);
      }
      if ( *((_BYTE *)P + 16) )
      {
        v8 = HalSystemVectorDispatchEntry();
        P[4](v8);
      }
      KiUnstackDetachProcess((__int64)v14, 0);
      v4 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v4 + 1) != P || (v9 = (PVOID *)P[1], *v9 != P) )
      __fastfail(3u);
    *v9 = v4;
    *((_QWORD *)v4 + 1) = v9;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v14, v10);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v12) = 1;
    v13 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v12, 0LL);
    KiUnstackDetachProcess((__int64)v14, 0);
    if ( v13 )
    {
      if ( v13 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
