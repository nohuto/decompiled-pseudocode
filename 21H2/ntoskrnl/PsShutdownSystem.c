/*
 * XREFs of PsShutdownSystem @ 0x1409B1074
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SmIsCompressionProcess @ 0x14030263C (SmIsCompressionProcess.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PspGetNextSilo @ 0x14068A6A0 (PspGetNextSilo.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     PsEnumProcesses @ 0x1406BF0AC (PsEnumProcesses.c)
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1409B196C (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 *NextProcess; // rbx
  __int64 v9; // rcx
  int v10; // ecx
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  volatile __int64 *v18; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  void *v20; // r14
  void *v21; // rcx
  REGHANDLE v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v26 = 0LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = 0LL;
      NextProcess = PsGetNextProcess(0LL);
      if ( NextProcess )
      {
        do
        {
          if ( (*((_DWORD *)NextProcess + 543) & 0x1000) == 0
            && NextProcess != PsIdleProcess
            && NextProcess != *((__int64 **)ServerSiloGlobals + 110)
            && !SmIsCompressionProcess(NextProcess) )
          {
            v10 = PsTerminateProcess(v9, 0xC00002EB);
            if ( (*((_DWORD *)NextProcess + 281) & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
            {
              ObfReferenceObject(NextProcess);
              Object[v7] = NextProcess;
              v7 = (unsigned int)(v7 + 1);
            }
          }
          NextProcess = PsGetNextProcess(NextProcess);
        }
        while ( NextProcess );
        if ( (_DWORD)v7 )
        {
          v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v12 = Object;
          v13 = (unsigned int)v7;
          do
          {
            ObfDereferenceObject(*v12++);
            --v13;
          }
          while ( v13 );
          if ( v11 == 258 )
            break;
        }
      }
      v6 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_26;
    }
    ++v6;
  }
  while ( v6 <= 0xA || PsContinueWaiting );
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = *((_QWORD *)ServerSiloGlobals + 110);
    if ( v14 )
    {
      PsTerminateProcess(v14, 0xC00002EB);
      PspWaitForUsermodeExit(*((_QWORD *)ServerSiloGlobals + 110));
    }
  }
  v15 = (__int64 *)PspSystemDlls;
  v16 = 6LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      if ( *(_QWORD *)(v17 + 32) )
      {
        MmUnmapViewOfSection((ULONG_PTR)PsInitialSystemProcess);
        v17 = *v15;
      }
      v18 = *(volatile __int64 **)v17;
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)ObFastReplaceObject(*(volatile __int64 **)v17, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v23, 0);
        if ( (v18[1] & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((ULONG_PTR)(v18 + 1));
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v21 = (void *)PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1];
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1] = 1LL;
  }
  v22 = qword_140C03068;
  qword_140C03068 = 0LL;
  dword_140C03048 = 0;
  EtwUnregister(v22);
  return v0;
}
