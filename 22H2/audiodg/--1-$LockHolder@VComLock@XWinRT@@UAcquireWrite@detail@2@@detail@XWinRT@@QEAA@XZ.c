/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x140054A3C
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::Clear_::_1_::dtor$0 @ 0x1400221F5 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Internal--AudioDevi.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::RemoveAtInternal_::_1_::dtor$1 @ 0x140026835 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Intern_ea_140026835.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::SetAt_::_1_::dtor$2 @ 0x140027412 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Intern_ea_140027412.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::Clear_::_1_::dtor$0 @ 0x140055B95 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioDeviceModule__.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::RemoveAtInternal_::_1_::dtor$1 @ 0x140059CF5 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140059CF5.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::SetAt_::_1_::dtor$2 @ 0x14005A192 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14005A192.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
    *a1 = 0LL;
  }
}
