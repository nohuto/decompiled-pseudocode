/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180193E78
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019762C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1801026E0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180193E40 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180195530 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v7; // edi
  int v8; // esi
  signed int LastErrorFail; // eax
  int v10; // r9d
  const char *v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+20h] [rbp-58h]
  void *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6, v13);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v14) = LastErrorFail;
  HIDWORD(v14) = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  LOBYTE(v15) = 0;
  v17 = v15;
  v16 = v14;
  wil::details::ReportFailure_Base<3,0>(v8, v7, a3, v10, v12, (__int64)a6, (__int64)&v16, 0LL);
}
