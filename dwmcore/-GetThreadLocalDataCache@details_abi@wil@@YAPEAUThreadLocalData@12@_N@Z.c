/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18010058C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800FFE70 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x18010060C (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rbx
  __int64 Shared; // rdi
  DWORD CurrentThreadId; // r8d
  __int64 i; // rcx
  bool v6; // zf
  __int64 v7; // rcx

  v1 = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::GetShared(this);
    if ( Shared )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(Shared + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v6 = i == -16;
          v7 = i + 16;
          v1 = v7;
          if ( !v6 && !*(_QWORD *)(v7 + 8) )
            *(_QWORD *)(v7 + 8) = Shared + 4;
          return (struct wil::details_abi::ThreadLocalData *)v1;
        }
      }
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v1;
}
