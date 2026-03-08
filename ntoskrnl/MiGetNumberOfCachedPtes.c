/*
 * XREFs of MiGetNumberOfCachedPtes @ 0x14029A1BC
 * Callers:
 *     MmGetNumberOfFreeSystemPtes @ 0x140299A38 (MmGetNumberOfFreeSystemPtes.c)
 *     MiPteBinsNeedTrimming @ 0x14029A168 (MiPteBinsNeedTrimming.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNumberOfCachedPtes(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 72);
  v2 = 0;
  if ( (__int64 *)a1 == &qword_140C695C0 )
  {
    v3 = 3LL;
  }
  else
  {
    v3 = 1LL;
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      v3 = 2LL;
  }
  do
  {
    if ( KeNumberNodes )
    {
      v4 = (unsigned __int16)KeNumberNodes;
      do
      {
        v5 = *(_DWORD *)(v1 + 64);
        v1 += 72LL;
        v2 += v5;
        --v4;
      }
      while ( v4 );
    }
    --v3;
  }
  while ( v3 );
  return v2;
}
