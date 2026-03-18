/*
 * XREFs of NtCreatePort @ 0x1407CC810
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC8A8 (AlpcpCreateConnectionPort.c)
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
