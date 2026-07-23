/*
 * XREFs of PsUnregisterSiloMonitor @ 0x14090B640
 * Callers:
 *     <none>
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x1405811D8 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x1405811E8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140681750 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090F0A4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14090F13C (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v3)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v6; // rsi
  __int64 v7; // rax
  PVOID *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 HostSiloStorage; // rax
  __int64 v13; // r8
  int v14; // ebx
  _OWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v3 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v15);
      for ( i = 0LL; ; i = v6 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v6 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v6);
      }
      if ( *((_BYTE *)P + 16) )
      {
        v7 = HalSystemVectorDispatchEntry();
        P[4](v7);
      }
      KiUnstackDetachProcess((__int64)v15, 0LL);
      v3 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v3 + 1) != P || (v8 = (PVOID *)P[1], *v8 != P) )
      __fastfail(3u);
    *v8 = v3;
    *((_QWORD *)v3 + 1) = v8;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v15);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v13) = 1;
    v14 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v13, 0LL);
    KiUnstackDetachProcess((__int64)v15, 0LL);
    if ( v14 )
    {
      if ( v14 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
