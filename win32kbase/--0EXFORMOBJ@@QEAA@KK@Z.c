/*
 * XREFs of ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C017FB10
 * Callers:
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0197C30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     <none>
 */

EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax

  *((_DWORD *)this + 3) = 0;
  v5 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  if ( a3 == 8 )
  {
    v6 = 6524LL;
  }
  else
  {
    v6 = 6560LL;
    if ( a3 == 16 )
      v6 = 6596LL;
  }
  *(_QWORD *)this = v5 + v6;
  return this;
}
