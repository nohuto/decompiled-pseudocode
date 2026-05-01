/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHandledEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18033CC04
 * Callers:
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@$$QEA_N@Z @ 0x18033BBF0 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEv.c)
 *     ??$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x18034C194 (--$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VViewHandledEventArgs@@@WRL@Micro.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 2));
  a1[7] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &ViewHandledEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
