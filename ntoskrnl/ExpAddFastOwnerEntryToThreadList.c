/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x1403C4DC8
 * Callers:
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpAddFastOwnerEntryToThreadList(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  *(_BYTE *)(a4 + 18) = 1;
  *(_QWORD *)(a4 + 48) = a4 + 40;
  *(_QWORD *)(a4 + 40) = a4 + 40;
  if ( a3 )
    result = (__int64 *)(a1 + 1680);
  else
    result = (__int64 *)(a1 + 1656);
  v5 = *result;
  if ( *(__int64 **)(*result + 8) != result )
    __fastfail(3u);
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = a4;
  return result;
}
