/*
 * XREFs of ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8B0
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@1@XZ @ 0x1800A188C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA-AV-$tes.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A8050 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@t.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@2@XZ @ 0x1800C0EC8 (-data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AV-$test_data.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF7C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestQueryData @ 0x1800AF5AC (TestQueryData.c)
 */

char __fastcall tip::details::shared_data<1,0,0>::begin_update(__int64 a1)
{
  __int64 v2; // rcx
  struct TestInfo *v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  if ( (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 232);
  if ( !v2 )
    return 1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int128 *))TestQueryData)(
                       v2,
                       1LL,
                       *(unsigned int *)(a1 + 184),
                       &v5) )
  {
    *(_DWORD *)(a1 + 64) |= DWORD1(v6);
    if ( *((_QWORD *)&v6 + 1) )
      tip::details::shared_data<1,0,0>::deserialize_data(a1, &v5);
    else
      *(_DWORD *)(a1 + 184) = v6;
    tip::details::TestInfoDelete((LPVOID *)&v5, v3);
    return 1;
  }
  tip::details::TestInfoDelete((LPVOID *)&v5, v3);
  return 0;
}
