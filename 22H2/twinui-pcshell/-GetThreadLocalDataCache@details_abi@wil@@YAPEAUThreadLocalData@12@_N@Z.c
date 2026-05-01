/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180065540
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18002C0D0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004CB50 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1801AC118 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180020CE8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1801A935C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  char *v3; // rbx
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v6; // rsi
  __int64 i; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  v3 = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v9 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v13 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v9, &v13) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v13;
      }
    }
    v4 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v4 + 8 * v6 + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v3 = (char *)(i + 16);
          goto LABEL_9;
        }
      }
      if ( v2 && (v10 = wil::details::ProcessHeapAlloc(0, 0x38uLL), (v11 = (signed __int64)v10) != 0) )
      {
        v3 = (char *)(v10 + 2);
        *(_DWORD *)v10 = CurrentThreadId;
        v10[1] = 0LL;
        *((_WORD *)v10 + 8) = 40;
        *((_DWORD *)v10 + 5) = 0;
        v10[3] = 0LL;
        *((_DWORD *)v10 + 8) = 0;
        v10[5] = 0LL;
        *((_DWORD *)v10 + 12) = 0;
        _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
        do
        {
          v12 = *(_QWORD *)(v4 + 8 * v6 + 8);
          *(_QWORD *)(v11 + 8) = v12;
        }
        while ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v6 + 8), v11, v12) );
      }
      else
      {
        v3 = 0LL;
      }
LABEL_9:
      if ( v3 && !*((_QWORD *)v3 + 1) )
        *((_QWORD *)v3 + 1) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v3;
}
