/*
 * XREFs of VerifierExAcquireSharedWaitForExclusive @ 0x140AA11C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierExAcquireSharedWaitForExclusive(LONG *a1, char a2)
{
  char v4; // al
  unsigned int v5; // r9d
  char v6; // bl
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64 (*)(void))pXdvExAcquireSharedWaitForExclusive)();
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    LOBYTE(v5) = a2 == 0;
    VfDeadlockAcquireResource(a1, 8, (__int64)KeGetCurrentThread(), v5, retaddr);
  }
  return v6;
}
