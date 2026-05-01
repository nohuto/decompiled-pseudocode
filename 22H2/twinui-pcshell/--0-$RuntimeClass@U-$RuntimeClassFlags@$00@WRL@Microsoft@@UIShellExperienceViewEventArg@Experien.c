/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180051F30
 * Callers:
 *     ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x180051E10 (--$MakeAndInitialize@VShellExperienceViewEventArg@-1--_FireViewEvent@ShellExperienceView@Cortana.c)
 *     ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1800C6060 (--$MakeAndInitialize@VShellExperienceViewEventArg@-1--_FireViewEvent@ShellFeedsShellExperienceVi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
        _QWORD *a1)
{
  a1[3] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewEventArg'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
