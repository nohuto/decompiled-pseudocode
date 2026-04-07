/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18007DD14
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18007F380 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180040608 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18007E1C8 (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        wil::details **a1,
        void *a2)
{
  wil::details **v2; // rdi
  wil::details **v4; // r14
  wil::details *v5; // rsi
  wil::details *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rdx
  void *v9; // rdx

  v2 = a1 + 5;
  v4 = a1 + 15;
  while ( v2 != v4 )
  {
    v5 = *v2;
    while ( v5 )
    {
      v6 = v5;
      v5 = (wil::details *)*((_QWORD *)v5 + 1);
      wil::details_abi::ThreadLocalData::Clear((wil::details *)((char *)v6 + 16));
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    *v2++ = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    a1 + 3,
    a2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    a1 + 2,
    v8);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    a1 + 1,
    v9);
}
