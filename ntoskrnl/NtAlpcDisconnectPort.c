/*
 * XREFs of NtAlpcDisconnectPort @ 0x140787CB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((__int64)Object, v3);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
