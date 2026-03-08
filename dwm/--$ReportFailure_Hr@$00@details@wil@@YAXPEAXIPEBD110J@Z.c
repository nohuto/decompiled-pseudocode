/*
 * XREFs of ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1400082D4
 * Callers:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000A084 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140008128 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140009838 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Hr<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp-10h]

  LODWORD(v12) = (_DWORD)a7;
  HIDWORD(v12) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7, a2);
  LOBYTE(v13) = 0;
  v15 = v13;
  v14 = v12;
  return wil::details::ReportFailure_Base<1,0>(v9, v8, v7, v8, v11, a6, (__int64)&v14);
}
