/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180007A74
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180004A6C (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v2 + 16));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 176LL);
}
