/*
 * XREFs of ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A142C (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEA.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A8050 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF178 (--1-$test_data_control@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF7C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9D4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 *     TestUnlockData @ 0x1800AF690 (TestUnlockData.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::end_update(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  struct TestInfo *v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-E0h] BYREF
  void (__stdcall *v7)(LPVOID); // [rsp+28h] [rbp-D8h] BYREF
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+40h] [rbp-C0h]
  __int128 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  char v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+69h] [rbp-97h] BYREF
  char v14; // [rsp+6Dh] [rbp-93h]
  char v15; // [rsp+6Eh] [rbp-92h] BYREF
  char v16; // [rsp+869h] [rbp+769h] BYREF
  int *v17; // [rsp+870h] [rbp+770h]
  char *v18; // [rsp+878h] [rbp+778h]
  char *v19; // [rsp+880h] [rbp+780h]

  v2 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( *(_QWORD *)(a1 + 232) && (v2 & 0x100) == 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v17 = &v13;
    v19 = &v16;
    v13 = -2143256512;
    v14 = 0;
    v18 = &v15;
    v3 = tip::details::shared_data<1,0,0>::serialize_data(a1, &v11, 1LL);
    TestUnlockData(*(_QWORD *)(a1 + 232), v4, v3, &v8);
    *(_DWORD *)(a1 + 64) |= DWORD1(v9);
    if ( *((_QWORD *)&v9 + 1) )
      tip::details::shared_data<1,0,0>::deserialize_data(a1, (__int64)&v8);
    else
      *(_DWORD *)(a1 + 184) = v9;
    if ( v11 )
    {
      v6 = v11;
      v7 = CoTaskMemFree;
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    }
    tip::details::TestInfoDelete((LPVOID *)&v8, v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
