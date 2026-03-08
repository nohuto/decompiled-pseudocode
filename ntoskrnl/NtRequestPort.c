/*
 * XREFs of NtRequestPort @ 0x14077B630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtRequestPort(HANDLE Handle, __int64 a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v8[0] = Object;
    LODWORD(v8[6]) = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v4 = AlpcpSendMessage(v8, a2, 0LL, v5);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
