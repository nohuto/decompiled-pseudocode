/*
 * XREFs of PsShutdownSystem @ 0x1409B05A4
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     ObFastReplaceObject @ 0x140217FC8 (ObFastReplaceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x1406FB574 (PspGetNextSilo.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     PsTerminateServerSilo @ 0x1409A98D0 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1409B0E8C (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // rax
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  void *v4; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 *NextProcess; // rbx
  int v12; // eax
  int v13; // ecx
  NTSTATUS v14; // r14d
  PVOID *v15; // rbx
  __int64 v16; // rbp
  struct _KPROCESS *v17; // rcx
  __int64 **v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rbp
  void *v23; // r14
  void *v24; // rcx
  REGHANDLE v25; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v29 = 0LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = ServerSiloGlobals;
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)CurrentThread, 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo((__int64)CurrentThread, v2) )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v8 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v8 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))PspFreezeProcessWorker, 0LL);
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = 0LL;
      NextProcess = PsGetNextProcess(0LL);
      if ( NextProcess )
      {
        do
        {
          v12 = *((_DWORD *)NextProcess + 543);
          if ( (v12 & 0x1000) == 0
            && NextProcess != PsIdleProcess
            && NextProcess != *((__int64 **)v4 + 110)
            && (v12 & 0x40000000) == 0 )
          {
            v13 = PsTerminateProcess((struct _KPROCESS *)NextProcess, 0xC00002EB);
            if ( (*((_DWORD *)NextProcess + 281) & 4) == 0 && v13 != 290 && (unsigned int)v10 < 3 )
            {
              ObfReferenceObject(NextProcess);
              Object[v10] = NextProcess;
              v10 = (unsigned int)(v10 + 1);
            }
          }
          NextProcess = PsGetNextProcess(NextProcess);
        }
        while ( NextProcess );
        if ( (_DWORD)v10 )
        {
          v14 = KeWaitForMultipleObjects(v10, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v15 = Object;
          v16 = (unsigned int)v10;
          do
          {
            ObfDereferenceObject(*v15++);
            --v16;
          }
          while ( v16 );
          if ( v14 == 258 )
            break;
        }
      }
      v9 = 0;
      if ( !(_DWORD)v10 )
        goto LABEL_26;
    }
    ++v9;
  }
  while ( v9 <= 0xA || PsContinueWaiting );
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v17 = (struct _KPROCESS *)*((_QWORD *)v4 + 110);
    if ( v17 )
    {
      PsTerminateProcess(v17, 0xC00002EB);
      PspWaitForUsermodeExit(*((_QWORD *)v4 + 110));
    }
  }
  v18 = (__int64 **)PspSystemDlls;
  v19 = 7LL;
  do
  {
    if ( *v18 )
    {
      v20 = (*v18)[4];
      if ( v20 )
        MiUnmapViewOfSection(PsInitialSystemProcess, v20, 0, 0);
      v21 = KeGetCurrentThread();
      v22 = **v18;
      v23 = (void *)ObFastReplaceObject((volatile __int64 *)v22, 0LL);
      if ( v23 )
      {
        --v21->KernelApcDisable;
        _InterlockedOr(v26, 0);
        if ( (*(_QWORD *)(v22 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive(v22 + 8);
        KeLeaveCriticalRegionThread((__int64)v21);
        ObfDereferenceObject(v23);
      }
    }
    ++v18;
    --v19;
  }
  while ( v19 );
  ZwClose(*((HANDLE *)PspSystemPartition + 15));
  *((_QWORD *)PspSystemPartition + 15) = 0LL;
  v24 = (void *)PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1];
  if ( (unsigned __int64)v24 >= 2 )
  {
    ObfDereferenceObject(v24);
    PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1] = 1LL;
  }
  v25 = qword_140C03030;
  qword_140C03030 = 0LL;
  dword_140C03010 = 0;
  EtwUnregister(v25);
  return v0;
}
