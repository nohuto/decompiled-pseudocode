/*
 * XREFs of ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180210FA8
 * Callers:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180210F30 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AE258 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180193E40 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180197060 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Msg<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9)
{
  int v9; // r9d
  int v13; // [rsp+20h] [rbp-2068h]
  unsigned __int16 v14[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t v15[512]; // [rsp+1050h] [rbp-1038h] BYREF

  v9 = a8;
  if ( a8 )
  {
    if ( a9 )
    {
      StringCchPrintfW((unsigned __int16 *)v15, 0x800uLL, (size_t *)L"%hs");
      StringCchVPrintfW(v14, 0x800uLL, v15, a9);
    }
    else
    {
      StringCchPrintfW(v14, 0x800uLL, (size_t *)L"%hs");
    }
  }
  else
  {
    v14[0] = 0;
  }
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v9, v13, a6, a7, (__int64)v14);
}
