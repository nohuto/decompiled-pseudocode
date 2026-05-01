/*
 * XREFs of ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1802459EC
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1802451B8 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D128 (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??0ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x180245C5C (--0ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1804E3308 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::CJumpViewExperienceManager(
        CJumpViewExperienceManager *this)
{
  CJumpViewExperienceManager *result; // rax

  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `Windows::Internal::Shell::Experience::IJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `IActiveZBandNotificationForMonitor'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 2) = &CJumpViewExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 4) = &CJumpViewExperienceManager::`vftable'{for `IActiveZBandNotificationForMonitor'};
  *((_QWORD *)this + 5) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 8) = &CJumpViewExperienceManager::`vftable';
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 9);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 12);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 15);
  *((_QWORD *)this + 18) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 152, (char *)this + 64, 1LL);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_BYTE *)this + 432) = 0;
  *((_DWORD *)this + 109) = 56;
  *(GUID *)((char *)this + 440) = GUID_NULL;
  *((_QWORD *)this + 57) = 0LL;
  *((_BYTE *)this + 464) = 0;
  *((_DWORD *)this + 117) = 57;
  *(GUID *)((char *)this + 472) = GUID_NULL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 3;
  *((_DWORD *)this + 125) = 3;
  *((_DWORD *)this + 126) = 6;
  *((_WORD *)this + 254) = 0;
  *((_OWORD *)this + 32) = 0LL;
  JumpViewProvider::ShowJumpViewActivity::ShowJumpViewActivity((CJumpViewExperienceManager *)((char *)this + 528));
  result = this;
  *((_QWORD *)this + 105) = 0LL;
  return result;
}
