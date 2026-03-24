/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1402A2380
 * Callers:
 *     RtlpHpGetOwnerHeap @ 0x1402FACE4 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataCommit @ 0x1403CB0F4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405949DC (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x140594B2C (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
