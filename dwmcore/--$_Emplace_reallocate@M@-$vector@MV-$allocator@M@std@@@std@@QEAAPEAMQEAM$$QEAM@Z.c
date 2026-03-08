/*
 * XREFs of ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18023EAEC
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18001DD88 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802663C0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z @ 0x18026646C (-CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801B5680 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801B8C50 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x1801C7424 (-_Change_array@-$vector@MV-$allocator@M@std@@@std@@AEAAXQEAM_K1@Z.c)
 */

char *__fastcall std::vector<float>::_Emplace_reallocate<float>(_QWORD *a1, _BYTE *a2, _DWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // r14
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<float>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[4 * ((a2 - v3) >> 2)];
  *(_DWORD *)v12 = *a3;
  v13 = v11;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)&a2[-*a1]);
    v13 = v12 + 4;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<float>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return &v11[4 * ((a2 - v3) >> 2)];
}
