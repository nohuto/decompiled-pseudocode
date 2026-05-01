/*
 * XREFs of ??0?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0B40
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@$$V@details@tip@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A06C0 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@$$V@d.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0D8C (--0-$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  __int128 v4; // [rsp+30h] [rbp-50h]
  _OWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0x7100021494FELL;
  *((_QWORD *)&v4 + 1) = 0LL;
  LOWORD(v4) = 2050;
  *(_QWORD *)a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *((_QWORD *)&v3 + 1) = "SearchFullActivationTest";
  v5[1] = v4;
  v5[0] = v3;
  v5[2] = 0uLL;
  tip::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v5);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)a1 = &tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::`vftable';
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_WORD *)(a1 + 276) = 0;
  *(_BYTE *)(a1 + 278) = 0;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_WORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_WORD *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 322) = 0;
  *(_QWORD *)(a1 + 304) = 7LL;
  *(_DWORD *)(a1 + 328) = 1;
  return result;
}
