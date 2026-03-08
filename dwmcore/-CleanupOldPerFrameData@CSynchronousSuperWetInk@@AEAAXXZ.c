/*
 * XREFs of ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18024FECC
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180250494 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     McTemplateU0px_EventWriteTransfer @ 0x18022B6EC (McTemplateU0px_EventWriteTransfer.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x18024F910 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x180250384 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180250E08 (-clear@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 */

void __fastcall CSynchronousSuperWetInk::CleanupOldPerFrameData(CSynchronousSuperWetInk *this)
{
  unsigned __int64 LatestLookupId; // rax
  __int64 v3; // rcx
  __int64 **v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // r9
  __int64 *v11; // rbp
  std::_Ref_count_base *v12; // rcx
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 29) )
  {
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    v4 = (__int64 **)(v3 + 224);
    v14 = LatestLookupId;
    v5 = LatestLookupId;
    v7 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
                       (__int64 *)(v3 + 224),
                       (__int64)v13,
                       (unsigned __int64 *)&v14)
                   + 16);
    v8 = **v4;
    if ( v7 != v8 )
    {
      v9 = *(_BYTE *)(v7 + 25) == 0;
      v14 = **v4;
      if ( v9 )
      {
        while ( v8 != v7 )
        {
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
          v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
                  v4,
                  v10);
          v12 = (std::_Ref_count_base *)v11[6];
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          std::_Deallocate<16,0>(v11, 0x38uLL);
          v8 = v14;
        }
      }
      else
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(v4);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0px_EventWriteTransfer(v6, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_CLEANUP, this, v5);
    }
  }
}
