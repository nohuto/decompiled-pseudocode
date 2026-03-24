/*
 * XREFs of ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C011648C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CombineOldNewVis(HRGN a1, HRGN a2, HRGN a3, __int64 a4, char a5)
{
  if ( (a5 & 3) != 0 )
  {
    switch ( a5 & 3 )
    {
      case 1:
LABEL_6:
        GreCombineRgn(a1, a2, 0LL, 5LL);
        return 1LL;
      case 2:
        if ( (_DWORD)a4 != 4 )
        {
          a2 = a3;
          goto LABEL_6;
        }
        break;
      case 3:
        break;
      default:
        return 1LL;
    }
  }
  else if ( (unsigned int)GreCombineRgn(a1, a2, a3, a4) > 1 )
  {
    return 1LL;
  }
  return 0LL;
}
