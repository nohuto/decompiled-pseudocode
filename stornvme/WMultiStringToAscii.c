/*
 * XREFs of WMultiStringToAscii @ 0x1C0027B30
 * Callers:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0027934 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 */

unsigned __int8 __fastcall WMultiStringToAscii(_WORD *a1, unsigned int a2)
{
  _BYTE *v2; // r10
  unsigned int v3; // r8d
  unsigned __int8 result; // al

  if ( a1 )
  {
    v2 = a1;
    if ( a2 >= 4 )
    {
      v3 = 0;
      if ( a2 >> 1 == 1 )
        return (unsigned __int8)NVMeZeroMemory(v2, a2 - v3);
      do
      {
        if ( !*a1 && !a1[1] )
          break;
        result = *(_BYTE *)a1;
        ++v3;
        *v2++ = *(_BYTE *)a1++;
      }
      while ( v3 < (a2 >> 1) - 1 );
      if ( a2 > v3 )
        return (unsigned __int8)NVMeZeroMemory(v2, a2 - v3);
    }
  }
  return result;
}
