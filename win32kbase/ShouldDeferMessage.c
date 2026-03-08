/*
 * XREFs of ShouldDeferMessage @ 0x1C00A6E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldDeferMessage(int a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0;
  if ( ((a1 - 1) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  if ( (unsigned int)(v2 - 256) <= 9 )
    return 1;
  if ( a1 != 1 )
  {
LABEL_4:
    if ( (unsigned int)(a1 - 2) > 1 )
      return v3;
  }
  if ( (unsigned int)(v2 - 512) <= 0xE || (unsigned int)(v2 - 160) <= 0xD || *(_DWORD *)(a2 + 96) == 4 )
    return 1;
  return v3;
}
