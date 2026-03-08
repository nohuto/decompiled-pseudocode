/*
 * XREFs of NtQueueApcThreadEx2 @ 0x1406F5AB0
 * Callers:
 *     NtQueueApcThread @ 0x1406F4EF0 (NtQueueApcThread.c)
 *     NtQueueApcThreadEx @ 0x1406F5A60 (NtQueueApcThreadEx.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx2(void *a1, void *a2, int a3, __int64 a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  char v10; // r15
  KPROCESSOR_MODE PreviousMode; // bp
  char v12; // r14
  NTSTATUS result; // eax
  PVOID v14; // rsi
  _KPROCESS *Process; // rcx
  char *Pool2; // rbx
  __int64 (__fastcall *v17)(); // r9
  void (__stdcall *v18)(PVOID); // rbp
  NTSTATUS v19; // ebx
  __int16 v20; // ax
  __int64 v21; // rax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v23; // [rsp+48h] [rbp-20h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a3 & 0xFFFEFFFE) != 0 )
    return -1073741811;
  if ( (a3 & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( a2 )
    return -1073741811;
  v12 = 1;
LABEL_4:
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  v14 = Object;
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0
    || (v14 = Object, Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.StaticBitmap[30])
    && ((v20 = WORD2(Process[2].Affinity.StaticBitmap[20]), v20 == 332) || v20 == 452)
    && ((v21 = *((_QWORD *)Object + 68), !*(_QWORD *)(v21 + 1408)) || *(_WORD *)(v21 + 2412) == 0x8664)
    && (unsigned __int64)-(a4 >> 2) <= 0xFFFFFFFF )
  {
    v19 = -1073741816;
  }
  else if ( a2 )
  {
    v23 = 0LL;
    v19 = ObReferenceObjectByHandle(a2, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v23, 0LL);
    if ( v19 >= 0 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0) )
      {
        v17 = PspUserApcReserveKernelRoutine;
        v14 = Object;
        v18 = (void (__stdcall *)(PVOID))PspUserApcReserveKernelRoutine;
        Pool2 = (char *)v23 + 8;
LABEL_11:
        KeInitializeApc((__int64)Pool2, (__int64)v14, 0, (__int64)v17, (__int64)v18, a4, v10, a5);
        if ( (a3 & 0x10000) != 0 )
          Pool2[1] |= 1u;
        if ( (unsigned __int8)KeInsertQueueApc((__int64)Pool2, a6, a7, 0) )
        {
          v19 = 0;
        }
        else
        {
          ((void (__fastcall *)(char *))v18)(Pool2);
          v19 = -1073741823;
        }
        goto LABEL_15;
      }
      ObfDereferenceObject(v23);
      v14 = Object;
      v19 = -1073741584;
    }
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(65LL, 88LL, 1885434704LL);
    if ( Pool2 )
    {
      v17 = (__int64 (__fastcall *)())KeSpecialUserApcKernelRoutine;
      v10 = v12 ^ 1;
      v18 = ExFreePool;
      if ( !v12 )
        v17 = (__int64 (__fastcall *)())SC_ENV::Free;
      goto LABEL_11;
    }
    v19 = -1073741801;
  }
LABEL_15:
  ObfDereferenceObject(v14);
  return v19;
}
