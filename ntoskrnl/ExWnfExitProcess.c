/*
 * XREFs of ExWnfExitProcess @ 0x140704A58
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteScopeById @ 0x140704810 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140704AB8 (ExpWnfDeleteProcessContext.c)
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
    ExpWnfDeleteScopeById(3LL, (__int64)&v5, 8u);
  KeLeaveCriticalRegion();
}
