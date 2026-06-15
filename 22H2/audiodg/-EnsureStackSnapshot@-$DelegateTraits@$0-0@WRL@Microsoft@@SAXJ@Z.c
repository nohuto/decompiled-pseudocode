/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x140055CD4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_29cc984d3fc8a0f639482bc84a6e6ba6___1_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::Invoke @ 0x140024940 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_140024940.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
}
