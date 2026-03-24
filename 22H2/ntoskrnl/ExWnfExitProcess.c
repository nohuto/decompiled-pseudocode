/*
 * XREFs of ExWnfExitProcess @ 0x1406132EC
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteProcessContext @ 0x140613348 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x140613A18 (ExpWnfDeleteScopeById.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v5 + 2152);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
