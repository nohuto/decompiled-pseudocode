/*
 * XREFs of ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1800AD924
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEBUTipReportingInfo@@@Z @ 0x1800AD910 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEBUTipReportingI.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$DockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBI@DockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBI@Z @ 0x18009D7E8 (--$DockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBI@DockedS.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFD8 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::on_result(
        _tip_SearchFullActivationTest *this,
        const struct TipReportingInfo *a2)
{
  char v4; // di
  int v5; // [rsp+20h] [rbp-10h] BYREF
  __int16 v6; // [rsp+24h] [rbp-Ch]
  __int16 v7; // [rsp+26h] [rbp-Ah]
  char v8; // [rsp+28h] [rbp-8h]
  char v9; // [rsp+29h] [rbp-7h]
  char v10; // [rsp+2Ah] [rbp-6h]
  char v11; // [rsp+2Bh] [rbp-5h]
  char v12; // [rsp+2Ch] [rbp-4h]
  char v13; // [rsp+2Dh] [rbp-3h]
  char v14; // [rsp+2Eh] [rbp-2h]
  char v15; // [rsp+2Fh] [rbp-1h]
  bool v16; // [rsp+58h] [rbp+28h] BYREF
  HSTRING string; // [rsp+60h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp+38h] BYREF

  v4 = *((_BYTE *)a2 + 40);
  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_WORD *)a2 + 12);
  v7 = *((_WORD *)a2 + 13);
  v8 = *((_BYTE *)a2 + 28);
  v9 = *((_BYTE *)a2 + 29);
  v10 = *((_BYTE *)a2 + 30);
  v11 = *((_BYTE *)a2 + 31);
  v12 = *((_BYTE *)a2 + 32);
  v13 = *((_BYTE *)a2 + 33);
  v14 = *((_BYTE *)a2 + 34);
  v15 = *((_BYTE *)a2 + 35);
  winrt::to_hstring(&string, &v5);
  if ( (v4 & 0xFB) != 0 )
  {
    v16 = (unsigned __int8)(v4 - 1) <= 1u;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
    DockedSearchExperienceManagerTIPTelemetry::DockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &>(
      (char *)&v16,
      (__int64 *)&StringRawBuffer,
      (_DWORD *)this + 4,
      (int *)a2 + 25);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
}
