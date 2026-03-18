/*
 * XREFs of ExpFindEmptyEntry @ 0x1403411A4
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402632C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C82F0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x140341200 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    a3 = (_QWORD *)(v3 + 16LL * *(unsigned int *)(v3 + 8));
    result = (_QWORD *)(v3 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == a3 )
        goto LABEL_6;
    }
    KeGetCurrentThread()->ResourceIndex = ((__int64)result - v3) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable(a1, a2, a3, v3);
    return 0LL;
  }
  return result;
}
