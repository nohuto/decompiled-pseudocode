/*
 * XREFs of NtAlpcDisconnectPort @ 0x14068F3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     AlpcpDisconnectPort @ 0x1405E26FC (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  NTSTATUS v4; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Flags;
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v4 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((__int64)DmaAdapter, v3);
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
