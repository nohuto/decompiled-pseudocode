/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1409B1070
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x1405A14B4 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x1405A14C4 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x1406FB574 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x1409B4EC4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x1409B4F94 (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID **v3; // rsi
  void *i; // rcx
  void *NextSilo; // rax
  void *v6; // rbp
  __int64 v7; // rax
  void (__fastcall *v8)(_QWORD); // rcx
  PVOID *v9; // rax
  __int64 HostSiloStorage; // rax
  __int64 v11; // r8
  int v12; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+20h] [rbp-48h] BYREF

  memset(&v13, 0, sizeof(v13));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v3 = (PVOID **)(P + 8);
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v13);
      for ( i = 0LL; ; i = v6 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v6 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          (*((void (__fastcall **)(void *))P + 4))(v6);
      }
      if ( P[16] )
      {
        v7 = PdcCreateWatchdogAroundClientCall();
        (*((void (__fastcall **)(__int64))P + 4))(v7);
      }
      KiUnstackDetachProcess(&v13);
    }
    v8 = *(void (__fastcall **)(_QWORD))P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v9 = *v3, **v3 != P) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    *(_QWORD *)P = 0LL;
    *v3 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( P[16] )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v13);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v11) = 1;
    v12 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v11, 0LL);
    KiUnstackDetachProcess(&v13);
    if ( v12 )
    {
      if ( v12 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
