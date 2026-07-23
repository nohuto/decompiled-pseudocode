/*
 * XREFs of RtlAreBitsClearEx @ 0x140353CE0
 * Callers:
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 *     MiCheckHotPatchApplicable @ 0x1408C9900 (MiCheckHotPatchApplicable.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r11
  __int64 v5; // rbx
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *v10; // r9

  if ( a2 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  if ( *(_QWORD *)a1 - a2 < a3 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2 + a3 - 1;
  v5 = *(_QWORD *)(v3 + 8 * (a2 >> 6));
  v6 = (_QWORD *)(v3 + 8 * (a2 >> 6));
  v7 = (_QWORD *)(v3 + 8 * (v4 >> 6));
  if ( v6 != v7 )
  {
    if ( (v5 & (-1LL << a2)) == 0 )
    {
      v10 = v6 + 1;
      if ( v10 == v7 )
        return ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4) & *v10) == 0;
      while ( !*v10 )
      {
        if ( ++v10 == v7 )
          return ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4) & *v10) == 0;
      }
    }
    return 0;
  }
  return (v5 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
}
