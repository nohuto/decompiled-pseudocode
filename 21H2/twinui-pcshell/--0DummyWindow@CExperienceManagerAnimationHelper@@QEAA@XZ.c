/*
 * XREFs of ??0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1804E59FC
 * Callers:
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x1804E5950 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

CExperienceManagerAnimationHelper::DummyWindow *__fastcall CExperienceManagerAnimationHelper::DummyWindow::DummyWindow(
        CExperienceManagerAnimationHelper::DummyWindow *this)
{
  CExperienceManagerAnimationHelper::DummyWindow *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IOleWindow>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CExperienceManagerAnimationHelper::DummyWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IOleWindow>'};
  *((_QWORD *)this + 2) = &CExperienceManagerAnimationHelper::DummyWindow::`vftable'{for `CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>'};
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
