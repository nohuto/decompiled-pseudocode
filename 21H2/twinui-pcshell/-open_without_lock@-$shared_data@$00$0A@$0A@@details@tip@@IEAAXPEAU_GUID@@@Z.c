/*
 * XREFs of ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z @ 0x1800C11B4
 * Callers:
 *     ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z @ 0x1800BEFB8 (--0-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5F4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF9C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800AE068 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     TestOpen @ 0x1800AF528 (TestOpen.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::open_without_lock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct TestInfo *v5; // rdx
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  LOBYTE(a3) = *(_BYTE *)(a1 + 32);
  v4 = TestOpen(*(_DWORD *)(a1 + 16), 0x200002u, a3, a2, &v6);
  if ( v4 )
  {
    *(_OWORD *)(a1 + 144) = v6;
    wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
      (__int64 *)(a1 + 232),
      v4);
    *(_DWORD *)(a1 + 64) |= DWORD1(v7);
    if ( *((_QWORD *)&v7 + 1) )
      tip::details::shared_data<1,0,0>::deserialize_data(a1, (__int64)&v6);
    else
      *(_DWORD *)(a1 + 184) = v7;
  }
  tip::details::TestInfoDelete((LPVOID *)&v6, v5);
}
