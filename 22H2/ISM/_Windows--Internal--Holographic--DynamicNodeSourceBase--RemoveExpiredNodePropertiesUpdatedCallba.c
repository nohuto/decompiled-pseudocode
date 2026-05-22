/*
 * XREFs of _Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveExpiredNodePropertiesUpdatedCallbacks_::_1_::dtor$0 @ 0x180163660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAA@XZ @ 0x180157A1C (--1-$vector@USPATIAL_NODE_ID@@V-$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveExpiredNodePropertiesUpdatedCallbacks_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<SPATIAL_NODE_ID>::~vector<SPATIAL_NODE_ID>(*(_QWORD *)(a2 + 120));
  }
}
