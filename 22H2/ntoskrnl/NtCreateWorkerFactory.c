/*
 * XREFs of NtCreateWorkerFactory @ 0x1407860A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14031E08C (KeDisableQueueingPriorityIncrement.c)
 *     ExpInitializeThreadHistory @ 0x14031E09C (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x14031E320 (KeInitializeTimer2.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x140728C70 (IopFreeMiniCompletionPacket.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407864F0 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtCreateWorkerFactory(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        ULONG_PTR BugCheckParameter1,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  int v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  PVOID v24; // rcx
  __int64 result; // rax
  ULONG_PTR v26; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h] BYREF
  PVOID v31; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v33[3]; // [rsp+88h] [rbp-30h] BYREF

  Handle = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  Pool2 = ExAllocatePool2(65LL, 40LL, 1666674772LL);
  v16 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v29 = 0LL;
  v17 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &v29, 0LL);
  v18 = (volatile signed __int32 *)v29;
  *(_QWORD *)(v16 + 8) = v29;
  if ( v17 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          42,
          (__int64)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v30,
          0LL,
          0LL);
  if ( v17 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
    goto LABEL_26;
  }
  v19 = v30;
  if ( KeGetCurrentThread()->ApcState.Process != v30 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v17 = ObOpenObjectByPointer(v30, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v17 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    v17 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  v17 = ObCreateObjectEx(
          PreviousMode,
          ExpWorkerFactoryObjectType,
          a3,
          PreviousMode,
          (__int64)Object,
          672,
          0,
          0,
          &v31,
          0LL);
  if ( v17 < 0 )
  {
    v26 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v26 + 56) = 0LL;
    IopFreeMiniCompletionPacket(v26);
    goto LABEL_23;
  }
  v21 = v31;
  *((_QWORD *)v31 + 2) = v16;
  v21[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v21 + 94) = 0;
  *((_DWORD *)v21 + 95) = a8;
  *((_DWORD *)v21 + 99) = 0;
  v21[48] = 0LL;
  v22 = 0x10000LL;
  if ( a9 )
    v22 = a9;
  v21[7] = v22;
  memset(v21 + 15, 0, 0x100uLL);
  v21[51] = 0LL;
  v23 = 4096LL;
  if ( a10 )
    v23 = a10;
  v21[8] = v23;
  v21[3] = a6;
  v21[4] = a7;
  v21[50] = 0LL;
  *((_DWORD *)v21 + 104) = 0;
  v21[5] = Handle;
  v21[6] = v19;
  *((_DWORD *)v21 + 98) = 0;
  *((_DWORD *)v21 + 166) = 0;
  *((_DWORD *)v21 + 152) = 1;
  KeInitializeTimer2((__int64)(v21 + 53), 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory((__int64)v21);
  v21[13] = 0LL;
  ObfReferenceObject(v24);
  KeRegisterObjectNotification((__int64)(v21 + 53), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v21 + 70));
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2((__int64)(v21 + 53), v21[14], -v21[14], (__int64)v33);
  result = ObInsertObjectEx((char *)v21, 0LL, a2, 0, 0, 0LL, &v32);
  if ( (int)result >= 0 )
    *a1 = v32;
  return result;
}
