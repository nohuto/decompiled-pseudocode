/*
 * XREFs of ?reserve@?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@QEAA_N_K@Z @ 0x1800ADCF8
 * Callers:
 *     ??$load_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@Z @ 0x18009EC44 (--$load_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ??_G?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAXI@Z @ 0x1800A1EC0 (--_G-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-.c)
 */

char __fastcall tip::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  HANDLE v11; // rax

  if ( a2 <= *(_QWORD *)(a1 + 8) )
  {
LABEL_9:
    LOBYTE(v6) = 1;
    return (char)v6;
  }
  v4 = 8 * a2;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, v4);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v9 = 0LL;
      if ( *(_QWORD *)(a1 + 16) )
      {
        do
        {
          v10 = *(_QWORD **)a1;
          v7[v9] = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
          v10[v9] = 0LL;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>::`scalar deleting destructor'((void **)(*(_QWORD *)a1 + 8 * v9++));
        }
        while ( v9 < *(_QWORD *)(a1 + 16) );
        v8 = *(_QWORD **)a1;
      }
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v8);
    }
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_9;
  }
  return (char)v6;
}
