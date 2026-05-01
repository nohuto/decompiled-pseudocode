/*
 * XREFs of ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180226BC8
 * Callers:
 *     ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x180226EB0 (--_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1804E343C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(
        TwinUI::Cortana::ShellExperienceView *this,
        volatile int *a2)
{
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  volatile int *v6; // rdx

  v3 = *((_QWORD *)this + 35);
  if ( v3 )
  {
    *((_QWORD *)this + 35) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v3 + 12), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    *((_QWORD *)this + 32) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5, a2);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
    (__int64)this,
    v6);
}
