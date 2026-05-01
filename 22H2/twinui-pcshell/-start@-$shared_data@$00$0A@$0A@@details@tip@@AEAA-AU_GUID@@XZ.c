/*
 * XREFs of ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBB0
 * Callers:
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D38 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1318 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180069130 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800AE048 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9D4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 *     TestCreate @ 0x1800AF46C (TestCreate.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

_OWORD *__fastcall tip::details::shared_data<1,0,0>::start(__int64 a1, _OWORD *a2)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  void (__stdcall *v10)(LPVOID); // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+59h] [rbp-A7h] BYREF
  char v15; // [rsp+5Dh] [rbp-A3h]
  char v16; // [rsp+5Eh] [rbp-A2h] BYREF
  char v17; // [rsp+859h] [rbp+759h] BYREF
  int *v18; // [rsp+860h] [rbp+760h]
  char *v19; // [rsp+868h] [rbp+768h]
  char *v20; // [rsp+870h] [rbp+770h]

  wil::EnterCriticalSection(v11, a1 + 192);
  v12 = 0LL;
  v13 = 0;
  v18 = &v14;
  v20 = &v17;
  v14 = -2143256512;
  v15 = 0;
  v19 = &v16;
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
    v6 = tip::details::shared_data<1,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v12, 1u);
  else
    v6 = 0LL;
  LOBYTE(v5) = *(_BYTE *)(a1 + 32);
  v7 = TestCreate(*(_DWORD *)(a1 + 16), v4, v5, *(_DWORD *)(a1 + 20), v6, a1 + 144);
  wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
    (__int64 *)(a1 + 232),
    v7);
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = *(_OWORD *)(a1 + 144);
  if ( v12 )
  {
    v9 = v12;
    v10 = CoTaskMemFree;
    wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v10, &v9);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v11);
  return a2;
}
