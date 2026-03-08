/*
 * XREFs of RtlAreBitsSet @ 0x14036C840
 * Callers:
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 *     MiCheckUnsupportedSections @ 0x140A338C0 (MiCheckUnsupportedSections.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v6; // bl
  unsigned int *v7; // rdx
  unsigned int v8; // r10d
  unsigned int *v9; // r11
  bool i; // zf

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest(
               (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
               StartingIndex & 0x1F);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v6 = StartingIndex + Length - 1;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v7 != v9 )
  {
    for ( i = ((-1 << StartingIndex) & v8) == -1 << StartingIndex; i; i = *v7 == -1 )
    {
      if ( ++v7 == v9 )
        return (*v7 & (0xFFFFFFFF >> ~v6)) == 0xFFFFFFFF >> ~v6;
    }
    return 0;
  }
  return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v8) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
}
