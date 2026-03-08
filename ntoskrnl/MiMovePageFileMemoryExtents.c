/*
 * XREFs of MiMovePageFileMemoryExtents @ 0x14065E2B8
 * Callers:
 *     MiInsertPageFileMemoryExtents @ 0x14065E138 (MiInsertPageFileMemoryExtents.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     MiComparePageFileMemoryExtents @ 0x14065D52C (MiComparePageFileMemoryExtents.c)
 */

char __fastcall MiMovePageFileMemoryExtents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  bool v3; // di
  int v6; // ebp
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v2 )
    v2 ^= a2;
  v6 = *(_BYTE *)(a2 + 8) & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (int)MiComparePageFileMemoryExtents((_DWORD *)(a1 + 24), v2) < 0 )
      {
        v7 = *(_QWORD *)v2;
        if ( v6 )
        {
          if ( !v7 )
            return RtlRbInsertNodeEx((unsigned __int64 *)a2, v2, v3, a1);
          v7 ^= v2;
        }
        if ( !v7 )
          return RtlRbInsertNodeEx((unsigned __int64 *)a2, v2, v3, a1);
      }
      else
      {
        v7 = *(_QWORD *)(v2 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_10;
          v7 ^= v2;
        }
        if ( !v7 )
        {
LABEL_10:
          v3 = 1;
          return RtlRbInsertNodeEx((unsigned __int64 *)a2, v2, v3, a1);
        }
      }
      v2 = v7;
    }
  }
  return RtlRbInsertNodeEx((unsigned __int64 *)a2, v2, v3, a1);
}
