__int64 __fastcall std::find<gsl::details::span_iterator<enum ShaderLinkingArgument const>,enum ShaderLinkingArgument>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _WORD *a4)
{
  __int128 v4; // xmm1
  _WORD *i; // rax
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 != *(_OWORD *)a3 || *((_QWORD *)a2 + 2) > *(_QWORD *)(a3 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a2);
    JUMPOUT(0x18002809FLL);
  }
  for ( i = (_WORD *)*((_QWORD *)a2 + 2); i != *(_WORD **)(a3 + 16); ++i )
  {
    if ( *i == *a4 )
      break;
  }
  *((_QWORD *)a2 + 2) = i;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
  return result;
}
