/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x1405DC7FC
 * Callers:
 *     SepReferenceLogonSession @ 0x1405DC7C4 (SepReferenceLogonSession.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     SeInitServerSilo @ 0x14091C0D4 (SeInitServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091C940 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14091CC64 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x140922890 (SeGetLinkedToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
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
