/*
 * XREFs of ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003B1FC (--1-$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TouchpadRect@VirtualTouchpad@InputTraceLogging@@SAX_KAEBUtagRECT@@@Z @ 0x180049394 (-TouchpadRect@VirtualTouchpad@InputTraceLogging@@SAX_KAEBUtagRECT@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800647C4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180068580 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180145DAC (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 */

void __fastcall InputTraceLogging::Callback(const struct _GUID *a1)
{
  struct VirtualTouchpadContextProvider *Instance; // rax
  __int64 v2; // rbx
  __int64 **v3; // rdi
  __int64 **i; // rbx
  struct VirtualTouchpadContextProvider *v5; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v6[16]; // [rsp+28h] [rbp-10h] BYREF

  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = Instance;
  v2 = (__int64)Instance;
  if ( Instance )
  {
    _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
    v2 = (__int64)v5;
  }
  wil::critical_section::lock(v2 + 88, v6);
  v3 = *(__int64 ***)(v2 + 136);
  for ( i = (__int64 **)*v3; i != v3; i = (__int64 **)*i )
    InputTraceLogging::VirtualTouchpad::TouchpadRect((unsigned __int64)i[2], (const struct tagRECT *)(i + 3));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v6);
  wil::com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>::~com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>((__int64 *)&v5);
}
