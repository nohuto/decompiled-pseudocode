/*
 * XREFs of MiCollapseRunTopDown @ 0x1403B62B0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x140466112 (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 - 1 > v3 )
  {
    v1 = v3 + 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v5 )
  {
    *(_QWORD *)a1 = v5;
    v4 = v5;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v12 = ~(v6 - 1);
    v4 = v12 & (v6 + v4 - 1);
    *(_QWORD *)a1 = v4;
    v1 &= v12;
    *(_QWORD *)(a1 + 8) = v1;
  }
  if ( v4 < v1 )
  {
    v7 = *(_BYTE *)(a1 + 56);
    while ( v7 || *(_QWORD *)(a1 + 40) <= v1 - v4 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( !v8 )
        return 1LL;
      v10 = ~(v8 - 1);
      if ( (((v1 - 1) ^ (v1 - *(_QWORD *)(a1 + 40))) & v10) == 0 )
        return 1LL;
      v11 = v1;
      if ( (v10 & v1) != v1 )
      {
        *(_QWORD *)(a1 + 8) = v10 & v1;
        v11 = v10 & v1;
      }
      if ( (v10 & v4) == v4 || (*(_QWORD *)a1 = v10 & (v4 + v8 - 1), (v10 & (v4 + v8 - 1)) != 0) )
      {
        v4 = *(_QWORD *)a1;
        v1 = v11;
        if ( *(_QWORD *)a1 < v11 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
