/*
 * XREFs of ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18014B2B4
 * Callers:
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$5 @ 0x18004FCF0 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$5.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014A1C0 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014CBE0 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 *     _ContextualProcessorBuffer::OnDeferredContextualProcessorResponse_::_1_::dtor$0 @ 0x18014CE2F (_ContextualProcessorBuffer--OnDeferredContextualProcessorResponse_--_1_--dtor$0.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18014D920 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$5 @ 0x18014DAB7 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800970D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

void __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 104);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    *((_QWORD ***)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x18);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 32);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v3,
    *((_QWORD ***)this + 2));
  std::_Deallocate<16,0>(*((void **)this + 2), (const struct std::nothrow_t *)0x18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
