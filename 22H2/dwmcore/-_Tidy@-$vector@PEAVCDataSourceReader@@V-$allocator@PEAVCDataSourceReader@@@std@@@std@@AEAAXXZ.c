/*
 * XREFs of ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B8214
 * Callers:
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1801006C0 (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x1801B7934 (--1DataProviderManager@@EEAA@XZ.c)
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801B7D84 (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x1801E432C (--1DataProviderProxy@@UEAA@XZ.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E5104 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x1801FDB24 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 *     ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x180243B74 (--1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x1802687FC (--$_Destroy_range@V-$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180269AC0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CDataSourceReader *>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
