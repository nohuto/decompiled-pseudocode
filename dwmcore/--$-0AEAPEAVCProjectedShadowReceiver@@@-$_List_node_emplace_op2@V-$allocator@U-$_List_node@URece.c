/*
 * XREFs of ??$?0AEAPEAVCProjectedShadowReceiver@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x180007478
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180004924 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  SIZE_T size_of; // rax
  __int64 v9; // rax
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  a1[1] = v5;
  v6 = v5;
  v7 = *a3;
  *(_QWORD *)(v5 + 16) = *a3;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(v6 + 24) = v9;
  result = a1;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_DWORD *)(v6 + 112) = 0;
  *(_BYTE *)(v6 + 116) = 0;
  return result;
}
