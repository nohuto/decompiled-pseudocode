/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x14095CC4C
 * Callers:
 *     ExWnfCleanupServerSiloState @ 0x14095CAE0 (ExWnfCleanupServerSiloState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExpWnfFreeScopeInstance @ 0x1406A22D0 (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  unsigned __int64 Count; // rcx

  v4 = (unsigned __int64 *)(a1 + 32 + 24LL * a2);
  v5 = a1 + 40 + 24LL * a2;
  v6 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  while ( 1 )
  {
    v8 = *(struct _EX_RUNDOWN_REF **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5
      || (Count = v8->Count, *(struct _EX_RUNDOWN_REF **)(v8->Count + 8) != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v5 = Count;
    *(_QWORD *)(Count + 8) = v5;
    if ( v8 == (struct _EX_RUNDOWN_REF *)v5 )
      break;
    v8->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v8 - 4, 1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
