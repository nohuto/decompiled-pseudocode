/*
 * XREFs of ExpWnfDeleteScopeById @ 0x140613A18
 * Callers:
 *     ExWnfExitProcess @ 0x1406132EC (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x140778220 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfFindScopeInstance @ 0x14061089C (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1406A22D0 (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeById(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v4 = (unsigned int)a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, (__int64)a2);
  v7 = CurrentServerSiloGlobals[114];
  if ( v7 )
  {
    v8 = v7 + 24 * v4;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v4 + 4));
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance((_QWORD **)(v8 + 40), a2, a3);
    v13 = ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = ScopeInstance + 4;
      v15 = ScopeInstance[4];
      v16 = (_QWORD *)ScopeInstance[5];
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    LOBYTE(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      LOBYTE(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v13);
  }
  return (char)CurrentServerSiloGlobals;
}
