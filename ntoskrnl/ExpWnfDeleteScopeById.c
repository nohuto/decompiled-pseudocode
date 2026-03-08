/*
 * XREFs of ExpWnfDeleteScopeById @ 0x140704810
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 *     ExWnfExitProcess @ 0x140704A58 (ExWnfExitProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfFindScopeInstance @ 0x14071B968 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14079450C (ExpWnfFreeScopeInstance.c)
 */

int __fastcall ExpWnfDeleteScopeById(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // r9
  char *v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Flink = CurrentServerSiloGlobals[57].Flink;
  if ( Flink )
  {
    v8 = (char *)Flink + 24 * v6;
    v9 = (unsigned __int64 *)&Flink[2] + 3 * v6;
    v10 = KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    ScopeInstance = ExpWnfFindScopeInstance(v8 + 40, a2, a3);
    v13 = (void *)ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = (_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD *)(ScopeInstance + 32);
      v16 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    LODWORD(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      LODWORD(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v13);
  }
  return (int)CurrentServerSiloGlobals;
}
