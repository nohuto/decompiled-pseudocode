/*
 * XREFs of BiIsEnumerateMatch @ 0x140A59B5C
 * Callers:
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsEnumerateMatch(unsigned int a1, unsigned int a2)
{
  char v2; // r8
  int v3; // ecx
  int v4; // edx

  v2 = 0;
  if ( !a1 )
    return 1;
  if ( a1 >> 28 == a2 >> 28 )
  {
    if ( a1 >> 28 != 1 && a1 >> 28 != 2 )
    {
      if ( a1 >> 28 != 3 )
        return ((a2 ^ a1) & 0xFFFFFFF) == 0;
      v3 = a1 & 0xFFFFFFF;
      if ( !v3 )
        return 1;
      v4 = a2 & 0xFFFFFFF;
LABEL_15:
      if ( v3 != v4 )
        return v2;
      return 1;
    }
    if ( (((a1 >> 20) & 0xF) == 0 || ((a1 >> 20) & 0xF) == ((a2 >> 20) & 0xF))
      && ((a1 & 0xFFFFF) == 0 || (a1 & 0xFFFFF) == (a2 & 0xFFFFF)) )
    {
      v3 = HIBYTE(a1) & 0xF;
      if ( !v3 )
        return 1;
      v4 = HIBYTE(a2) & 0xF;
      goto LABEL_15;
    }
  }
  return v2;
}
