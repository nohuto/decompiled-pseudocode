/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007F8B8
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$1 @ 0x180050FE0 (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$1.c)
 *     _wil::GetActivationFactory_Windows::Perception::Internal::IPerceptionTimestampHelperStaticsInternal__::_1_::dtor$1 @ 0x18007F8A6 (_wil--GetActivationFactory_Windows--Perception--Internal--IPerceptionTimestampHelpe_ea_18007F8A6.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x18008B92B (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 *     _wil::GetActivationFactory_Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal__::_1_::dtor$1 @ 0x18008C02E (_wil--GetActivationFactory_Windows--Graphics--Holographic--Internal--IHolographicDi_ea_18008C02E.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x1800A2CE0 (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _wil::GetActivationFactory_Windows::System::IDispatcherQueueControllerStatics__::_1_::dtor$1 @ 0x180106052 (_wil--GetActivationFactory_Windows--System--IDispatcherQueueControllerStatics__--_1_--dtor$1.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVector_HSTRING_________Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118D0D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_180118D0D.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::IPropertyValue____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118DDD (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_180118DDD.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForInputTypeToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118EAD (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180118EAD.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118F7D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180118F7D.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x18011904D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_18011904D.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
