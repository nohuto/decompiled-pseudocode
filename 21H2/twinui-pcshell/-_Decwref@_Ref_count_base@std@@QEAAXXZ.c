/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18020FB40
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::__lambda_536d29ca497f1a4a88268fb5f9ff4d76_ @ 0x1800CE9F8 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--__lambda_536d29ca497f1a4a88268fb5f9ff4d76_.c)
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x1801343AC (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 *     _lambda_3365270d15408528c67f40078b37390e_::__lambda_3365270d15408528c67f40078b37390e_ @ 0x1801359E4 (_lambda_3365270d15408528c67f40078b37390e_--__lambda_3365270d15408528c67f40078b37390e_.c)
 *     wil::details::lambda_call__lambda_3365270d15408528c67f40078b37390e___::_lambda_call__lambda_3365270d15408528c67f40078b37390e___ @ 0x180135CF4 (wil--details--lambda_call__lambda_3365270d15408528c67f40078b37390e___--_lambda_call__lambda_3365.c)
 *     std::weak_ptr__anonymous_namespace_::PinConsentPromptManager_::_weak_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1801360BC (std--weak_ptr__anonymous_namespace_--PinConsentPromptManager_--_weak_ptr__anonymous_namespace_--.c)
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18013614C (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801A78AC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18030F6F8 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x18031ADD0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ??1?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ @ 0x18039489C (--1-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ.c)
 *     ??_G?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@UEAAPEAXI@Z @ 0x1803955A0 (--_G-$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrenc.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180397A58 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE340 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
