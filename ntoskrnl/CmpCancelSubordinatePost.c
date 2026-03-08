/*
 * XREFs of CmpCancelSubordinatePost @ 0x1406B4E10
 * Callers:
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1406B4DDC (CmpAddToDelayedDeref.c)
 */

_QWORD *__fastcall CmpCancelSubordinatePost(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = (_QWORD **)(a1 + 32);
  result = *v2;
  if ( *v2 != v2 )
  {
    v4 = (__int64)(result - 4);
    v5 = *(result - 4);
    if ( *(_QWORD **)(v5 + 8) != result - 4 || (result = *(_QWORD **)(v4 + 8), *result != v4) )
      __fastfail(3u);
    *result = v5;
    *(_QWORD *)(v5 + 8) = result;
    if ( a2 )
      return CmpAddToDelayedDeref(v4, a2);
  }
  return result;
}
