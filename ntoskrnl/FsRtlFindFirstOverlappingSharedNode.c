/*
 * XREFs of FsRtlFindFirstOverlappingSharedNode @ 0x1402C272C
 * Callers:
 *     FsRtlCheckNoSharedConflict @ 0x140200DCC (FsRtlCheckNoSharedConflict.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402C1F78 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402C30F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlGetNextFileLock @ 0x14053B030 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlFindFirstOverlappingSharedNode(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  _QWORD *v10; // r8
  unsigned __int64 v11; // rax

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  while ( a1 )
  {
    v9 = *a2;
    v5 = a1 - 24;
    v10 = *(_QWORD **)(a1 - 24);
    if ( *(_QWORD *)(a1 - 24 + 16) >= *a2 && ((v11 = v10[1]) != 0 || v10[2]) )
    {
      if ( v11 <= *a3 && (*a3 != -1LL || v9) )
      {
        if ( v11 <= v9 )
          break;
        v8 = a1 - 24;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 1;
      a1 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      if ( v10[6] == *a3 && v10[1] == v9 )
        break;
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = *(_QWORD *)(a1 + 16);
    }
  }
  if ( a1 )
    v8 = v5;
  if ( v8 )
    return v8 + 24;
  else
    return 0LL;
}
