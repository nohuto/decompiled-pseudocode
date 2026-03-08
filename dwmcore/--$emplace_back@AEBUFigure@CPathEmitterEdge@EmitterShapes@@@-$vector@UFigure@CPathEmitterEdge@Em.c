/*
 * XREFs of ??$emplace_back@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAA?A_TAEBUFigure@CPathEmitterEdge@EmitterShapes@@@Z @ 0x180265F74
 * Callers:
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802663C0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAMAEBQEAM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBQEAM1@Z @ 0x180264FAC (--$_Construct_n@AEBQEAMAEBQEAM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_KAEBQEAM1@Z.c)
 *     ??$_Construct_n@AEBQEAUfloat2@Numerics@Foundation@Windows@@AEBQEAU1234@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_KAEBQEAUfloat2@Numerics@Foundation@Windows@@1@Z @ 0x180265054 (--$_Construct_n@AEBQEAUfloat2@Numerics@Foundation@Windows@@AEBQEAU1234@@-$vector@Ufloat2@Numeric.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265298 (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterEdge::Figure>::emplace_back<EmitterShapes::CPathEmitterEdge::Figure const &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 == a1[2] )
    return std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
             a1,
             v2,
             a2);
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  std::vector<Windows::Foundation::Numerics::float2>::_Construct_n<Windows::Foundation::Numerics::float2 * const &,Windows::Foundation::Numerics::float2 * const &>(
    (_QWORD *)v2,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3,
    (const void **)a2,
    (_QWORD *)(a2 + 8));
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  std::vector<float>::_Construct_n<float * const &,float * const &>(
    (_QWORD *)(v2 + 24),
    (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 2,
    (const void **)(a2 + 24),
    (_QWORD *)(a2 + 32));
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a2 + 48);
  result = a1[1];
  a1[1] = result + 56;
  return result;
}
