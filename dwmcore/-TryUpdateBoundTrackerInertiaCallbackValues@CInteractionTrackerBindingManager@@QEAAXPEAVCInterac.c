/*
 * XREFs of ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1802358E4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B052C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x1802337F0 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802348EC (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180234B60 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  int v3; // esi
  float CurrentValue; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  char v9; // bl
  __int64 v10; // rcx
  _QWORD **v11; // rax
  _QWORD *i; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  __int64 v20; // rcx
  _BYTE v21[16]; // [rsp+38h] [rbp-49h] BYREF
  float v22; // [rsp+48h] [rbp-39h]
  float v23; // [rsp+4Ch] [rbp-35h]
  float v24; // [rsp+54h] [rbp-2Dh]
  __int64 v25; // [rsp+78h] [rbp-9h] BYREF
  _QWORD **v26; // [rsp+80h] [rbp-1h]
  void *v27; // [rsp+90h] [rbp+Fh]
  __int128 v28; // [rsp+98h] [rbp+17h]

  v3 = (int)this;
  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)&v25);
    CInteractionTracker::CalculateInertiaCallbackValues((__int64)a2, (__int64)v21);
    CurrentValue = CInteractionTracker::GetCurrentValue((__int64)a2, 0);
    v5 = v22 - CurrentValue;
    v6 = CInteractionTracker::GetCurrentValue((__int64)a2, 1);
    v7 = v23 - v6;
    v8 = CInteractionTracker::GetCurrentValue((__int64)a2, 2);
    v9 = v5 != 0.0;
    if ( v7 != 0.0 )
      v9 |= 2u;
    if ( (float)(v24 / v8) != 1.0 )
      v9 |= 4u;
    CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(v3, (int)a2, v9, &v25);
    v11 = v26;
    for ( i = *v26; i != v11; i = (_QWORD *)*i )
    {
      v13 = i[2];
      if ( (*(_BYTE *)(v13 + 541) & 1) == 0 )
      {
        v14 = CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
                v10,
                (__int64)v21,
                a2,
                (float *)v13,
                *((_DWORD *)i + 6));
        v15 = *(_OWORD *)v14;
        v16 = *(_OWORD *)(v14 + 16);
        v17 = *(_OWORD *)(v14 + 32);
        v18 = *(_QWORD *)(v14 + 48);
        v19 = i[2];
        *(_OWORD *)(v19 + 580) = v15;
        *(_OWORD *)(v19 + 596) = v16;
        *(_OWORD *)(v19 + 612) = v17;
        *(_QWORD *)(v19 + 628) = v18;
        v11 = v26;
      }
    }
    std::_Deallocate<16,0>(v27, (v28 - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL);
    v27 = 0LL;
    v28 = 0LL;
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v20,
      v26);
    std::_Deallocate<16,0>(v26, 0x20uLL);
  }
}
