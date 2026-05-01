/*
 * XREFs of ??0?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0C60
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC434 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0DAC (--0-$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  __int128 v4; // [rsp+30h] [rbp-50h]
  _OWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0xD30002B5E0F0LL;
  *((_QWORD *)&v4 + 1) = 0LL;
  LOWORD(v4) = 513;
  *(_QWORD *)a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *((_QWORD *)&v3 + 1) = "SearchWebProviderInstallTest";
  v5[1] = v4;
  v5[0] = v3;
  v5[2] = 0uLL;
  tip::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v5);
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 296) = 7LL;
  *(_QWORD *)(a1 + 336) = 7LL;
  *(_QWORD *)(a1 + 376) = 7LL;
  *(_QWORD *)(a1 + 408) = 7LL;
  *(_QWORD *)a1 = &tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_BYTE *)(a1 + 268) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_WORD *)(a1 + 272) = 0;
  *(_WORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_WORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_WORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_WORD *)(a1 + 384) = 0;
  *(_WORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 424) = 1;
  return result;
}
