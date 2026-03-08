/*
 * XREFs of NtCreatePort @ 0x14077D6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreatePort(int a1, int a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0, a4, 0, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
