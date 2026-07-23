/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x1406CBF7C
 * Callers:
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SepReferenceLogonSession @ 0x1406CBF44 (SepReferenceLogonSession.c)
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091CAA0 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14091CDC4 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1409229F0 (SeGetLinkedToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall SepReferenceLogonSessionSilo(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v9; // rdi
  __int64 result; // rax

  v6 = (unsigned int)(1529154084 * *a1) >> 28;
  v7 = SepLogonSessions + 8 * v6;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = &SepRmDbLock + (v6 & 3);
  ExAcquireResourceExclusiveLite(v9, 1u);
  do
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
    {
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
      return 3221225567LL;
    }
  }
  while ( *(_QWORD *)(v7 + 160) != a2 || *a1 != *(_DWORD *)(v7 + 8) || a1[1] != *(_DWORD *)(v7 + 12) );
  _m_prefetchw((const void *)(v7 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 8u) & 8) != 0
    && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v7;
  return result;
}
