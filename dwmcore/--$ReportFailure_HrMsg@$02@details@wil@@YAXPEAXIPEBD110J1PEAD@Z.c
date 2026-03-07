void __fastcall __noreturn wil::details::ReportFailure_HrMsg<3>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        char *a9)
{
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  LODWORD(v13) = -2147418113;
  HIDWORD(v13) = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL);
  LOBYTE(v14) = 0;
  v16 = v14;
  v15 = v13;
  wil::details::ReportFailure_Msg<3>(v11, v10, v9, v10, v12, a6, (__int64)&v15, a8, a9);
}
