/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x1400209B4
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001FD00 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140011108 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x140059FB8 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(
        Windows::Media::Devices::AudioDeviceModule *this,
        HSTRING a2,
        int a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *a7)
{
  _QWORD *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *v11; // rdx
  HSTRING v13; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a2;
  v7 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)this + 8);
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable';
  *v7 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *v7 = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 10, &v13);
  *((_DWORD *)this + 18) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 11, &v14);
  v11 = a7;
  *((_DWORD *)this + 16) = a5;
  *((_DWORD *)this + 17) = a6;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((char *)this + 96, v11);
  return this;
}
