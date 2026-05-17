/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x180007A8C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpMetadataHeapStart(_QWORD *a1, __int64 a2)
{
  if ( *a1 )
    return 0LL;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
