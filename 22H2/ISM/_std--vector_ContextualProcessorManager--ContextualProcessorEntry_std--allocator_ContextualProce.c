/*
 * XREFs of _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$33 @ 0x18004996F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K@Z @ 0x180041778 (-deallocate@-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAX.c)
 *     ?_Destroy@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0@Z @ 0x180049B74 (-_Destroy@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UContextua.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 120),
    *(_QWORD *)(a2 + 112));
  std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 136));
  throw;
}
