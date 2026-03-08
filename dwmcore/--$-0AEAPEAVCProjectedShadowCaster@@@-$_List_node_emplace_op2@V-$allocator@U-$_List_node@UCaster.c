/*
 * XREFs of ??$?0AEAPEAVCProjectedShadowCaster@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@AEAPEAVCProjectedShadowCaster@@@Z @ 0x1800073C8
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180004A6C (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  a1[1] = v5;
  v6 = v5;
  v7 = *a3;
  *(_QWORD *)(v5 + 16) = *a3;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(v6 + 24) = 0LL;
  result = a1;
  *(_DWORD *)(v6 + 96) = 0;
  *(_DWORD *)(v6 + 164) = 0;
  *(_BYTE *)(v6 + 168) = 0;
  return result;
}
