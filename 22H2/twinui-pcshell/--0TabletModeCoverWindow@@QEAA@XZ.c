/*
 * XREFs of ??0TabletModeCoverWindow@@QEAA@XZ @ 0x180484270
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1804841B4 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
TabletModeCoverWindow *__fastcall TabletModeCoverWindow::TabletModeCoverWindow(TabletModeCoverWindow *this)
{
  _QWORD *v2; // rdi

  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = (_QWORD *)((char *)this + 40);
  Microsoft::WRL::FtmBase::FtmBase((TabletModeCoverWindow *)((char *)this + 40));
  *((_DWORD *)this + 23) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *v2 = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITabletModeCoverWindow,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `ITabletModeCoverWindow'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *v2 = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITabletModeCoverWindow,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *((_QWORD *)this + 9) = &TabletModeCoverWindow::`vftable'{for `ITabletModeCoverWindow'};
  *((_QWORD *)this + 10) = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>'};
  *((_QWORD *)this + 12) = &TabletModeCoverWindow::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 14);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_BYTE *)this + 220) = 0;
  return this;
}
