/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1402B689C
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataCommit @ 0x1403C1314 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405B4174 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405B4430 (RtlpHpSizeHeapInternal.c)
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
