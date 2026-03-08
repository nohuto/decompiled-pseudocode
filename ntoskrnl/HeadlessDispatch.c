/*
 * XREFs of HeadlessDispatch @ 0x140372650
 * Callers:
 *     BgkDisplayStringEx @ 0x14054C9A4 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x14054CE50 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x14054D110 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x14054D170 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140567360 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405682A0 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x14080B3A0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch(a1);
}
