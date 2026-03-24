/*
 * XREFs of NtCreateWorkerFactory @ 0x140701710
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpInitializeThreadHistory @ 0x14035A764 (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x14035A7C0 (KeInitializeTimer2.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14035A910 (KeDisableQueueingPriorityIncrement.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     IoFreeMiniCompletionPacket @ 0x14065CB10 (IoFreeMiniCompletionPacket.c)
 *     ObInsertObject @ 0x140701A90 (ObInsertObject.c)
 *     ObCreateObject @ 0x1407023B0 (ObCreateObject.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407024D0 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtCreateWorkerFactory(
        HANDLE *a1,
        ACCESS_MASK a2,
        int a3,
        void *a4,
        HANDLE Handle,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v17; // rsi
  NTSTATUS v18; // ebx
  volatile signed __int32 *v19; // rcx
  PVOID v20; // r14
  __int64 MiniCompletionPacket; // rax
  int v22; // r9d
  int v23; // ecx
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  PVOID v27; // rcx
  NTSTATUS result; // eax
  HANDLE v29; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  v29 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v17 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  v19 = (volatile signed __int32 *)Object;
  *((_QWORD *)v17 + 1) = Object;
  if ( v18 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v17, 0);
    return v18;
  }
  KeDisableQueueingPriorityIncrement(v19);
  v18 = ObReferenceObjectByHandleWithTag(
          Handle,
          0x2Au,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v31,
          0LL);
  if ( v18 < 0 )
  {
LABEL_25:
    HalPutDmaAdapter(*((PADAPTER_OBJECT *)v17 + 1));
    goto LABEL_26;
  }
  v20 = v31;
  if ( KeGetCurrentThread()->ApcState.Process != v31 )
  {
    v18 = -1073741811;
    goto LABEL_24;
  }
  v18 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &v29);
  if ( v18 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v20, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v17);
  *((_QWORD *)v17 + 2) = MiniCompletionPacket;
  v23 = 0;
  if ( !MiniCompletionPacket )
  {
    v18 = -1073741801;
LABEL_23:
    ObCloseHandle(v29, 0);
    goto LABEL_24;
  }
  LOBYTE(v22) = PreviousMode;
  LOBYTE(v23) = PreviousMode;
  v18 = ObCreateObject(v23, (_DWORD)ExpWorkerFactoryObjectType, a3, v22, 0, 576, 0, 0, (__int64)&v32);
  if ( v18 < 0 )
  {
    IoFreeMiniCompletionPacket(*((_QWORD *)v17 + 2));
    goto LABEL_23;
  }
  v24 = v32;
  *((_QWORD *)v32 + 2) = v17;
  v24[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v24 + 70) = 0;
  *((_DWORD *)v24 + 71) = a8;
  *((_DWORD *)v24 + 75) = 0;
  v24[36] = 0LL;
  v25 = 0x10000LL;
  if ( a9 )
    v25 = a9;
  v24[7] = v25;
  memset(v24 + 15, 0, 0xA0uLL);
  v24[39] = 0LL;
  v26 = 4096LL;
  if ( a10 )
    v26 = a10;
  v24[8] = v26;
  v24[3] = a6;
  v24[4] = a7;
  v24[38] = 0LL;
  *((_DWORD *)v24 + 80) = 0;
  v24[5] = v29;
  v24[6] = v20;
  *((_DWORD *)v24 + 74) = 0;
  *((_DWORD *)v24 + 142) = 0;
  *((_DWORD *)v24 + 128) = 1;
  KeInitializeTimer2((__int64)(v24 + 41), 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory((__int64)v24);
  v24[13] = 0LL;
  ObfReferenceObject(v27);
  KeRegisterObjectNotification((__int64)(v24 + 41), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v24 + 58));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v24 + 41), v24[14], -v24[14], (__int64)v34);
  result = ObInsertObject(v24, 0LL, a2, 0, 0LL, &v33);
  if ( result >= 0 )
    *a1 = v33;
  return result;
}
