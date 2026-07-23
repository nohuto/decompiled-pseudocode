/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140255B10
 * Callers:
 *     HvpCountSetRangesInVector @ 0x14063B1B0 (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogMetadata @ 0x14063B2A4 (HvpGenerateLogMetadata.c)
 *     MiFindDriverNonPagedSections @ 0x14075CC44 (MiFindDriverNonPagedSections.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 *     PnprMirrorMarkedPages @ 0x1409AEF5C (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409B21C4 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkSnapSharedExports @ 0x1409C329C (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v5; // r9d
  unsigned int *Buffer; // rdx
  unsigned int *v8; // rbx
  unsigned int *v9; // r8
  ULONG v10; // edx
  int v11; // edi
  unsigned int v12; // ecx
  unsigned int i; // eax
  unsigned int *v16; // r8

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  v9 = &Buffer[(unsigned __int64)v5 >> 5];
  if ( v9 != v8 && (*v9 | *((_DWORD *)qword_140012120 + (v5 & 0x1F))) == 0xFFFFFFFF )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v9; v9 < v8 && *v9 == -1; ++v9 )
      v5 += 32;
  }
  for ( ; v5 < SizeOfBitMap; ++v5 )
  {
    if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v5) )
      break;
  }
  v10 = 0;
  if ( v9 == v8 )
    goto LABEL_13;
  v11 = v5 & 0x1F;
  if ( (*v9 & ~*((_DWORD *)qword_140012120 + (v5 & 0x1F))) != 0 )
    goto LABEL_13;
  v10 = 32 - v11;
  if ( v11 != 33 )
  {
    v16 = v9 + 1;
    while ( v16 < v8 && !*v16 )
    {
      ++v16;
      v10 += 32;
      if ( v10 == -1 )
        goto LABEL_17;
    }
LABEL_13:
    v12 = BitMapHeader->SizeOfBitMap;
    for ( i = v10 + v5; i < v12; ++v10 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
  }
LABEL_17:
  *StartingRunIndex = v5;
  return v10;
}
