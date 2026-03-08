/*
 * XREFs of NtAcceptConnectPort @ 0x140791CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAcceptConnectPort(
        unsigned __int64 a1,
        void *a2,
        __int128 *a3,
        char a4,
        __m128i *a5,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(a1, 0, 0LL, 0LL, 0LL, a2, a3, 0LL, a4, a5, a6, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 == -1073740029 )
    return (unsigned int)-1073741813;
  return v7;
}
