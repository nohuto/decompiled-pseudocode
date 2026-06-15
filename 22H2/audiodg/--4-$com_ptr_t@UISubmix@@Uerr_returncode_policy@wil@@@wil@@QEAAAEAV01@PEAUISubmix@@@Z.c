/*
 * XREFs of ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140003540 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x1400209B4 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140054534 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x1400545E0 (--0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123.c)
 *     ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x14005471C (--0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@S.c)
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x140058B20 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140059D70 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x140059DE0 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140060B90 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14006CEB0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
