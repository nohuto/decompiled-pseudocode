unsigned __int16 __fastcall KappxSafeSearch(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int16 result; // ax

  result = 0;
  if ( a2 )
  {
    while ( *(_WORD *)(a1 + 2LL * result) != a3 )
    {
      if ( ++result >= a2 )
        return result;
    }
    *(_WORD *)(a1 + 2LL * result) = 0;
  }
  return result;
}
