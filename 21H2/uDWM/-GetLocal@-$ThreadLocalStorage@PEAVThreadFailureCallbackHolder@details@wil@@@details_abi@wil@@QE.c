/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18002E28C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180007470 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E22C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18002F698 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 i; // rax
  _QWORD *v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v6 = CurrentThreadId % 0xAuLL;
  for ( i = *(_QWORD *)(v2 + 8 * v6); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == CurrentThreadId )
      return i + 16;
  }
  if ( !a2 )
    return 0LL;
  v9 = wil::details::ProcessHeapAlloc(0, 0x18uLL, v5);
  v10 = (signed __int64)v9;
  if ( !v9 )
    return 0LL;
  v9[1] = 0LL;
  v9[2] = 0LL;
  *(_DWORD *)v9 = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v6));
  do
  {
    v11 = *(_QWORD *)(v2 + 8 * v6);
    *(_QWORD *)(v10 + 8) = v11;
  }
  while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v6), v10, v11) );
  return v10 + 16;
}
