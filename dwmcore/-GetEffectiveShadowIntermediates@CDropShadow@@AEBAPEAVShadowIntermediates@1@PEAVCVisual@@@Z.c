/*
 * XREFs of ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x180226ED8
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226640 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180227050 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@1@AEBQEAVCVisual@@_K@Z @ 0x180225D08 (--$_Find@PEAVCVisual@@@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-.c)
 */

struct CDropShadow::ShadowIntermediates *__fastcall CDropShadow::GetEffectiveShadowIntermediates(
        CDropShadow *this,
        struct CVisual *a2)
{
  __int64 appended; // rax
  __int64 v4; // rdx
  struct CDropShadow::ShadowIntermediates *result; // rax
  struct CVisual *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_DWORD *)this + 31) != 1 )
    return (CDropShadow *)((char *)this + 128);
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v6, 8uLL);
  v4 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
         (_QWORD *)this + 25,
         &v6,
         appended);
  result = 0LL;
  if ( v4 != *((_QWORD *)this + 26) )
    return (struct CDropShadow::ShadowIntermediates *)(v4 + 24);
  return result;
}
