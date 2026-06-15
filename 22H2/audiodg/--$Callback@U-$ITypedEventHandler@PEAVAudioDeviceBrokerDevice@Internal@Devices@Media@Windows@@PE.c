/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerDevice@5673@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@P834567@EAAJPEAUIAudioDeviceBrokerDevice@4567@PEAUIAudioDeviceBrokerChangedEventArgs@4567@@Z@Z @ 0x14001F080
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012BF4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___ @ 0x140020344 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_140020344.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v3 = *a3;
  v8 = a2;
  v5 = 0LL;
  v9 = v3;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v5 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___(
           v6,
           &v8);
  *a1 = v5;
  return a1;
}
