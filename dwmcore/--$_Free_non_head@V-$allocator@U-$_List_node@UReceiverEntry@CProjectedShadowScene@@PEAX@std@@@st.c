/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180009910
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800047D4 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180004850 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180005284 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCProjectedShadowCaster@@V-$com_ptr_t@VCPro.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r14
  _QWORD *v4; // rsi

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>,void *>>>(
        (__int64)(v3 + 3),
        (__int64)(v3 + 3),
        *(__int64 **)(v3[3] + 8LL));
      std::_Deallocate<16,0>(v3[3], 48LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3 + 2);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 120LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
