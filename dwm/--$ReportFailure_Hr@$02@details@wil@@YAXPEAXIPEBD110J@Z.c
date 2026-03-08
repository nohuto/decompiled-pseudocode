/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1400083B0
 * Callers:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140008F2C (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14000BAD8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140008178 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140009838 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp-10h]

  LODWORD(v10) = -2147418113;
  HIDWORD(v10) = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, a2);
  LOBYTE(v11) = 0;
  v13 = v11;
  v12 = v10;
  wil::details::ReportFailure_Base<3,0>(v8, v7, v6, v7, v9, a6, (__int64)&v12);
}
