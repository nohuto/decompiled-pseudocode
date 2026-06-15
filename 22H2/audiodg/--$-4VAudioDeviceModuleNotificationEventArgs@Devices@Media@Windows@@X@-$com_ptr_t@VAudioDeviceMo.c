/*
 * XREFs of ??$?4VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@X@?$com_ptr_t@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@WRL@Microsoft@@@Z @ 0x14001EDA8
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058660 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140059820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_140059820.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::operator=<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release();
  return a1;
}
