/*
 * XREFs of MiReduceMappedFileReadBehind @ 0x1402E6370
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14028B490 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 */

__int64 __fastcall MiReduceMappedFileReadBehind(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, int a3)
{
  unsigned int v4; // ebp
  unsigned int v7; // ecx
  unsigned int SizeOfBitMap; // r8d
  unsigned int *Buffer; // r11
  ULONG v10; // ebx
  unsigned __int64 v11; // r10
  unsigned int *v12; // rdx
  int v13; // r9d
  _DWORD *i; // rax
  unsigned int v15; // r9d
  __int64 v16; // rcx
  ULONG v17; // edi
  unsigned __int64 j; // rax
  unsigned int v19; // ebx
  unsigned int *v21; // rax

  v4 = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  v7 = 0;
  if ( StartingIndex )
  {
    do
    {
      SizeOfBitMap = BitMapHeader->SizeOfBitMap;
      if ( BitMapHeader->SizeOfBitMap <= v7 )
        break;
      Buffer = BitMapHeader->Buffer;
      v10 = 0;
      v11 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v12 = &Buffer[(unsigned __int64)v7 >> 5];
      v13 = ((1 << (v7 & 0x1F)) - 1) | *v12;
      for ( i = v12 + 1; ; ++i )
      {
        v15 = ~v13;
        if ( v15 )
          break;
        if ( (unsigned __int64)i > v11 )
          goto LABEL_25;
        v13 = *++v12;
      }
      _BitScanForward64((unsigned __int64 *)&v16, v15);
      v17 = v16 + 32 * (v12 - Buffer);
      if ( v17 > SizeOfBitMap )
      {
LABEL_25:
        v17 = BitMapHeader->SizeOfBitMap;
        goto LABEL_14;
      }
      for ( j = ~(v15 | ((1 << v16) - 1)); ; j = *v21 )
      {
        if ( (_DWORD)j )
        {
          _BitScanForward64(&j, j);
          goto LABEL_11;
        }
        v21 = v12 + 1;
        if ( (unsigned __int64)(v12 + 1) > v11 )
          break;
        ++v12;
      }
      LODWORD(j) = 32;
LABEL_11:
      v19 = j + 32 * (v12 - Buffer);
      if ( v19 > SizeOfBitMap )
        v19 = BitMapHeader->SizeOfBitMap;
      v10 = v19 - v17;
LABEL_14:
      if ( !v10 || v17 >= StartingIndex )
        break;
      if ( v10 > a3 - v4 )
        v10 = a3 - v4;
      RtlSetBits(BitMapHeader, v17, v10);
      v4 += v10;
      if ( v4 == a3 )
        break;
      v7 = v17 + v10;
    }
    while ( v17 + v10 < StartingIndex );
  }
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
  return v4;
}
