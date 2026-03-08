/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180194374
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180193DFC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800FBEA8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180197428 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v8; // rdx
  __int64 v9; // [rsp+48h] [rbp-14F0h]
  __int64 v10; // [rsp+58h] [rbp-14E0h]
  __int64 v11; // [rsp+68h] [rbp-14D0h]
  _BYTE v12[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v13[1024]; // [rsp+120h] [rbp-1418h] BYREF
  _BYTE v14[4096]; // [rsp+520h] [rbp-1018h] BYREF

  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v9, (wil *)v14, v10, v13, v11, (unsigned __int64)v12);
  if ( (v12[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v12, v8);
}
