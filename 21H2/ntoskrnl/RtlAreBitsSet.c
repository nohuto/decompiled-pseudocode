/*
 * XREFs of RtlAreBitsSet @ 0x14022CE70
 * Callers:
 *     MiReleaseDriverPtes @ 0x14075FEB0 (MiReleaseDriverPtes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v5; // bl
  unsigned int *v6; // rdx
  unsigned int v7; // r10d
  unsigned int *v8; // r11

  if ( StartingIndex < BitMapHeader->SizeOfBitMap )
  {
    if ( Length <= 1 )
    {
      if ( Length == 1 )
        return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    }
    else if ( BitMapHeader->SizeOfBitMap - StartingIndex >= Length )
    {
      Buffer = BitMapHeader->Buffer;
      v5 = StartingIndex + Length - 1;
      v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v7 = *v6;
      v8 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
      if ( v6 == v8 )
        return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v7) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
      if ( ((-1 << StartingIndex) & v7) == -1 << StartingIndex )
      {
        while ( ++v6 != v8 )
        {
          if ( *v6 != -1 )
            return 0;
        }
        return ((0xFFFFFFFF >> ~v5) & *v6) == 0xFFFFFFFF >> ~v5;
      }
    }
  }
  return 0;
}
