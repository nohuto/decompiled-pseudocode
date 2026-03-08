/*
 * XREFs of ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1800EE0AC
 * Callers:
 *     ??_GCCpuClipAntialiasSink@@UEAAPEAXI@Z @ 0x1800EE070 (--_GCCpuClipAntialiasSink@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 */

void __fastcall CCpuClipAntialiasSink::~CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  `vector destructor iterator'(
    (char *)this + 40,
    8uLL,
    2uLL,
    (void (*)(void *))std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 4);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (char *)this + 16,
    (char *)this + 16,
    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 2), 0x30uLL);
}
