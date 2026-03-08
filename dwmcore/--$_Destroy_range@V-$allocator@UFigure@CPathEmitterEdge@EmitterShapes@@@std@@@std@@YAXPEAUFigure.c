/*
 * XREFs of ??$_Destroy_range@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x1802650FC
 * Callers:
 *     ??$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@0PEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x180265ED8 (--$_Uninitialized_move@PEAUFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmit.c)
 *     ??_ECPathEmitterEdge@EmitterShapes@@EEAAPEAXI@Z @ 0x1802660A0 (--_ECPathEmitterEdge@EmitterShapes@@EEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterEdge@EmitterShapes@@_K1@Z @ 0x180267054 (-_Change_array@-$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmitte.c)
 * Callees:
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800F9B40 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B5014 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::vector<float>::_Tidy(v3 + 24);
      std::vector<CDataSourceReader *>::_Tidy(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
}
