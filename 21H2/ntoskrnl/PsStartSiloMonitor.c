/*
 * XREFs of PsStartSiloMonitor @ 0x1407C4190
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
 *     PspGetServerSiloStatePointer @ 0x1405811E8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140681750 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1407C4340 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14090B830 (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v6; // rsi
  char v7; // si
  int v8; // r14d
  void *j; // rcx
  void *v10; // rax
  void *v11; // rdi
  __int64 *v12; // rax
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v18; // r8
  int v19; // esi
  void *k; // rcx
  void *v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  _OWORD v24[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v18 )
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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v24);
      v6 = HalSystemVectorDispatchEntry();
      v1 = PspInvokeCreateCallback(v6, a1);
      if ( v1 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v6, a1);
      KiUnstackDetachProcess((__int64)v24, 0LL);
      if ( v1 >= 0 )
      {
LABEL_10:
        v7 = 0;
        v8 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v24);
        for ( j = 0LL; ; j = v11 )
        {
          v10 = PspGetNextSilo(j, 1);
          v11 = v10;
          if ( !v10 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v10) - 1) <= 2 )
          {
            ++v8;
            if ( (int)PspInvokeCreateCallback(v11, a1) < 0 )
              v7 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v24, 0LL);
        if ( v7 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v19 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v24);
            for ( k = 0LL; ; k = v22 )
            {
              v21 = PspGetNextSilo(k, 1);
              v22 = v21;
              if ( !v21 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v21) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v22, a1);
                ++v19;
              }
            }
            if ( v8 != v19 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v23 = HalSystemVectorDispatchEntry();
              PspInvokeCreateCallback(v23, a1);
            }
            KiUnstackDetachProcess((__int64)v24, 0LL);
          }
          v1 = -1073741248;
        }
        else
        {
          v12 = (__int64 *)qword_140C1E0A8;
          if ( *(__int64 **)qword_140C1E0A8 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v1 = 0;
          *(_QWORD *)(a1 + 8) = v12;
          *v12 = a1;
          qword_140C1E0A8 = a1;
        }
      }
    }
  }
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  return (unsigned int)v1;
}
