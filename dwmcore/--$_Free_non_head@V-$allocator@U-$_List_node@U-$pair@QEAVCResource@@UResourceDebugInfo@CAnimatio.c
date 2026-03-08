/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F7348
 * Callers:
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x1800F72D4 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
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
      std::wstring::_Tidy_deallocate(v2 + 4);
      std::_Deallocate<16,0>(v2, 0x48uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
