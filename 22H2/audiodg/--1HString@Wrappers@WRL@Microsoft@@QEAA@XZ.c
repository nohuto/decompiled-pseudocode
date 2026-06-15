/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140054B60
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058660 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$9 @ 0x140058AF3 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
