/*
 * XREFs of FsRtlFindFirstOverlapInNode @ 0x14053AFE4
 * Callers:
 *     FsRtlCheckNoSharedConflict @ 0x140200DCC (FsRtlCheckNoSharedConflict.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402C30F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlapInNode(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v4 = *a2;
  while ( 1 )
  {
    v5 = result[6];
    if ( v5 >= v4 )
    {
      v6 = result[1];
      if ( v6 || result[2] )
        break;
    }
    if ( v5 == *a3 && result[1] == v4 )
      return result;
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  if ( v6 > *a3 )
    return 0LL;
  return result;
}
