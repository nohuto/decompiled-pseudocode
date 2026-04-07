/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180009F34
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x180009ED4 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180040384 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180040608 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180042CEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042DAC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180042E54 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180042F7C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007E90C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007EA90 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  int Pointer; // eax
  void *v8; // rdx
  unsigned int LastErrorFailHr; // ebx
  _DWORD *v10; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  void *v14; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v15; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  v13 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v13,
    Mutex);
  if ( !v13 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_8;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v13,
    &v15);
  v14 = 0LL;
  Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v14);
  LastErrorFailHr = Pointer;
  if ( Pointer < 0 )
  {
    v12 = 294LL;
  }
  else
  {
    v10 = v14;
    if ( v14 )
    {
      *a2 = v14;
      *(_DWORD *)*a2 = *v10 + 1;
LABEL_5:
      LastErrorFailHr = 0;
      goto LABEL_6;
    }
    Pointer = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
    LastErrorFailHr = Pointer;
    if ( Pointer >= 0 )
      goto LABEL_5;
    v12 = 302LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v12, (__int64)"wil", (const char *)(unsigned int)Pointer);
LABEL_6:
  if ( v15 )
    wil::details::ReleaseMutex(v15, v8);
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
  return LastErrorFailHr;
}
