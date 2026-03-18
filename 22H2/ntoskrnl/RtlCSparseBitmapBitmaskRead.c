/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1403235AC
 * Callers:
 *     ExGetHeapFromVA @ 0x1402AC3C0 (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpMetadataCommit @ 0x1403C6BD4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405B6624 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405B68E0 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
