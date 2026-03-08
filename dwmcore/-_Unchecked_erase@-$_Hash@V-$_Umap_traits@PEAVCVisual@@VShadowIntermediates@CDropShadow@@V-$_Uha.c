/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@@Z @ 0x180227B04
 * Callers:
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180227308 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800F810C (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Unchecked_erase(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx

  appended = std::_Fnv1a_append_bytes(a1, a2 + 16, 8uLL);
  v5 = v4[3];
  v6 = 2 * (v4[6] & appended);
  if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended)) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended)) == a2 )
  {
    *(_QWORD *)(v5 + 16 * (v4[6] & appended)) = *(_QWORD *)a2;
  }
  v8 = *(_QWORD *)a2;
  --v4[2];
  **((_QWORD **)a2 + 1) = v8;
  *(_QWORD *)(v8 + 8) = *((_QWORD *)a2 + 1);
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow::ShadowIntermediates *)(a2 + 24));
  std::_Deallocate<16,0>(a2, 0x60uLL);
  return v8;
}
