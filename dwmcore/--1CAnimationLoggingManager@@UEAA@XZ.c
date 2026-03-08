/*
 * XREFs of ??1CAnimationLoggingManager@@UEAA@XZ @ 0x1800F72D4
 * Callers:
 *     ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x1800F7290 (--_GCAnimationLoggingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F7348 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimatio.c)
 */

void __fastcall CAnimationLoggingManager::~CAnimationLoggingManager(CAnimationLoggingManager *this)
{
  __int64 v2; // rcx

  std::wstring::_Tidy_deallocate((_QWORD *)this + 20);
  std::_Deallocate<16,0>(
    *((void **)this + 15),
    (*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
    v2,
    *((_QWORD *)this + 13));
  std::_Deallocate<16,0>(*((void **)this + 13), 0x48uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
