/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C007D9E0
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007D944 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007DAC8 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x1C009A310 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C009A3A0 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00C66D0 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     AssociateKernelIocpWcp @ 0x1C007DA70 (AssociateKernelIocpWcp.c)
 *     CreateKernelIocpWcp @ 0x1C00C67B0 (CreateKernelIocpWcp.c)
 */

__int64 __fastcall IOCPDispatcher::SetupIOCPForDispatcherHandle(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 KernelIocpWcp; // rbx

  v5 = a4;
  KernelIocpWcp = a2;
  if ( !a2 && (KernelIocpWcp = CreateKernelIocpWcp()) == 0
    || (int)AssociateKernelIocpWcp(KernelIocpWcp, *(_QWORD *)(a1 + 2904), a3, a5, v5, 0, 0LL) < 0 )
  {
    KeBugCheck(0x164u);
  }
  return KernelIocpWcp;
}
