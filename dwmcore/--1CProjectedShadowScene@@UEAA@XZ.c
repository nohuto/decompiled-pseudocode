/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800047D4
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800042F0 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1800043B8 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1800044B8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180004850 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180004C78 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180009910 (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CProjectedShadowScene::ClearShadows(this, 0);
  CProjectedShadowScene::ClearCasters(this);
  CProjectedShadowScene::ClearReceivers(this);
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v2,
    *((_QWORD *)this + 10));
  std::_Deallocate<16,0>(*((_QWORD *)this + 10), 120LL);
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v3,
    *((_QWORD *)this + 8));
  std::_Deallocate<16,0>(*((_QWORD *)this + 8), 176LL);
  CResource::~CResource(this);
}
