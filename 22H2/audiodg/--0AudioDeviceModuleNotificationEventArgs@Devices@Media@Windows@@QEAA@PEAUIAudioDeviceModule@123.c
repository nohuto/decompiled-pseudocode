/*
 * XREFs of ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x1400545E0
 * Callers:
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140053E04 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140011900 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::AudioDeviceModuleNotificationEventArgs(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *)((char *)this + 16));
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *))(*(_QWORD *)a2 + 8LL))(a2);
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 9, (__int64)a3);
  return this;
}
