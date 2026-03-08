/*
 * XREFs of ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B5B98
 * Callers:
 *     ??_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z @ 0x1801B5E50 (--_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801B8EEC (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801B8F40 (-_Tidy@-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::~BufferingMessageCallHost(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((char *)this + 80);
  std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy((char *)this + 48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)this + 32,
    (__int64)this + 32,
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 4), 0x30uLL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
