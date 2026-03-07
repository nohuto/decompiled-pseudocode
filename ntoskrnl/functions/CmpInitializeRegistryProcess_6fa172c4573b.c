__int64 CmpInitializeRegistryProcess()
{
  void *v0; // rdi
  int MinimalProcess; // ebx
  int v2; // r9d
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE Handle[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  void *v8; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v9; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)Handle = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    LOBYTE(v2) = BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink);
    MinimalProcess = PsCreateMinimalProcess(
                       (_DWORD)PsInitialSystemProcess,
                       (unsigned int)&CmRegistryProcessName,
                       0,
                       v2,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       (__int64)&v8);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, Handle),
          MinimalProcess < 0) )
    {
      v0 = v8;
    }
    else
    {
      v0 = v8;
      MinimalProcess = ZwSetInformationProcess((__int64)v8, 9LL);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v3, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          CmSiSetProcessWorkingSetMaximum();
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          MinimalProcess = CmpCreateRegistryThread(&v9, v4, CmpDummyThreadRoutine, 0LL);
          if ( MinimalProcess >= 0 )
          {
            MinimalProcess = ExInitializeLookasideListEx(
                               &CmpBounceBufferLookaside,
                               (PALLOCATE_FUNCTION_EX)CmpAllocatePoolLookaside,
                               (PFREE_FUNCTION_EX)CmSiFreeMemory,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( MinimalProcess >= 0 )
              MinimalProcess = 0;
          }
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v9 )
    ZwClose(v9);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)MinimalProcess;
}
