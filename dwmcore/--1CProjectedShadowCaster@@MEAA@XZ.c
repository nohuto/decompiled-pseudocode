/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180007550
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x1800042A0 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@@Z @ 0x18000981C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjecte.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::SetCastingVisual((CProjectedShadowCaster *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  v2 = this[12];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[14] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[12] = 0LL;
    this[13] = 0LL;
    this[14] = 0LL;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
    this + 10,
    this + 10,
    *((_QWORD *)this[10] + 1));
  std::_Deallocate<16,0>(this[10], 88LL);
  CResource::~CResource((CResource *)this);
}
