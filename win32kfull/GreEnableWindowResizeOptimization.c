/*
 * XREFs of GreEnableWindowResizeOptimization @ 0x1C00F43FC
 * Callers:
 *     NtUserEnableWindowResizeOptimization @ 0x1C00F43A0 (NtUserEnableWindowResizeOptimization.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreEnableWindowResizeOptimization(Gre::Base *a1, int a2, int a3)
{
  int v5; // ebp
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = (int)a1;
  v6 = Gre::Base::Globals(a1);
  v10 = *((_QWORD *)v6 + 15);
  GreAcquireSemaphore(v10);
  GreAcquireSemaphore(*((_QWORD *)v6 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v6 + 9), 7LL);
  v8 = *(_DWORD **)(SGDGetSessionState(v7) + 32);
  if ( !v8[2176] )
  {
    v8[2177] = v5;
    v8[2178] = a2;
    v8[2179] = a3;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 9));
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return 1LL;
}
