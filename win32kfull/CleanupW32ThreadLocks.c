/*
 * XREFs of CleanupW32ThreadLocks @ 0x1C00DBD90
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall CleanupW32ThreadLocks(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( !v2 )
      break;
    result = PopAndFreeW32ThreadLock(v2);
  }
  return result;
}
