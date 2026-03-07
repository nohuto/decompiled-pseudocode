__int64 __fastcall FlipUserTextOutW(HDC a1, int a2, int a3, const unsigned __int16 *a4)
{
  unsigned int v8; // ebx

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v8 = GreExtTextOutW((_DWORD)a1, a2, a3, 0, 0LL, (__int64)a4, 1);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutW((_DWORD)a1, a2, a3, 0, 0LL, (__int64)a4, 1);
  }
  return v8;
}
