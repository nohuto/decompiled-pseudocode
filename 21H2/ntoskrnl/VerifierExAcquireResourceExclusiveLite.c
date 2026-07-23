/*
 * XREFs of VerifierExAcquireResourceExclusiveLite @ 0x1409E2AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409E35D0 (ViResourceAcquireSanityChecks.c)
 */

char __fastcall VerifierExAcquireResourceExclusiveLite(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx
  char v5; // al
  unsigned int v6; // r9d
  char v7; // bl
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  v5 = ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExAcquireResourceExclusiveLite)(a1, v4);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = a2 == 0;
    VfDeadlockAcquireResource(a1, 8, (__int64)KeGetCurrentThread(), v6, retaddr);
  }
  return v7;
}
