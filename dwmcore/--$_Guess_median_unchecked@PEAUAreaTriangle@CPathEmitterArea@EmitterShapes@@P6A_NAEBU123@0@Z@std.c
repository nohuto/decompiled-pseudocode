/*
 * XREFs of ??$_Guess_median_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@00P6A_NAEBU123@1@Z@Z @ 0x180265420
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YA?AU?$pair@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@PEAU123@@0@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU234@1@Z@Z @ 0x1802657F8 (--$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAE.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@00P6A_NAEBU123@1@Z@Z @ 0x1802656F8 (--$_Med3_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp

  v4 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a1) >> 2);
  if ( v4 <= 40 )
  {
    v9 = a1;
    v10 = a3;
  }
  else
  {
    v6 = (v4 + 1) >> 3;
    v7 = 28 * v6;
    v8 = 56 * v6;
    v9 = 28 * v6 + a1;
    std::_Med3_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      a1,
      v9,
      56 * v6 + a1);
    std::_Med3_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      a2 - v7,
      a2,
      v7 + a2);
    v10 = a3 - v7;
    std::_Med3_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      a3 - v8,
      a3 - v7,
      a3);
  }
  return std::_Med3_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
           v9,
           a2,
           v10);
}
