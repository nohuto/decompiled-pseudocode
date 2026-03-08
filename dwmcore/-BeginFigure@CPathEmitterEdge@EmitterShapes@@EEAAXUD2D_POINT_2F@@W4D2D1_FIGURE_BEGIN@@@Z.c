/*
 * XREFs of ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802663C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800F9B40 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B5014 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18023EAEC (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x18023EBD8 (--$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Foundatio.c)
 *     ??$emplace_back@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAA?A_TAEBUFigure@CPathEmitterEdge@EmitterShapes@@@Z @ 0x180265F74 (--$emplace_back@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitterEdge@Em.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::BeginFigure(
        EmitterShapes::CPathEmitterEdge *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+40h] [rbp-20h]
  struct D2D_POINT_2F v8; // [rsp+70h] [rbp+10h] BYREF
  struct D2D_POINT_2F v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a2;
  std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
    &v5,
    0LL,
    &v9);
  v4 = v7;
  v8.x = 0.0;
  if ( (_QWORD)v7 == *((_QWORD *)&v7 + 1) )
  {
    std::vector<float>::_Emplace_reallocate<float>((_QWORD *)&v6 + 1, (_BYTE *)v7, &v8);
  }
  else
  {
    *(_DWORD *)v7 = 0;
    *(_QWORD *)&v7 = v4 + 4;
  }
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::emplace_back<EmitterShapes::CPathEmitterEdge::Figure const &>(
    (__int64 *)this + 3,
    (__int64)&v5);
  std::vector<float>::_Tidy((__int64)&v6 + 8);
  std::vector<CDataSourceReader *>::_Tidy((__int64)&v5);
}
