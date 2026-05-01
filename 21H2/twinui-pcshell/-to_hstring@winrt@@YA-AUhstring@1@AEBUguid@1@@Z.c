/*
 * XREFs of ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFF8
 * Callers:
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1800AD944 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AC0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x1800A06B0 (--$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180256AEC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::to_hstring(winrt::hstring *a1, unsigned int *a2)
{
  int v4; // [rsp+20h] [rbp-D8h]
  int v5; // [rsp+28h] [rbp-D0h]
  int v6; // [rsp+30h] [rbp-C8h]
  int v7; // [rsp+38h] [rbp-C0h]
  int v8; // [rsp+40h] [rbp-B8h]
  int v9; // [rsp+48h] [rbp-B0h]
  int v10; // [rsp+50h] [rbp-A8h]
  int v11; // [rsp+58h] [rbp-A0h]
  int v12; // [rsp+60h] [rbp-98h]
  unsigned __int16 v13[40]; // [rsp+80h] [rbp-78h] BYREF

  v12 = *((unsigned __int8 *)a2 + 15);
  v11 = *((unsigned __int8 *)a2 + 14);
  v10 = *((unsigned __int8 *)a2 + 13);
  v9 = *((unsigned __int8 *)a2 + 12);
  v8 = *((unsigned __int8 *)a2 + 11);
  v7 = *((unsigned __int8 *)a2 + 10);
  v6 = *((unsigned __int8 *)a2 + 9);
  v5 = *((unsigned __int8 *)a2 + 8);
  v4 = *((unsigned __int16 *)a2 + 3);
  swprintf_s<40>(
    v13,
    L"{%08x-%04hx-%04hx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx}",
    *a2,
    *((unsigned __int16 *)a2 + 2),
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  winrt::hstring::hstring(a1, v13);
  return a1;
}
