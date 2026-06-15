/*
 * XREFs of ??$query_to@UIAudioDeviceModule@Devices@Media@Windows@@@?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x14002031C
 * Callers:
 *     ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x1400573F0 (-GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@23.c)
 *     ?get_Module@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIAudioDeviceModule@234@@Z @ 0x14005A810 (-get_Module@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIAudioDevi.c)
 *     ?get_NotificationData@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x14005A870 (-get_NotificationData@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJPEA.c)
 *     ?get_NotificationData@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x14005A8D0 (-get_NotificationData@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAU.c)
 *     ?get_Result@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x14005A930 (-get_Result@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::query_to<Windows::Media::Devices::IAudioDeviceModule>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a2 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
