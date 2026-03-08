/*
 * XREFs of RtlFindNextForwardRunClear @ 0x14035D2F0
 * Callers:
 *     MiFindDriverNonPagedSections @ 0x14072715C (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x1407EA6F0 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1407EA7B4 (HvpCountSetRangesInVector.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     MiPrepareToHotPatchImage @ 0x140A37C98 (MiPrepareToHotPatchImage.c)
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140A9FC4C (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkSnapSharedExports @ 0x140ABA0B4 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // edi
  ULONG v4; // r10d
  unsigned int *Buffer; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int *v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // r8d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  ULONG v15; // ebx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // r10d
  unsigned int v19; // ecx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
  }
  else
  {
    Buffer = BitMapHeader->Buffer;
    v7 = (unsigned __int64)FromIndex >> 5;
    v8 = Buffer[v7];
    v9 = &Buffer[v7];
    v10 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    v11 = (unsigned __int64)(v9 + 1);
    v12 = ((1 << (FromIndex & 0x1F)) - 1) | v8;
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
        break;
      if ( v11 > v10 )
        goto LABEL_18;
      v12 = v9[1];
      ++v9;
      v11 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v14, v13);
    v15 = v14 + 32 * (v9 - Buffer);
    if ( v15 > SizeOfBitMap )
    {
LABEL_18:
      v15 = SizeOfBitMap;
      goto LABEL_13;
    }
    v16 = ~(((1 << v14) - 1) | v13);
    while ( 1 )
    {
      if ( v16 )
      {
        _BitScanForward64((unsigned __int64 *)&v17, v16);
        goto LABEL_10;
      }
      if ( (unsigned __int64)(v9 + 1) > v10 )
        break;
      v16 = v9[1];
      ++v9;
    }
    LODWORD(v17) = 32;
LABEL_10:
    v18 = SizeOfBitMap;
    v19 = 32 * (v9 - Buffer) + v17;
    if ( v19 <= SizeOfBitMap )
      v18 = v19;
    v4 = v18 - v15;
LABEL_13:
    *StartingRunIndex = v15;
  }
  return v4;
}
