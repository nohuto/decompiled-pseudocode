/*
 * XREFs of ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x140054B9C
 * Callers:
 *     ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140055250 (--_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(
        Windows::Media::Devices::ModuleCommandResult *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
