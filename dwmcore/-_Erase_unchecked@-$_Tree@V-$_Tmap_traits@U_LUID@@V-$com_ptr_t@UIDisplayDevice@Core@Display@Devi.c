/*
 * XREFs of ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1802951A4
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBU_LUID@@@Z @ 0x18029530C (-erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18028E054 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Erase_unchecked(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r9
  __int64 v8; // r9
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (_QWORD *)*a1;
  v5 = a2;
  if ( a2 == *(_QWORD *)*a1 && *(_BYTE *)(a3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      (__int64 *)v3[1]);
    v3[1] = v3;
    *v3 = v3;
    v3[2] = v3;
    a1[1] = 0LL;
  }
  else
  {
    while ( v5 != a3 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v11);
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
             a1,
             v8);
      v10 = v9[5];
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      std::_Deallocate<16,0>(v9, 0x30uLL);
      v5 = v11;
    }
  }
  return a3;
}
