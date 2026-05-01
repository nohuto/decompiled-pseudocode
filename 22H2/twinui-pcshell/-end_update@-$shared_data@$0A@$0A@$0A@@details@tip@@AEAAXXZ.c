/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC274
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A1464 (--1-$test_data_control@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD83C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D38F0 (--1-$test_data_control@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D4B1C (--1-$test_data_control@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135D68 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9D4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 *     TestUnlockData @ 0x1800AF690 (TestUnlockData.c)
 */

void __fastcall tip::details::shared_data<0,0,0>::end_update(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  struct TestInfo *v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-E0h] BYREF
  void (__stdcall *v8)(LPVOID); // [rsp+28h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C0h]
  __int128 v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+69h] [rbp-97h] BYREF
  char v15; // [rsp+6Dh] [rbp-93h]
  char v16; // [rsp+6Eh] [rbp-92h] BYREF
  char v17; // [rsp+869h] [rbp+769h] BYREF
  int *v18; // [rsp+870h] [rbp+770h]
  char *v19; // [rsp+878h] [rbp+778h]
  char *v20; // [rsp+880h] [rbp+780h]

  v3 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v3;
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 && (v3 & 0x100) == 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    v18 = &v14;
    v20 = &v17;
    v14 = -2143256512;
    v15 = 0;
    v19 = &v16;
    if ( (*(_DWORD *)(a1 + 20) & 0x8000) != 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = tip::details::shared_data<1,0,0>::serialize_data(a1, &v12, 1LL);
      v4 = *(_QWORD *)(a1 + 232);
    }
    TestUnlockData(v4, a2, v5, &v9);
    *(_DWORD *)(a1 + 64) |= DWORD1(v10);
    if ( !*((_QWORD *)&v10 + 1) )
      *(_DWORD *)(a1 + 184) = v10;
    if ( v12 )
    {
      v7 = v12;
      v8 = CoTaskMemFree;
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v8, &v7);
    }
    tip::details::TestInfoDelete((LPVOID *)&v9, v6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
