/*
 * XREFs of RtlCopyBitMap @ 0x140275080
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1402F8E1C (HvpGrowDirtyVectors.c)
 *     PspQueryRateControlHistory @ 0x14067FA3C (PspQueryRateControlHistory.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1402751CC (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r11
  unsigned int *v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  _BYTE *v13; // r9
  __int64 v14; // r8
  unsigned int v15; // esi
  char v16; // di
  int v17; // ebp
  int v18; // esi
  int v19; // r13d
  unsigned __int64 v20; // rbp
  unsigned int v21; // eax

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v7 = Source->Buffer;
    v8 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v7 > v8 || v8 > &v7[(SizeOfBitMap - 1) >> 5] )
    {
      v9 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v14 = TargetBit & 0x1F;
        if ( SizeOfBitMap >= 0x20 )
        {
          v18 = *v8;
          v19 = 1 << (32 - v14);
          v20 = SizeOfBitMap >> 5;
          SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
          do
          {
            *v8++ = ((*v7 & (v19 - 1)) << v14) | v18 & ((1 << v14) - 1);
            v21 = *v7++ & ~(v19 - 1);
            v18 = (v21 >> (32 - v14)) | *v8 & ~((1 << v14) - 1);
            *v8 = v18;
            --v20;
          }
          while ( v20 );
        }
        if ( SizeOfBitMap )
        {
          v15 = *v7;
          v16 = 32 - v14;
          v17 = *v8;
          if ( SizeOfBitMap > 32 - v14 )
          {
            *v8 = v17 & ((1 << v14) - 1) | ((v15 & ((1 << v16) - 1)) << v14);
            v8[1] = ((*v7 & (((1 << (SizeOfBitMap + v14 - 32)) - 1) << v16)) >> v16) | v8[1] & -(1 << (SizeOfBitMap + v14 - 32));
          }
          else
          {
            *v8 = ((v15 & ((1 << SizeOfBitMap) - 1)) << v14) | v17 & ~(((1 << SizeOfBitMap) - 1) << v14);
          }
        }
      }
      else
      {
        v10 = SizeOfBitMap;
        v11 = SizeOfBitMap & 7;
        v12 = v10 >> 3;
        if ( v12 )
          memmove((char *)Buffer + v9, Source->Buffer, v12);
        if ( v11 )
        {
          v13 = (char *)Destination->Buffer + v9 + v12;
          *v13 &= ~((1 << v11) - 1);
          *v13 |= (unsigned __int8)((1 << v11) - 1) & *((_BYTE *)Source->Buffer + v12);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
    }
  }
}
