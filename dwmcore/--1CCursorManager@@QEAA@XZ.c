/*
 * XREFs of ??1CCursorManager@@QEAA@XZ @ 0x18010E094
 * Callers:
 *     _dynamic_atexit_destructor_for__g_CursorManager__ @ 0x180120430 (_dynamic_atexit_destructor_for__g_CursorManager__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 */

void __fastcall CCursorManager::~CCursorManager(struct _RTL_CRITICAL_SECTION *this)
{
  void **p_DebugInfo; // rbx

  p_DebugInfo = (void **)&this[1].DebugInfo;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)&this[1],
    (__int64)&this[1],
    (__int64)this[1].DebugInfo->CriticalSection);
  std::_Deallocate<16,0>(*p_DebugInfo, 0x30uLL);
  DeleteCriticalSection(this);
}
