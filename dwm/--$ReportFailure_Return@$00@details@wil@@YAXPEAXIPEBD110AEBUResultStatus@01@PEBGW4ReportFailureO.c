__int64 __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  const struct wil::FailureInfo *v8; // rdx
  _BYTE v9[160]; // [rsp+80h] [rbp-14B8h] BYREF

  result = wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 1, a7, 0LL);
  if ( (v9[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v9, v8);
  return result;
}
