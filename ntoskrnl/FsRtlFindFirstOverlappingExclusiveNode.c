/*
 * XREFs of FsRtlFindFirstOverlappingExclusiveNode @ 0x1402C3018
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x140200C64 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402C1C84 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C1DF4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C255C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402C30F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlGetNextFileLock @ 0x14053B030 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlappingExclusiveNode(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v7 = 0LL;
  while ( a1 )
  {
    v8 = a1[8];
    v5 = a1;
    v9 = *a2;
    if ( v8 >= *a2 && ((v10 = a1[3]) != 0 || a1[4]) )
    {
      if ( v10 <= *a3 && (*a3 != -1LL || v9) )
      {
        if ( v10 <= v9 )
          break;
        v7 = a1;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 1;
LABEL_25:
      a1 = (_QWORD *)a1[1];
    }
    else
    {
      if ( v8 == *a3 && a1[3] == v9 )
      {
        v7 = a1;
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 0;
        goto LABEL_25;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = (_QWORD *)a1[2];
    }
  }
  if ( a1 )
    return v5;
  return v7;
}
