/*
 * XREFs of CmpInitializeRegistryProcess @ 0x140799280
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     CmSiProcessTupleInitialize @ 0x14032D314 (CmSiProcessTupleInitialize.c)
 *     ExInitializeLookasideListEx @ 0x140352410 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403AEEAC (CmSiProcessTupleStartFromHandle.c)
 *     MmAdjustWorkingSetSize @ 0x1403AEF20 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403F9DA0 (ZwSetInformationProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     CmpCreateRegistryProcessToken @ 0x140798BF0 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryThread @ 0x14079A1D4 (CmpCreateRegistryThread.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-1h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+7h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp+Fh] BYREF
  _OWORD v12[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v12, 0, sizeof(v12));
  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v10 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  CmSiProcessTupleInitialize();
  v1 = CmpCreateRegistryProcessToken(&Object);
  if ( v1 >= 0 )
  {
    v1 = PsCreateMinimalProcess(
           PsInitialSystemProcess,
           (__int64)&CmRegistryProcessName,
           0LL,
           BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
           0LL,
           0,
           0,
           0LL,
           0LL,
           &ProcessHandle);
    if ( v1 < 0
      || (v1 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, ProcessInformation),
          v1 < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      v1 = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( v1 >= 0 )
      {
        v1 = CmSiProcessTupleStartFromHandle(v2, v0);
        if ( v1 >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v12, v3, v4, v5);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v12, 0);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          v1 = CmpCreateRegistryThread(&v10, v6, CmpDummyThreadRoutine, 0LL);
          if ( v1 >= 0 )
          {
            v1 = ExInitializeLookasideListEx(
                   (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                   (PALLOCATE_FUNCTION_EX)CmpAllocateTransientPoolWithTag,
                   (PFREE_FUNCTION_EX)CmSiFreeMemory,
                   PagedPool,
                   0,
                   0x1000uLL,
                   0x42424D43u,
                   0);
            if ( v1 >= 0 )
              v1 = 0;
          }
        }
      }
    }
  }
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v10 )
    ZwClose(v10);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)v1;
}
