__int64 __fastcall CChannel::CheckHandle(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !a2 )
    goto LABEL_11;
  result = a2;
  if ( a2 > (unsigned __int64)((*(_QWORD *)(a1 + 24) - v3) >> 4)
    || !*(_DWORD *)(v3 + 16LL * (a2 - 1))
    || !*(_DWORD *)(v3 + 16LL * (a2 - 1) + 4) )
  {
    goto LABEL_11;
  }
  if ( a3 )
  {
    for ( result = *(unsigned int *)(v3 + 16LL * (a2 - 1) + 4);
          (unsigned int)result < 0xCE;
          result = dword_180378400[result] )
    {
      if ( (_DWORD)result == a3 )
        return result;
    }
LABEL_11:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD34,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(2LL * (a2 - 1)));
  }
  return result;
}
