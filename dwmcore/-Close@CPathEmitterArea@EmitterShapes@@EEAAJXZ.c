/*
 * XREFs of ?Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ @ 0x180266510
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterArea::Close(char **this)
{
  unsigned int i; // r9d
  char *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rax

  std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
    this[3],
    this[4],
    0x6DB6DB6DB6DB6DB7LL * ((this[4] - this[3]) >> 2),
    (unsigned __int8 (__fastcall *)(__int128 *, char *))EmitterShapes::SortTriangles);
  for ( i = 1; ; ++i )
  {
    v3 = this[3];
    if ( i >= (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((this[4] - v3) >> 2)) )
      break;
    v4 = 28LL * i;
    v5 = 28LL * (i - 1);
    *(float *)&v3[v4 + 24] = *(float *)&v3[v5 + 24] + *(float *)&v3[v4 + 24];
  }
  return 0LL;
}
