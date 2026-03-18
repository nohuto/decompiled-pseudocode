/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140005C8C
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140006B10 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14000639C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     StringCopyWorkerW @ 0x1400076A8 (StringCopyWorkerW.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140007AD4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140007B6C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        const unsigned __int16 *a2,
        size_t *a3,
        unsigned __int64 a4)
{
  wchar_t *v6; // rax
  __int64 v7; // r11
  LONG v8; // edi
  __int64 v9; // rax
  wchar_t *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  wchar_t v14; // r9
  wchar_t *v15; // rax
  LONG v16; // r8d
  unsigned __int64 v17; // rbp
  LONG v18; // esi
  HANDLE Semaphore; // rax
  wil::details *v20; // rcx
  int LastErrorFailHr; // esi
  __int64 v23; // rcx
  wchar_t *v24; // rax
  __int64 v25; // rax
  wchar_t *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  char *v29; // rax
  wchar_t v30; // r8
  wchar_t *v31; // rax
  HANDLE v32; // rax
  wil::details *v33; // rcx
  int v34; // ebx
  size_t dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsb; // [rsp+20h] [rbp-258h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCopyWorkerW(pszDest, 0x104uLL, a3, a2, dwFlags);
  v6 = pszDest;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v9 = 260 - v7;
  else
    v9 = 0LL;
  if ( v7 )
  {
    v10 = &pszDest[v9];
    v11 = 260 - v9;
    if ( v9 != 260 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)L"_p0" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    *v15 = 0;
  }
  v16 = 1;
  v17 = a4 >> 31;
  v18 = a4 & 0x7FFFFFFF;
  if ( v18 )
    v16 = v18;
  Semaphore = CreateSemaphoreExW(0LL, v18, v16, pszDest, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v20);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v23 = 260LL;
    v24 = pszDest;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    if ( v23 )
      v25 = 260 - v23;
    else
      v25 = 0LL;
    if ( v23 )
    {
      v26 = &pszDest[v25];
      v27 = 260 - v25;
      if ( 260 != v25 )
      {
        v28 = 2147483646LL;
        v29 = (char *)((char *)L"h" - (char *)v26);
        do
        {
          if ( !v28 )
            break;
          v30 = *(wchar_t *)((char *)v26 + (_QWORD)v29);
          if ( !v30 )
            break;
          *v26 = v30;
          --v28;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      v31 = v26 - 1;
      if ( v27 )
        v31 = v26;
      *v31 = 0;
    }
    if ( (_DWORD)v17 )
      v8 = v17;
    v32 = CreateSemaphoreExW(0LL, v17, v8, pszDest, 0, 0x1F0003u);
    if ( v32 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (char *)this + 8,
        v32);
      v34 = 0;
    }
    else
    {
      v34 = wil::details::GetLastErrorFailHr(v33);
    }
    if ( v34 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"wil",
        (const char *)(unsigned int)v34,
        dwFlagsb);
      return (unsigned int)v34;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (unsigned int)"wil",
      (const char *)(unsigned int)LastErrorFailHr,
      dwFlagsa);
    return (unsigned int)LastErrorFailHr;
  }
}
