/*
 * XREFs of ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146E7C
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801470D0 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x180147180 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x180147218 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E80 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180035F34 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B0C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@@Z @ 0x180146294 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x180146448 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@U.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18014755C (-clear@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayOcclusionContextProvider::Broadcast(DisplayOcclusionContextProvider *this)
{
  __int64 v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  char v10; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  char v12; // [rsp+90h] [rbp+10h]

  v8 = 0LL;
  *(_QWORD *)&v8 = std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>();
  if ( &v8 != (__int128 *)((char *)this + 88) )
  {
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::clear(&v8);
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy_tag>(
      (__int64 *)&v8,
      (_QWORD *)this + 11,
      v12,
      v2);
  }
  v9[0] = 0LL;
  v3 = std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>();
  *(_QWORD *)&v9[0] = v8;
  *(_QWORD *)&v8 = v3;
  v4 = *((_QWORD *)&v9[0] + 1);
  *((_QWORD *)&v9[0] + 1) = *((_QWORD *)&v8 + 1);
  *((_QWORD *)&v8 + 1) = v4;
  v10 = 2;
  v5 = SystemContextProvider::BroadcastMessageToObservers((__int64)this, (__int64)v9);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v5);
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy((__int64)v9);
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
    (__int64)&v8,
    (__int64)&v8,
    *(_QWORD *)(v8 + 8));
  std::_Deallocate<16,0>((void *)v8, (const struct std::nothrow_t *)0xD0);
  return v6;
}
