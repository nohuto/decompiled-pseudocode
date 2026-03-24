/*
 * XREFs of PsStartSiloMonitor @ 0x1407C3C70
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
 *     PspGetServerSiloStatePointer @ 0x140580FA8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140617AF0 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1407C3E20 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14090B6D0 (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // r9
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v7; // rsi
  char v8; // si
  int v9; // r14d
  void *j; // rcx
  void *v11; // rax
  void *v12; // rdi
  _DWORD *v13; // r9
  __int64 *v14; // rax
  char v15; // bp
  void *v17; // r8
  int v18; // esi
  void *k; // rcx
  void *v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  _OWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v17 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
        {
          v1 = -1073741637;
          goto LABEL_15;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_10;
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v23, v4);
      v7 = HalSystemVectorDispatchEntry();
      v1 = PspInvokeCreateCallback(v7, a1);
      if ( v1 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v7, a1);
      KiUnstackDetachProcess((__int64)v23, 0);
      if ( v1 >= 0 )
      {
LABEL_10:
        v8 = 0;
        v9 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v23, v4);
        for ( j = 0LL; ; j = v12 )
        {
          v11 = PspGetNextSilo(j, 1);
          v12 = v11;
          if ( !v11 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v11) - 1) <= 2 )
          {
            ++v9;
            if ( (int)PspInvokeCreateCallback(v12, a1) < 0 )
              v8 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v23, 0);
        if ( v8 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v18 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v23, v13);
            for ( k = 0LL; ; k = v21 )
            {
              v20 = PspGetNextSilo(k, 1);
              v21 = v20;
              if ( !v20 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v20) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v21, a1);
                ++v18;
              }
            }
            if ( v9 != v18 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v22 = HalSystemVectorDispatchEntry();
              PspInvokeCreateCallback(v22, a1);
            }
            KiUnstackDetachProcess((__int64)v23, 0);
          }
          v1 = -1073741248;
        }
        else
        {
          v14 = (__int64 *)qword_140C1E0A8;
          if ( *(__int64 **)qword_140C1E0A8 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v1 = 0;
          *(_QWORD *)(a1 + 8) = v14;
          *v14 = a1;
          qword_140C1E0A8 = a1;
        }
      }
    }
  }
LABEL_15:
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock(&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
