/*
 * XREFs of ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4
 * Callers:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x1800ABBA8 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8AC (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF7C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA0C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 *     TestQueryData @ 0x1800AF5AC (TestQueryData.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::complete_helper(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  struct TestInfo *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = *(unsigned int *)(a1 + 184);
  v4 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 232) = 0LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *))TestQueryData)(v4, a2, v3, &v6) )
  {
    *(_DWORD *)(a1 + 64) |= DWORD1(v7);
    if ( *((_QWORD *)&v7 + 1) )
      tip::details::shared_data<1,0,0>::deserialize_data(a1, &v6);
    else
      *(_DWORD *)(a1 + 184) = v7;
    tip::details::shared_data<0,0,0>::evaluate_and_report(a1, v8);
  }
  tip::details::TestInfoDelete((LPVOID *)&v6, v5);
}
