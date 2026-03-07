_QWORD *__fastcall stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator+=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  if ( a2 )
  {
    if ( !*a1 )
      goto LABEL_7;
    if ( a2 < 0 )
    {
      v2 = a1 + 2;
      if ( a1[2] >= (unsigned __int64)-a2 )
        goto LABEL_6;
LABEL_7:
      _invalid_parameter_noinfo_noreturn();
    }
  }
  v2 = a1 + 2;
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_7;
LABEL_6:
  *v2 += a2;
  return a1;
}
