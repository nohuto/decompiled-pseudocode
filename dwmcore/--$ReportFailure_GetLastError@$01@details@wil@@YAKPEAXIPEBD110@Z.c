/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801FEDBC
 * Callers:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1802005F4 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1801026E0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180193DFC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180195530 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5,
        char *a6)
{
  int v6; // edi
  signed int LastErrorFail; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  const char *v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp-10h]

  v6 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    (void *)0xCE,
                    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
                    a4,
                    v11,
                    a6);
  v8 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v9 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v9 = (unsigned int)LastErrorFail;
  LODWORD(v12) = v9;
  HIDWORD(v12) = wil::details::HrToNtStatus((wil::details *)v9);
  LOBYTE(v13) = 0;
  v15 = v13;
  v14 = v12;
  wil::details::ReportFailure_Base<2,0>(
    v6,
    206,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    0,
    0LL,
    (__int64)a6,
    (__int64)&v14);
  return v8;
}
