/*
 * XREFs of SdbpCheckFromStringVersion @ 0x1405D2014
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x1407B23DC (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SdbpCheckFromStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r8
  int v3; // r11d
  BOOL v4; // r9d
  unsigned __int16 v5; // r10
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx

  v2 = a1;
  v3 = 0;
  v4 = 1;
  while ( *v2 )
  {
    v5 = *a2;
    if ( !*a2 )
      break;
    v6 = *v2;
    v7 = 0LL;
    v8 = 0LL;
    v3 = 0;
    if ( *v2 == 42 )
    {
      v3 = 1;
      ++v2;
    }
    else
    {
      while ( v6 >= 0x30u && v6 <= 0x39u )
      {
        ++v2;
        v7 = v6 + 2 * (5 * v7 - 24);
        v6 = *v2;
      }
    }
    while ( v5 >= 0x30u && v5 <= 0x39u )
    {
      if ( !v3 )
        v8 = v5 + 2 * (5 * v8 - 24);
      v5 = *++a2;
    }
    if ( !v3 && v7 != v8 )
    {
      v4 = v7 < v8;
      break;
    }
    if ( *v2 )
    {
      if ( *a2 && *v2 != *a2 )
      {
        v4 = 0;
        break;
      }
      ++v2;
    }
    if ( *a2 )
      ++a2;
  }
  if ( (*v2 || *a2) && (!v4 || *v2 || !v3) )
    return 0;
  return v4;
}
