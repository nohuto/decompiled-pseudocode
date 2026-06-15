/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___ @ 0x140020344
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerDevice@5673@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@P834567@EAAJPEAUIAudioDeviceBrokerDevice@4567@PEAUIAudioDeviceBrokerChangedEventArgs@4567@@Z@Z @ 0x14001F080 (--$Callback@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &off_140071CF0;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
