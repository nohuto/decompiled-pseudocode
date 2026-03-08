/*
 * XREFs of RtlpCSparseBitmapWaitOnAddress @ 0x1405B50C0
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1403046C4 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140306EB8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall RtlpCSparseBitmapWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( !*(_BYTE *)(a4 + 48) )
    return ExBlockOnAddressPushLock(a4 + 40, a1, a2, 8uLL, 0LL);
  while ( a1 == (_QWORD *)*a2 )
    _mm_pause();
  return 0LL;
}
