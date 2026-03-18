/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x14022FB20
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140366CB0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpMetadataCommit @ 0x14036F520 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405F2F80 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405F30C0 (RtlpHpSizeHeapInternal.c)
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
