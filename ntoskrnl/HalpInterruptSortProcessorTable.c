/*
 * XREFs of HalpInterruptSortProcessorTable @ 0x1403769D8
 * Callers:
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSortProcessorTable(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm0
  __int128 v13; // xmm1

  if ( a2 > 1 )
  {
    v2 = 0;
    v3 = a2 - 1;
    do
    {
      v4 = (unsigned __int64)(v2 + 1) << 6;
      v5 = (unsigned __int64)v2 << 6;
      if ( *(_DWORD *)(v5 + a1 + 8) > *(_DWORD *)(v4 + a1 + 8) )
      {
        v6 = v2 - 1;
        v7 = *(_OWORD *)(v4 + a1 + 16);
        if ( !v2 )
          v6 = 0;
        v8 = *(_OWORD *)(v5 + a1);
        v2 = v6;
        v9 = *(_OWORD *)(v5 + a1 + 16);
        v10 = *(_OWORD *)(v5 + a1 + 32);
        v11 = *(_OWORD *)(v5 + a1 + 48);
        *(_OWORD *)(v5 + a1) = *(_OWORD *)(v4 + a1);
        v12 = *(_OWORD *)(v4 + a1 + 32);
        *(_OWORD *)(v5 + a1 + 16) = v7;
        v13 = *(_OWORD *)(v4 + a1 + 48);
        *(_OWORD *)(v4 + a1) = v8;
        *(_OWORD *)(v4 + a1 + 16) = v9;
        *(_OWORD *)(v5 + a1 + 32) = v12;
        *(_OWORD *)(v4 + a1 + 32) = v10;
        *(_OWORD *)(v5 + a1 + 48) = v13;
        *(_OWORD *)(v4 + a1 + 48) = v11;
      }
      else
      {
        ++v2;
      }
    }
    while ( v2 < v3 );
  }
}
