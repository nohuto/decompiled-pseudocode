/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801A4254
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x1801A4294 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x1801A3A64 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@-$_Tr.c)
 */

void std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
    (__int64)&CPointerDeviceCache::s_deviceCache,
    (__int64)&CPointerDeviceCache::s_deviceCache,
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8));
  v0[1] = v0;
  *v0 = v0;
  v0[2] = v0;
  *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) = 0LL;
}
