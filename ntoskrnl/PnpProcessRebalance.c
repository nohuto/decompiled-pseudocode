/*
 * XREFs of PnpProcessRebalance @ 0x140562AF4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PiCollapseRebalanceRequests @ 0x140562860 (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v6; // ebx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v3[75] - 789) <= 1 )
  {
    ObfDereferenceObject(v2);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && (v4 & 1) != 0 && PiCollapseRebalanceRequests(a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v6 = PnpRebalance(v3, 0LL, 0LL, v4);
    KeReleaseSemaphoreEx((__int64)&PpRegistrySemaphore, 0, 1);
    KeLeaveCriticalRegion();
    if ( v6 >= 0 )
    {
      LODWORD(v8) = 3;
      BYTE4(v8) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v8, 0, 0, 1, 0);
    }
    return (unsigned int)v6;
  }
}
