/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1801AC958
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1801AC8C8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801A8DBC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1801AA594 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rax
  WCHAR v13; // r9
  WCHAR *v14; // rax
  wil::details *v15; // rax
  void *v16; // rdx
  const char *v17; // r9
  int ValueFromSemaphore; // eax
  int v19; // esi
  __int64 v20; // rcx
  WCHAR *v21; // rax
  __int64 v22; // rax
  WCHAR *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rcx
  char *v26; // rax
  WCHAR v27; // r8
  WCHAR *v28; // rax
  wil::details *v29; // rax
  const char *v30; // r9
  void *v31; // rdx
  unsigned int LastError; // edi
  int v33; // eax
  void *v34; // rdx
  int v36; // [rsp+20h] [rbp-E0h] BYREF
  int v37; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v38; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v39; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v8 = 260 - v6;
  else
    v8 = 0LL;
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v39 = v15;
  if ( v15 )
  {
    v37 = 0;
    v36 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v37);
    v19 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      v20 = 260LL;
      v21 = Name;
      do
      {
        if ( !*v21 )
          break;
        ++v21;
        --v20;
      }
      while ( v20 );
      if ( v20 )
        v22 = 260 - v20;
      else
        v22 = 0LL;
      if ( v20 )
      {
        v23 = &Name[v22];
        v24 = 260 - v22;
        if ( 260 != v22 )
        {
          v25 = 2147483646LL;
          v26 = (char *)((char *)L"h" - (char *)v23);
          do
          {
            if ( !v25 )
              break;
            v27 = *(WCHAR *)((char *)v23 + (_QWORD)v26);
            if ( !v27 )
              break;
            *v23 = v27;
            --v25;
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        v28 = v23 - 1;
        if ( v24 )
          v28 = v23;
        *v28 = 0;
      }
      v29 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v38 = v29;
      if ( v29 )
      {
        v33 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v29, &v36);
        LastError = v33;
        if ( v33 >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
            &v38,
            v34);
          *a3 = ((__int64)v36 << 31) | v37;
          goto LABEL_42;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v33);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (__int64)"wil", v30);
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v38,
        v31);
      v4 = LastError;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v19;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (__int64)"wil", v17);
  }
LABEL_42:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    &v39,
    v16);
  return v4;
}
