/*
 * XREFs of ??0CClassicWindowManager@@QEAA@XZ @ 0x1801D23D8
 * Callers:
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801D20B4 (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 * Callees:
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1801B6830 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D231C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWi_ea_1801D231C.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::CClassicWindowManager(CClassicWindowManager *this)
{
  CClassicWindowManager *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>((__int64)this);
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((__int64)this + 136, 0);
  *(_QWORD *)this = &CClassicWindowManager::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 9) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 10) = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 11) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 12) = &CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 13) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 14) = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 15) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 23) = &CClassicWindowActivationBasedCollection::`vftable';
  *((_QWORD *)this + 28) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::`vftable';
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  return result;
}
