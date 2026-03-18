/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C00247BC
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0026364 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreGetLayout @ 0x1C0024844 (GreGetLayout.c)
 *     GreExtTextOutW @ 0x1C00A1DB0 (GreExtTextOutW.c)
 *     GreGetTextAlign @ 0x1C02D7C60 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D7D04 (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02DDCEC (GreSetGraphicsMode.c)
 */

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
