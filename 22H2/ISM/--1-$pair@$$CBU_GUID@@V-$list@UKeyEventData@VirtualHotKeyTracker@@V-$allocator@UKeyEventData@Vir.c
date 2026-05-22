/*
 * XREFs of ??1?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@QEAA@XZ @ 0x1801801B4
 * Callers:
 *     _VirtualHotKeyTracker::OnInput_::_1_::dtor$0 @ 0x1801818DF (_VirtualHotKeyTracker--OnInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F68A8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

void __fastcall std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>::~pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>(
        __int64 a1)
{
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    a1,
    *(_QWORD ***)(a1 + 16));
  std::_Deallocate<16,0>(*(void **)(a1 + 16), (const struct std::nothrow_t *)0x30);
}
