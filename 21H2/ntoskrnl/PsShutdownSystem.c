/*
 * XREFs of PsShutdownSystem @ 0x14090AB54
 * Callers:
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     SmIsCompressionProcess @ 0x14022AEBC (SmIsCompressionProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PspGetNextSilo @ 0x140681750 (PspGetNextSilo.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     PsTerminateServerSilo @ 0x140905E60 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x14090B44C (PspWaitForUsermodeExit.c)
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
  int v9; // ebp
  __int64 v10; // rdi
  _DWORD *NextProcess; // rbx
  ULONG_PTR v12; // rcx
  int v13; // r14d
  NTSTATUS v14; // r14d
  PVOID *v15; // rbx
  __int64 v16; // rsi
  ULONG_PTR v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _DMA_ADAPTER *v26; // r14
  struct _DMA_ADAPTER *v27; // rcx
  REGHANDLE v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v32 = 0LL;
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
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v9 = 0;
  while ( 1 )
  {
    v10 = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (NextProcess[543] & 0x1000) == 0
          && NextProcess != PsIdleProcess
          && NextProcess != *((_DWORD **)v4 + 110)
          && !SmIsCompressionProcess(NextProcess) )
        {
          v13 = PsTerminateProcess(v12);
          if ( (NextProcess[281] & 4) == 0 && v13 != 290 && (unsigned int)v10 < 3 )
          {
            ObfReferenceObject(NextProcess);
            Object[v10] = NextProcess;
            v10 = (unsigned int)(v10 + 1);
          }
        }
        NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v10 )
      {
        v14 = KeWaitForMultipleObjects(v10, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v15 = Object;
        v16 = (unsigned int)v10;
        do
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)*v15++);
          --v16;
        }
        while ( v16 );
        if ( v14 == 258 )
          break;
      }
    }
    v9 = 0;
LABEL_42:
    if ( !(_DWORD)v10 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v9 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v17 = *((_QWORD *)v4 + 110);
    if ( v17 )
    {
      PsTerminateProcess(v17);
      PspWaitForUsermodeExit(*((_QWORD *)v4 + 110));
    }
  }
  v18 = (__int64 *)&PspSystemDlls;
  v19 = 6LL;
  do
  {
    v20 = *v18;
    if ( *v18 )
    {
      v21 = *(_QWORD *)(v20 + 40);
      if ( v21 )
      {
        MiUnmapViewOfSection(PsInitialSystemProcess, v21, 0, 0);
        v20 = *v18;
      }
      v22 = KeGetCurrentThread();
      v26 = (struct _DMA_ADAPTER *)ObFastReplaceObject((volatile __int64 *)v20, 0LL);
      if ( v26 )
      {
        --v22->KernelApcDisable;
        _InterlockedOr(v29, 0);
        if ( (*(_QWORD *)(v20 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive(v20 + 8);
        KeLeaveCriticalRegionThread((__int64)v22, v23, v24, v25);
        HalPutDmaAdapter(v26);
      }
    }
    ++v18;
    --v19;
  }
  while ( v19 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v27 = (struct _DMA_ADAPTER *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1];
  if ( (unsigned __int64)v27 >= 2 )
  {
    HalPutDmaAdapter(v27);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1] = 1LL;
  }
  v28 = qword_140C01AD0;
  qword_140C01AD0 = 0LL;
  dword_140C01AB0 = 0;
  EtwUnregister(v28);
  return v0;
}
