/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1801CB230
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801CD528 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800FBC70 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180195BA4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v9; // eax
  unsigned int v10; // edi
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+58h] [rbp-20h]
  unsigned __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  v9 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v10 = v9;
  LOBYTE(v14) = 1;
  v16 = v14;
  v15 = __PAIR64__((unsigned int)a7, v9);
  wil::details::ReportFailure_Base<1,0>(
    a1,
    a2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    v11,
    v13,
    a6,
    (__int64)&v15);
  return v10;
}
