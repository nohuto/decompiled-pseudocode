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
