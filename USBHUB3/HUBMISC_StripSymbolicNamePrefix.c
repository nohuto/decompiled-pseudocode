__int16 *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  __int16 *result; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int16 v6; // cx
  __int16 v7; // dx

  result = (__int16 *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = *a1;
  if ( result )
  {
    if ( *result == 92 )
    {
      ++result;
      v4 -= 2LL;
      v6 = *result;
      if ( *result )
      {
        v7 = *result;
        do
        {
          v6 = v7;
          if ( v7 == 92 )
            break;
          ++result;
          v4 -= 2LL;
          v6 = *result;
          v7 = *result;
        }
        while ( *result );
      }
      if ( v6 == 92 )
      {
        ++result;
        v4 -= 2LL;
      }
    }
    v3 = v4;
  }
  *a2 = v3;
  return result;
}
