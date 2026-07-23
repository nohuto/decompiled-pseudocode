/*
 * XREFs of sub_14064270C @ 0x14064270C
 * Callers:
 *     sub_140622368 @ 0x140622368 (sub_140622368.c)
 *     sub_140642978 @ 0x140642978 (sub_140642978.c)
 * Callees:
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 */

__int64 __fastcall sub_14064270C(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  __int64 v7; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    do
    {
      v7 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
      sub_14064290C(a1, *(_QWORD *)v7);
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
