void __fastcall wil::details::lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___::_lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___(
        __int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 40) + 72LL))(*(_QWORD *)(v1 + 40));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        230LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v2);
  }
}
