/*
 * XREFs of ExpFindCurrentThread @ 0x14033A7F0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExReleaseResourceForThreadLite @ 0x14033A350 (ExReleaseResourceForThreadLite.c)
 *     ExpBoostIoAfterAcquire @ 0x140356B60 (ExpBoostIoAfterAcquire.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140608A2C (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1402D9FE0 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(
        __int64 a1,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 == a2 )
    return result;
  v11 = 0LL;
  v12 = 0LL;
  if ( !v6 )
  {
    v12 = (_QWORD *)(a1 + 48);
    if ( a5 )
      v12 = 0LL;
  }
  v13 = v6 != 0;
  if ( a6 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    if ( v18 )
    {
      if ( a6 < *(_DWORD *)(v18 + 8) )
      {
        result = (_QWORD *)(v18 + 16LL * a6);
        if ( *result == a2 )
          return result;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)v14;
  if ( v14 )
  {
    v15 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    v11 = (_QWORD *)(v14 + 16LL * *(unsigned int *)(v14 + 8));
    result = (_QWORD *)(v14 + 16);
    if ( v13 < v15 )
    {
      do
      {
        if ( *result == a2 )
        {
          v16 = result;
          goto LABEL_10;
        }
        if ( *result )
        {
          if ( ++v13 == v15 )
          {
            result += 2;
            break;
          }
        }
        else
        {
          v17 = result;
          if ( v12 )
            v17 = v12;
          v12 = v17;
        }
        result += 2;
      }
      while ( result != v11 );
    }
  }
  if ( !a4 )
    return 0LL;
  if ( !v12 && (result >= v11 || (v12 = result) == 0LL) )
  {
    ExpExpandResourceOwnerTable(a1, a3);
    return 0LL;
  }
  v16 = v12;
  result = v12;
LABEL_10:
  KeGetCurrentThread()->ResourceIndex = ((__int64)v16 - v14) >> 4;
  return result;
}
