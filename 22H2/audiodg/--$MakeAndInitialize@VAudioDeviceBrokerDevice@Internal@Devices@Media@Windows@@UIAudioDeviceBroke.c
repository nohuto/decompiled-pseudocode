/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FDB0
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012BF4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x1400194A0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140020888 (--0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCApoEndpoint@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140020BE4 (--1-$MakeAllocator@VCApoEndpoint@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400256F0 (-QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140026D60 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
        void **a1,
        HANDLE *a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v4; // rax
  int Interface; // edi
  void *v6; // rbx
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)operator new(
                                                                       0xE8uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = (void *)Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::AudioDeviceBrokerDevice(v4);
    v9 = v6;
    v8 = 0LL;
    Interface = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(v6, *a2);
    if ( Interface >= 0 )
      Interface = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::QueryInterface(
                    (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)v6,
                    &GUID_79cc8d75_9666_4c7d_90b9_56de0ec14239,
                    a1);
    if ( v6 )
      Windows::Media::Devices::AudioDeviceModulesManager::Release((Windows::Media::Devices::AudioDeviceModulesManager *)v6);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CApoEndpoint>::~MakeAllocator<CApoEndpoint>(&v8);
  return (unsigned int)Interface;
}
