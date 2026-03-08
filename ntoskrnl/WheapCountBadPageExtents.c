/*
 * XREFs of WheapCountBadPageExtents @ 0x140A0597C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapCountBadPageExtents(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r11
  __int64 *v4; // r10
  __int64 v5; // rax
  bool v6; // cc
  unsigned int v7; // edx

  v2 = 0;
  if ( a2 )
  {
    v3 = *a1;
    v2 = 1;
    if ( a2 > 1 )
    {
      v4 = a1 + 1;
      v5 = a2 - 1;
      do
      {
        v6 = *v4 <= (unsigned __int64)(v3 + 1);
        v7 = v2 + 1;
        v3 = *v4++;
        if ( v6 )
          v7 = v2;
        v2 = v7;
        --v5;
      }
      while ( v5 );
    }
  }
  return v2;
}
