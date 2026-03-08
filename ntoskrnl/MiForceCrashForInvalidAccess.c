/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x140A28438
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x140643DB8 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwCreateThreadEx @ 0x140413BF0 (ZwCreateThreadEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkQueueUserExceptionReport @ 0x14093679C (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x140971344 (KeRequestTerminationProcess.c)
 */

char __fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  _QWORD v7[24]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (HIDWORD(IoThreadToProcess(CurrentThread)[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(
          L"MemoryManager",
          26LL,
          36864LL,
          -1073739994LL,
          (__int64)ProcessId,
          0LL,
          0LL,
          0LL,
          0);
      }
      else
      {
        memset(v7, 0, 0x98uLL);
        LODWORD(v7[0]) = -1073739994;
        LODWORD(v7[3]) = 1;
        v7[4] = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport((__int64)CurrentThread, 0xEu, (__int64)v7);
      }
      PsFreezeProcess((__int64)Process, 0);
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL) < 0 )
      {
        PsTerminateProcess(Process, 0xC0000725);
      }
      else
      {
        Object = 0LL;
        ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
