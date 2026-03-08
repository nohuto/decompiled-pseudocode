/*
 * XREFs of NtNotifyChangeSession @ 0x14075E0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtNotifyChangeSession(
        HANDLE Handle,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char *Src,
        size_t Size)
{
  size_t v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // rax
  char *Pool2; // rax
  unsigned __int16 v22; // r12
  char *v23; // rax
  char v24; // [rsp+30h] [rbp-1A8h]
  char v25; // [rsp+31h] [rbp-1A7h]
  KPROCESSOR_MODE v26; // [rsp+32h] [rbp-1A6h]
  NTSTATUS v27; // [rsp+38h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-188h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-180h] BYREF
  _OWORD Argument1[4]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v31[256]; // [rsp+A0h] [rbp-138h] BYREF

  v11 = (unsigned int)Size;
  v24 = 0;
  memset(Argument1, 0, sizeof(Argument1));
  v25 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( (unsigned int)Size > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v27 = result;
  if ( result < 0 )
    return result;
  v14 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 760LL), Executive, 0, 0, 0LL);
  v15 = v14[3];
  v16 = *(_DWORD *)(v15 + 756);
  if ( v16 == a2 )
  {
    v17 = v16 + 1;
LABEL_5:
    *(_DWORD *)(v15 + 756) = v17;
    goto LABEL_6;
  }
  if ( v16 <= a2 || v16 - a2 >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v22 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v15 + 760), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v14[3] + 760LL), Executive, 0, 0, 0LL);
      ++v22;
      v15 = v14[3];
    }
    while ( v22 <= 0xAu && *(_DWORD *)(v15 + 756) != a2 );
    v17 = a2 + 1;
    v11 = (unsigned int)Size;
    goto LABEL_5;
  }
LABEL_6:
  v18 = v14[3];
  if ( !a4 )
  {
    KeSetEvent((PRKEVENT)(v18 + 760), 0, 0);
    ObfDereferenceObject(v14);
    return 0;
  }
  *(_DWORD *)(v18 + 752) = a5;
  v19 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_8;
  if ( v26 == 1 )
  {
    if ( (unsigned __int64)&Src[v11] > 0x7FFFFFFF0000LL || &Src[v11] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (char *)ExAllocatePool2(256LL, v11, 1850961737LL);
    v19 = Pool2;
    if ( Pool2 )
    {
      v24 = 1;
      memmove(Pool2, Src, v11);
    }
    else
    {
      v19 = v31;
      memmove(v31, Src, v11);
      v25 = 1;
    }
    LODWORD(v11) = Size;
    goto LABEL_8;
  }
  if ( a4 - 1 > 1 )
  {
    v23 = (char *)ExAllocatePool2(256LL, (unsigned int)v11, 1850961737LL);
    v19 = v23;
    if ( v23 )
    {
      v24 = 1;
      memmove(v23, Src, (unsigned int)v11);
      goto LABEL_8;
    }
    v25 = 1;
  }
  v19 = Src;
LABEL_8:
  *(_QWORD *)&Argument1[2] = __PAIR64__(a5, a4);
  DWORD2(Argument1[2]) = v11;
  *(_QWORD *)&Argument1[3] = v19;
  *((_QWORD *)&Argument1[3] + 1) = v14;
  if ( !v25 && a4 - 1 > 1 )
  {
    v20 = ExAllocatePool2(64LL, 64LL, 1850961737LL);
    if ( v20 )
    {
      *(_OWORD *)v20 = Argument1[0];
      *(_OWORD *)(v20 + 16) = Argument1[1];
      *(_OWORD *)(v20 + 32) = Argument1[2];
      *(_OWORD *)(v20 + 48) = Argument1[3];
      *(_QWORD *)(v20 + 16) = IopSessionChangeWorker;
      *(_QWORD *)(v20 + 24) = v20;
      *(_QWORD *)v20 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v20, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v14[3] + 760LL), 0, 0);
  ObfDereferenceObject(v14);
  if ( v19 )
  {
    if ( v24 == 1 )
      ExFreePoolWithTag(v19, 0);
  }
  return v27;
}
