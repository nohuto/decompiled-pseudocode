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
