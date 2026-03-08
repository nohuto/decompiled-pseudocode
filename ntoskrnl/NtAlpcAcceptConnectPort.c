/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x1407127A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
