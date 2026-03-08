/*
 * XREFs of NtCreateWorkerFactory @ 0x14068A160
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableQueueingPriorityIncrement @ 0x140203AE8 (KeDisableQueueingPriorityIncrement.c)
 *     ExpInitializeThreadHistory @ 0x140203AF8 (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x140203D80 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068A5B0 (IoAllocateMiniCompletionPacket.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateWorkerFactory(
        __int64 *a1,
        __int64 a2,
        int a3,
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
  NTSTATUS v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  int v21; // r9d
  int v22; // ecx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  PVOID v26; // rcx
  __int64 result; // rax
  ULONG_PTR v28; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v31; // [rsp+60h] [rbp-58h] BYREF
  PVOID v32; // [rsp+68h] [rbp-50h] BYREF
  PVOID v33; // [rsp+70h] [rbp-48h] BYREF
  __int64 v34; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v35[3]; // [rsp+88h] [rbp-30h] BYREF

  Handle = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
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
  v31 = 0LL;
  v17 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &v31, 0LL);
  v18 = (volatile signed __int32 *)v31;
  *(_QWORD *)(v16 + 8) = v31;
  if ( v17 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x66577845u, (__int64)&v32, 0LL, 0LL);
  if ( v17 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
    goto LABEL_26;
  }
  v19 = v32;
  if ( KeGetCurrentThread()->ApcState.Process != v32 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v17 = ObOpenObjectByPointer(v32, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v17 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
  v22 = 0;
  if ( !MiniCompletionPacket )
  {
    v17 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  LOBYTE(v21) = PreviousMode;
  LOBYTE(v22) = PreviousMode;
  v17 = ObCreateObjectEx(
          v22,
          (_DWORD)ExpWorkerFactoryObjectType,
          a3,
          v21,
          (__int64)Object,
          672,
          0,
          0,
          (__int64)&v33,
          0LL);
  if ( v17 < 0 )
  {
    v28 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v28 + 56) = 0LL;
    IopFreeMiniCompletionPacket(v28);
    goto LABEL_23;
  }
  v23 = v33;
  *((_QWORD *)v33 + 2) = v16;
  v23[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v23 + 94) = 0;
  *((_DWORD *)v23 + 95) = a8;
  *((_DWORD *)v23 + 99) = 0;
  v23[48] = 0LL;
  v24 = 0x10000LL;
  if ( a9 )
    v24 = a9;
  v23[7] = v24;
  memset(v23 + 15, 0, 0x100uLL);
  v23[51] = 0LL;
  v25 = 4096LL;
  if ( a10 )
    v25 = a10;
  v23[8] = v25;
  v23[3] = a6;
  v23[4] = a7;
  v23[50] = 0LL;
  *((_DWORD *)v23 + 104) = 0;
  v23[5] = Handle;
  v23[6] = v19;
  *((_DWORD *)v23 + 98) = 0;
  *((_DWORD *)v23 + 166) = 0;
  *((_DWORD *)v23 + 152) = 1;
  KeInitializeTimer2((__int64)(v23 + 53), 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory((__int64)v23);
  v23[13] = 0LL;
  ObfReferenceObject(v26);
  KeRegisterObjectNotification((__int64)(v23 + 53), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v23 + 70));
  v35[0] = 0LL;
  v35[1] = -1LL;
  KeSetTimer2((__int64)(v23 + 53), v23[14], -v23[14], (__int64)v35);
  result = ObInsertObjectEx(v23, 0LL, 0, 0LL, (__int64)&v34);
  if ( (int)result >= 0 )
    *a1 = v34;
  return result;
}
