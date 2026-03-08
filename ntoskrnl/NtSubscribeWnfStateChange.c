/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140719990
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140719A64 (ExpWnfSubscribeWnfStateChange.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(int a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v11 & -(__int64)(a4 != 0LL), 0, a1, a2, 0LL, 0LL, a3, 1);
  if ( v9 >= 0 && a4 )
    *a4 = v11;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
