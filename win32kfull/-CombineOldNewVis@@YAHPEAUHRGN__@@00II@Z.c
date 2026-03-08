/*
 * XREFs of ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00DBF78
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CombineOldNewVis(HRGN a1, HRGN a2, HRGN a3, __int64 a4, char a5)
{
  int v5; // eax

  if ( (a5 & 3) == 0 )
  {
    v5 = GreCombineRgn(a1, a2, a3, a4);
    if ( !v5 )
      return 0LL;
    return v5 != 1;
  }
  if ( (a5 & 3) == 1 )
  {
LABEL_9:
    GreCombineRgn(a1, a2, 0LL, 5LL);
    return 1LL;
  }
  v5 = (a5 & 3) - 2;
  if ( (a5 & 3) == 2 )
  {
    if ( (_DWORD)a4 == 4 )
      return 0LL;
    a2 = a3;
    goto LABEL_9;
  }
  return v5 != 1;
}
