/*
 * XREFs of ??0CFullScreenManager@@QEAA@XZ @ 0x180218984
 * Callers:
 *     ??$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180218230 (--$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x180218824 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIF.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1804E6800 (--0CGITRegistrationList@@QEAA@XZ.c)
 */

CFullScreenManager *__fastcall CFullScreenManager::CFullScreenManager(CFullScreenManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>((__int64)this);
  *(_QWORD *)this = &CFullScreenManager::`vftable';
  *((_QWORD *)this + 3) = &CFullScreenManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &CFullScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &CFullScreenManager::`vftable'{for `IFullScreenManager'};
  *((_QWORD *)this + 12) = &CFullScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 13) = &CFullScreenManager::`vftable'{for `IFullScreenNotificationService'};
  *((_QWORD *)this + 14) = &CFullScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 15) = &CFullScreenManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 16) = &CFullScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer>'};
  CGITRegistrationList::CGITRegistrationList((CFullScreenManager *)((char *)this + 144));
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  return this;
}
