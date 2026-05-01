/*
 * XREFs of ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z @ 0x1800C0DDC
 * Callers:
 *     ?CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800BF554 (-CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180069130 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x1800ABBC8 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

void tip::details::shared_data<1,0,0>::complete_without_lock(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  wil::EnterCriticalSection((struct _RTL_CRITICAL_SECTION **)va, a1 + 192);
  if ( !*(_BYTE *)(a1 + 160) )
  {
    *(_WORD *)(a1 + 162) = 0;
    *(_QWORD *)(a1 + 168) = "CompleteUnhandledSearchInputTest";
    *(_BYTE *)(a1 + 160) = 1;
  }
  tip::details::shared_data<1,0,0>::complete_helper(a1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)va);
}
