void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v8; // rdx
  __int64 v9; // [rsp+48h] [rbp-14F0h]
  __int64 v10; // [rsp+58h] [rbp-14E0h]
  __int64 v11; // [rsp+68h] [rbp-14D0h]
  _BYTE v12[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v13[1024]; // [rsp+120h] [rbp-1418h] BYREF
  _BYTE v14[4096]; // [rsp+520h] [rbp-1018h] BYREF

  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v9, (wil *)v14, v10, v13, v11, (unsigned __int64)v12);
  if ( (v12[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v12, v8);
}
