__int64 __fastcall wil::details::ReportFailure_NtStatus<2>(
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
  int v12; // [rsp+58h] [rbp-20h]
  unsigned __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp-10h]

  v9 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v10 = v9;
  LOBYTE(v12) = 1;
  v14 = v12;
  v13 = __PAIR64__((unsigned int)a7, v9);
  wil::details::ReportFailure_Base<2,0>(
    a1,
    a2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
    0,
    0LL,
    a6,
    (__int64)&v13);
  return v10;
}
