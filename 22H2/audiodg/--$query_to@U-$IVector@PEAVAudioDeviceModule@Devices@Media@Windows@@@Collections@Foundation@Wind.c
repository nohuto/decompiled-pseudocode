/*
 * XREFs of ??$query_to@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1400202FC
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140019B00 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,wil::err_returncode_policy>::query_to<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9, a2);
}
