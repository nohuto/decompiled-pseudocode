/*
 * XREFs of ??0TabletModeInputHandler@@QEAA@XZ @ 0x180483AC8
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x180483A0C (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
TabletModeInputHandler *__fastcall TabletModeInputHandler::TabletModeInputHandler(TabletModeInputHandler *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &TabletModeInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputHandler>'};
  *((_QWORD *)this + 2) = &TabletModeInputHandler::`vftable'{for `CWRLImpWndProc<TabletModeInputHandler>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 1;
  return this;
}
