/*
 * XREFs of ??$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180265C4C
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_J1$$QEAU123@P6A_NAEBU123@3@Z@Z @ 0x180265B38 (--$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@.c)
 */

__int64 __fastcall std::_Pop_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 result; // rax
  __int64 v4; // xmm1_8
  __int128 *v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]

  result = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 2);
  if ( result >= 2 )
  {
    v4 = *(_QWORD *)(a2 - 12);
    v5 = (__int128 *)(a2 - 28);
    v8 = v4;
    v6 = *v5;
    v9 = *((_DWORD *)v5 + 6);
    v7 = v6;
    *v5 = *(_OWORD *)a1;
    *((_QWORD *)v5 + 2) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v5 + 6) = *(_DWORD *)(a1 + 24);
    return std::_Pop_heap_hole_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
             a1,
             0LL,
             0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - a1) >> 2),
             (int)&v7,
             a3);
  }
  return result;
}
