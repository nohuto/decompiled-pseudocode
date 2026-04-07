/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008D304
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008D2F8 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180006740 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180042CEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800581F0 (_alloca_probe.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18007FC78 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char *a10)
{
  __int64 v14; // [rsp+38h] [rbp-2050h]
  unsigned __int16 v15[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t v16[512]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    if ( a10 )
    {
      StringCchPrintfW((unsigned __int16 *)v16, 0x800uLL, (size_t *)L"%hs");
      StringCchVPrintfW(v15, 0x800uLL, v16, a10);
    }
    else
    {
      StringCchPrintfW(v15, 0x800uLL, (size_t *)L"%hs");
    }
  }
  else
  {
    v15[0] = 0;
  }
  LODWORD(v14) = a8;
  return wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 2, v14, (__int64)v15, 0);
}
