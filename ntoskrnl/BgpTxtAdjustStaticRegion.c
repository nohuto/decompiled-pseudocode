/*
 * XREFs of BgpTxtAdjustStaticRegion @ 0x14066FA50
 * Callers:
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 * Callees:
 *     BgpGxFillRectangle @ 0x1403842E4 (BgpGxFillRectangle.c)
 */

__int64 __fastcall BgpTxtAdjustStaticRegion(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( !a1 || !a2 && !a3 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
    *(_QWORD *)a1 = *a2;
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      v6 = *a3;
      if ( *(_DWORD *)(a1 + 40) != *a3 )
      {
        *(_DWORD *)(a1 + 40) = v6;
        BgpGxFillRectangle(v5, v6);
      }
    }
    *(_DWORD *)(a1 + 44) = a3[1];
  }
  return 0LL;
}
