__int64 __fastcall ImpInitializeWork(PVOID Object, struct _KEVENT **a2, __int64 a3)
{
  char v4; // r13
  char v5; // r14
  char v6; // r15
  struct _KEVENT *v7; // rsi
  struct _KEVENT *v8; // rdi
  __int64 v9; // r8
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  PVOID v12; // r12
  void *v13; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+C0h] [rbp+48h] BYREF
  struct _KEVENT **v17; // [rsp+C8h] [rbp+50h]
  HANDLE ProcessHandle; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Objecta; // [rsp+D8h] [rbp+60h] BYREF

  v17 = a2;
  *(&ImpRequestListHead + 1) = &ImpRequestListHead;
  ImpRequestListHead = &ImpRequestListHead;
  v4 = 0;
  ProcessHandle = 0LL;
  v5 = 0;
  ThreadHandle = 0LL;
  v6 = 0;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  LOBYTE(a3) = 1;
  v8 = (struct _KEVENT *)ImpAllocate(24LL, 0LL, a3);
  if ( !v8 || (LOBYTE(v9) = 1, (v7 = (struct _KEVENT *)ImpAllocate(24LL, 0LL, v9)) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  KeInitializeEvent(v8, SynchronizationEvent, 0);
  KeInitializeEvent(v7, SynchronizationEvent, 0);
  v10 = ObOpenObjectByPointer(Object, 0, 0LL, 2u, 0LL, 0, &ProcessHandle);
  if ( v10 >= 0 )
  {
    v10 = ImpInitializeLock();
    if ( v10 >= 0 )
    {
      v6 = 1;
      if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
      {
        v10 = ImpRpcAsyncInit();
        if ( v10 < 0 )
          goto LABEL_20;
        v4 = 1;
      }
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      v5 = 1;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ImpAcquireLock();
      v10 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, ProcessHandle, 0LL, ImpWorkerRoutine, v8);
      if ( v10 >= 0 )
      {
        Objecta = 0LL;
        v11 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Objecta, 0LL);
        v12 = Objecta;
        v10 = v11;
        if ( v11 >= 0 )
        {
          v13 = ThreadHandle;
          ThreadHandle = 0LL;
          ImpWorkerEvent = v7;
          v7 = 0LL;
          ImpIsWorkerThreadEnabled = 1;
          v6 = 0;
          ImpWorkerThreadHandle = v13;
          ImpWorkerThread = (__int64)Objecta;
          ImpReleaseLock();
          if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
          {
            v4 = 0;
            *v17 = v8;
          }
          else if ( KeSetEvent(v8, 0, 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          }
          v8 = 0LL;
        }
        v5 = v6;
        if ( v12 )
          ObfDereferenceObject(v12);
      }
    }
  }
LABEL_20:
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v5 )
    ImpReleaseLock();
  if ( v6 )
    ImpCleanupLock();
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() && v4 )
    ImpRpcAsyncUnInit();
  return (unsigned int)v10;
}
