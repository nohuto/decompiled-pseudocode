/*
 * XREFs of ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180099814
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099898 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180006740 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180041178 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v11; // ebx
  __int64 v13; // [rsp+38h] [rbp-20h]

  v11 = wil::details::NtStatusToHr((wil::details *)a8);
  LODWORD(v13) = v11;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 1, v13, 0LL, 0);
  return v11;
}
