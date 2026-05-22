/*
 * XREFs of ??1?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1800873EC
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x1800510ED (_InputStateManager--InputStateManager_--_1_--dtor$4.c)
 *     _SystemCursorService::SystemCursorService_::_1_::dtor$3 @ 0x18013E762 (_SystemCursorService--SystemCursorService_--_1_--dtor$3.c)
 *     ??1?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAA@XZ @ 0x180157A1C (--1-$vector@USPATIAL_NODE_ID@@V-$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAA@XZ.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180157DF0 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162928 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::~vector<std::pair<unsigned long,IInputProcessor *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
