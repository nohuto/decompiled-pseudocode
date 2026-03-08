/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800F80E0
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800F7D48 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F80B0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShad.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180227BAC (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropSh_ea_180227BAC.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::clear(
        unsigned __int64 *a1)
{
  _QWORD **v2; // rdx
  void *v3; // rdx
  unsigned __int64 v4; // rcx

  if ( a1[2] )
  {
    v2 = (_QWORD **)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        (__int64)a1,
        v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8) = a1[1];
      a1[2] = 0LL;
      v3 = (void *)a1[3];
      v4 = (a1[4] - (unsigned __int64)v3 + 7) >> 3;
      if ( (unsigned __int64)v3 > a1[4] )
        v4 = 0LL;
      if ( v4 )
        memset64(v3, a1[1], v4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Unchecked_erase(
        a1,
        *v2,
        a1[1]);
    }
  }
}
