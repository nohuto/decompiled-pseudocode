/*
 * XREFs of Xp10ComputeCrc32 @ 0x1409C2E48
 * Callers:
 *     Xp10ComputeAndWriteCrc @ 0x1409C2DAC (Xp10ComputeAndWriteCrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ComputeCrc32(unsigned __int8 **a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // al
  unsigned int v7; // ecx

  v1 = *((_DWORD *)a1 + 3);
  v2 = -1;
  if ( v1 )
  {
    v3 = *a1;
    v4 = v1;
    do
    {
      v5 = 8LL;
      v2 ^= *v3;
      do
      {
        v6 = v2;
        v7 = v2 >> 1;
        v2 = (v2 >> 1) ^ 0x82F63B78;
        if ( (v6 & 1) == 0 )
          v2 = v7;
        --v5;
      }
      while ( v5 );
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return ~v2;
}
