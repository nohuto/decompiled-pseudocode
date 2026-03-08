/*
 * XREFs of ??$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180265640
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_J1$$QEAU123@P6A_NAEBU123@3@Z@Z @ 0x180265B38 (--$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int128 *v8; // rbx
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]

  result = 0x6DB6DB6DB6DB6DB7LL;
  v5 = a1;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 2);
  v7 = v6 >> 1;
  if ( v6 >> 1 > 0 )
  {
    v8 = (__int128 *)(a1 + 28 * v7);
    do
    {
      v8 = (__int128 *)((char *)v8 - 28);
      v9 = *v8;
      v10 = *((_DWORD *)v8 + 6);
      --v7;
      v12 = *((_QWORD *)v8 + 2);
      v13 = v10;
      v11 = v9;
      result = std::_Pop_heap_hole_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
                 v5,
                 v7,
                 v6,
                 (unsigned int)&v11,
                 a3);
    }
    while ( v7 > 0 );
  }
  return result;
}
