/*
 * XREFs of AslStringSearchA @ 0x140A5126C
 * Callers:
 *     SdbpCheckMatchingTextEntry @ 0x140A4D2F4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringSearchA(__int64 a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  _BYTE *v10; // rdi

  v4 = 0LL;
  if ( a2 && a4 <= a2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      v9 = v7;
      if ( a4 )
      {
        v10 = a3;
        while ( v9 < a2 )
        {
          if ( !*(_BYTE *)(v9 + a1) && ++v9 >= a2 )
            return v4;
          if ( *(_BYTE *)(v9 + a1) == *v10 )
          {
            ++v8;
            ++v10;
            ++v9;
            if ( v8 < a4 )
              continue;
          }
          break;
        }
      }
      if ( v8 == a4 )
        return a1 + v7;
      if ( ++v7 + a4 > a2 )
        return v4;
    }
  }
  return v4;
}
