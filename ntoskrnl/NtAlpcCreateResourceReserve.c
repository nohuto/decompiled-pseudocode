/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x140781290
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcCreateResourceReserve(HANDLE Handle, int a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // rcx
  NTSTATUS Reserve; // ebx
  PVOID v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a4;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    Object = 0LL;
    Reserve = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = Object;
      Reserve = AlpcpCreateReserve(Object);
      if ( Reserve >= 0 )
        *a4 = v13 | 0x80000000;
      ObfDereferenceObject(v10);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Reserve;
}
