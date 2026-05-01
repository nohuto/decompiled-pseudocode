/*
 * XREFs of ??0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18040CEAC
 * Callers:
 *     ??$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewInvocationAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@$$QEA$$T@Z @ 0x18040CE04 (--$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@Wea.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18040C1B4 (--0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 */

SnapAssistViewInvocationAnimationCoordinator *__fastcall SnapAssistViewInvocationAnimationCoordinator::SnapAssistViewInvocationAnimationCoordinator(
        SnapAssistViewInvocationAnimationCoordinator *this)
{
  MultitaskingViewInvocationAnimationCoordinator::MultitaskingViewInvocationAnimationCoordinator(this);
  *((_QWORD *)this + 26) = 0LL;
  *(_QWORD *)this = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &MultitaskingViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_DWORD *)this + 57) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SnapAssistViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  return this;
}
