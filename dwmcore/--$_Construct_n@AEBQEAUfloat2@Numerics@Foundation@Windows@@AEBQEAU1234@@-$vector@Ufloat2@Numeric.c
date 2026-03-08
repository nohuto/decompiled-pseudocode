/*
 * XREFs of ??$_Construct_n@AEBQEAUfloat2@Numerics@Foundation@Windows@@AEBQEAU1234@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_KAEBQEAUfloat2@Numerics@Foundation@Windows@@1@Z @ 0x180265054
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265298 (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ??$emplace_back@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAA?A_TAEBUFigure@CPathEmitterEdge@EmitterShapes@@@Z @ 0x180265F74 (--$emplace_back@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitterEdge@Em.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

void __fastcall std::vector<Windows::Foundation::Numerics::float2>::_Construct_n<Windows::Foundation::Numerics::float2 * const &,Windows::Foundation::Numerics::float2 * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  SIZE_T size_of; // rax
  char *v9; // rax
  char *v10; // rdi
  signed __int64 v11; // rbx

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[8 * a2];
    v11 = *a4 - (_QWORD)*a3;
    memmove_0(v9, *a3, v11);
    a1[1] = &v10[8 * (v11 >> 3)];
  }
}
