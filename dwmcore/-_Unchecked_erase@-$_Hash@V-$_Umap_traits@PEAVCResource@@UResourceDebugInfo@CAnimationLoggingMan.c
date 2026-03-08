/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@2@PEAU32@@Z @ 0x18003ED14
 * Callers:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18003EA18 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Unchecked_erase(
        unsigned __int64 a1,
        __int64 *a2)
{
  unsigned __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx

  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)a2 + 16, 8uLL);
  v5 = v4[3];
  v6 = 2 * (v4[6] & appended);
  if ( *(__int64 **)(v5 + 16 * (v4[6] & appended) + 8) == a2 )
  {
    if ( *(__int64 **)(v5 + 16 * (v4[6] & appended)) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = a2[1];
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 16 * (v4[6] & appended)) == a2 )
  {
    *(_QWORD *)(v5 + 16 * (v4[6] & appended)) = *a2;
  }
  v8 = *a2;
  --v4[2];
  *(_QWORD *)a2[1] = v8;
  *(_QWORD *)(v8 + 8) = a2[1];
  std::wstring::_Tidy_deallocate(a2 + 4);
  std::_Deallocate<16,0>(a2, 72LL);
  return v8;
}
