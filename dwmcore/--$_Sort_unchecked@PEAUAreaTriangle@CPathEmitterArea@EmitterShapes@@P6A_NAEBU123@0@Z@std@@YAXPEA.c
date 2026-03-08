/*
 * XREFs of ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 *     ?Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ @ 0x180266510 (-Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU123@0P6A_NAEBU123@1@Z@Z @ 0x1802654F0 (--$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@s.c)
 *     ??$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180265640 (--$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@Y.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YA?AU?$pair@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@PEAU123@@0@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU234@1@Z@Z @ 0x1802657F8 (--$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAE.c)
 *     ??$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180265C4C (--$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YA.c)
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 */

char *__fastcall std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        char *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int128 *, char *))
{
  char *v6; // rbx
  char *v7; // rdi
  char *result; // rax
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h]

  v6 = a2;
  v7 = a1;
  if ( a2 - a1 < 924 )
    return std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
             v7,
             v6,
             a4);
  while ( a3 > 0 )
  {
    std::_Partition_by_median_guess_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      (unsigned __int64 *)&v9,
      (unsigned __int64)v7,
      (unsigned __int64)v6,
      (unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( 0x6DB6DB6DB6DB6DB7LL * ((v9 - v7) >> 2) >= 0x6DB6DB6DB6DB6DB7LL * ((v6 - v10) >> 2) )
    {
      std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        v10,
        v6,
        a3,
        a4);
      v6 = v9;
    }
    else
    {
      std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        v7,
        v9,
        a3,
        a4);
      v7 = v10;
    }
    if ( v6 - v7 < 924 )
      return std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
               v7,
               v6,
               a4);
  }
  std::_Make_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
    (__int64)v7,
    (__int64)v6,
    (__int64)a4);
  while ( 1 )
  {
    result = (char *)(v6 - v7);
    if ( v6 - v7 < 56 )
      break;
    std::_Pop_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      (__int64)v7,
      (__int64)v6,
      (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
    v6 -= 28;
  }
  return result;
}
