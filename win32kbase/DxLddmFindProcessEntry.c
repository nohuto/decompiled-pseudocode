/*
 * XREFs of DxLddmFindProcessEntry @ 0x1C00BD2F0
 * Callers:
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00BD294 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DxLddmFindProcessEntry(_QWORD *a1, int a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( *((_DWORD *)v2 + 4) != a2 )
  {
    v2 = (_QWORD *)*v2;
    if ( v2 == a1 )
      return 0LL;
  }
  return v2;
}
