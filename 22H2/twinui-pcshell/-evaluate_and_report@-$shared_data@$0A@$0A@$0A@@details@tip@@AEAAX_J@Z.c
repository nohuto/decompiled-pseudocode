/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA0C
 * Callers:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABC80 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?evaluate@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC4B4 (-evaluate@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?evaluate_flags@details@tip@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800ACC98 (-evaluate_flags@details@tip@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?last_error@test_state@tip@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800AD1D0 (-last_error@test_state@tip@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9D4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 *     TestReport @ 0x1800AF63C (TestReport.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  char v4; // cl
  bool v5; // al
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  const struct wil::FailureInfo *error; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  const struct tip::test_requirement *v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  void (__stdcall *v17)(LPVOID); // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h]
  __int128 v21; // [rsp+54h] [rbp-ACh]
  int v22; // [rsp+64h] [rbp-9Ch]
  char v23; // [rsp+68h] [rbp-98h]
  __int16 v24; // [rsp+6Ah] [rbp-96h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int16 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+ACh] [rbp-54h]
  int v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-40h] BYREF
  char v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+C9h] [rbp-37h] BYREF
  char v36; // [rsp+CDh] [rbp-33h]
  char v37; // [rsp+CEh] [rbp-32h] BYREF
  char v38; // [rsp+8C9h] [rbp+7C9h] BYREF
  int *v39; // [rsp+8D0h] [rbp+7D0h]
  char *v40; // [rsp+8D8h] [rbp+7D8h]
  char *v41; // [rsp+8E0h] [rbp+7E0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip::details::evaluate_flags(
         (tip::details *)(a1 + 8),
         *(const struct tip::test_state **)(a1 + 40),
         *(const struct tip::test_requirement **)(a1 + 56),
         *(const struct tip::test_requirement **)(a1 + 48),
         v15) )
  {
    tip::details::shared_data<1,0,0>::evaluate(a1);
  }
  v4 = *(_BYTE *)(a1 + 160);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 160) = 3;
    *(_WORD *)(a1 + 162) = 16394;
    *(_QWORD *)(a1 + 168) = 0LL;
    v4 = 3;
  }
  v5 = ((unsigned __int8)(v4 - 2) <= 1u || (*(_DWORD *)(a1 + 20) & 0x1000) != 0 && v4 != 4)
    && (*(_DWORD *)(a1 + 64) & 0x800) != 0;
  v6 = v5;
  v7 = v5 | 2;
  v8 = *(_DWORD *)(a1 + 20) & 0x200;
  if ( !v8 )
    v7 = v6;
  v33 = 0LL;
  v34 = 0;
  v39 = &v35;
  v41 = &v38;
  v35 = -2143256512;
  v36 = 0;
  v40 = &v37;
  if ( v8 )
    LOBYTE(v6) = 1;
  v9 = v7 | 4;
  if ( !(_BYTE)v6 )
    v9 = v7;
  v10 = tip::details::shared_data<1,0,0>::serialize_data(a1, &v33, v9);
  memset_0(&v18, 0, 0x78uLL);
  v11 = *(_DWORD *)(a1 + 180);
  if ( v11 )
    v18 = *(_DWORD *)(a1 + 180);
  else
    v18 = *(_DWORD *)(a1 + 16);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_DWORD *)(a1 + 20);
  v21 = *(_OWORD *)(a1 + 144);
  v22 = *(_DWORD *)(a1 + 64) | 0x200000;
  v23 = *(_BYTE *)(a1 + 160);
  v24 = *(_WORD *)(a1 + 162);
  v25 = *(_QWORD *)(a1 + 168);
  v26 = a2;
  v27 = v10;
  v31 = *(_DWORD *)(a1 + 176);
  if ( v11 )
    v32 = *(_DWORD *)(a1 + 16);
  else
    v32 = 0;
  error = tip::test_state::last_error((tip::test_state *)(a1 + 8));
  if ( error )
  {
    v28 = *((_DWORD *)error + 1);
    v29 = *((_QWORD *)error + 6);
    v30 = *((_WORD *)error + 28);
  }
  TestReport(&v18);
  v13 = *(_QWORD *)a1;
  if ( tip::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip::details::g_test_interface_exception_guard(v13, 0LL, 0LL, 0LL, &v18) )
    {
      v24 = 16398;
      v23 = 3;
      TestReport(&v18);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v18);
  }
  result = v33;
  if ( v33 )
  {
    v16 = v33;
    v17 = CoTaskMemFree;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v17, &v16);
  }
  return result;
}
