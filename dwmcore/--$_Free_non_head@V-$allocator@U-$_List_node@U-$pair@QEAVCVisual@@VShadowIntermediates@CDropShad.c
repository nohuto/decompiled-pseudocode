/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F80B0
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800F7D48 (--1CDropShadow@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800F80E0 (-clear@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800F810C (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow::ShadowIntermediates *)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0x60uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
