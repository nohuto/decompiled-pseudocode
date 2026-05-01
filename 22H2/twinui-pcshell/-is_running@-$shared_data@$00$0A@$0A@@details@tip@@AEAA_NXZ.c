/*
 * XREFs of ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8
 * Callers:
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1868 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180069130 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF7C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestQueryData @ 0x1800AF5AC (TestQueryData.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

bool __fastcall tip::details::shared_data<1,0,0>::is_running(__int64 a1)
{
  __int64 v2; // rcx
  struct TestInfo *v3; // rdx
  bool v5; // bl
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 v7; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  __int128 v9; // [rsp+48h] [rbp-18h]

  wil::EnterCriticalSection(&v6, a1 + 192);
  v2 = *(_QWORD *)(a1 + 232);
  if ( !v2 || (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    goto LABEL_5;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *, struct _RTL_CRITICAL_SECTION *))TestQueryData)(
                        v2,
                        0LL,
                        *(unsigned int *)(a1 + 184),
                        &v7,
                        v6) )
  {
    tip::details::TestInfoDelete((LPVOID *)&v7, v3);
LABEL_5:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
    return 0;
  }
  *(_DWORD *)(a1 + 64) |= DWORD1(v8);
  if ( *((_QWORD *)&v8 + 1) )
    tip::details::shared_data<1,0,0>::deserialize_data(a1, (__int64)&v7);
  else
    *(_DWORD *)(a1 + 184) = v8;
  tip::details::TestInfoDelete((LPVOID *)&v7, v3);
  v5 = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return v5;
}
