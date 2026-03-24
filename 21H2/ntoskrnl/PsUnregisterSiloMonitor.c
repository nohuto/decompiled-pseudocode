/*
 * XREFs of PsUnregisterSiloMonitor @ 0x14090B4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x140252E40 (HalSystemVectorDispatchEntry.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x140580F98 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x140580FA8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140617AF0 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090EF44 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14090EFDC (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
    ExfTryToWakePushLock(&PspSiloMonitorLock);
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
