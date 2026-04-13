/*
 * XREFs of ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@5@@Z @ 0x18003E8F8
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18003D488 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18002CF2C (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180034084 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003FE34 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rdi
  _QWORD *v5; // rdx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  CreativeFramework::Health::details::BaseScenarioEvents *v10; // [rsp+28h] [rbp-50h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+48h] [rbp-30h] BYREF

  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v12,
         a2);
  CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(&v10, a1);
  v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v13,
         v4);
  result = CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
             v10,
             (__int64)v5);
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      v7 = v11;
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v8 = (volatile signed __int32 *)v4[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a2[1];
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
