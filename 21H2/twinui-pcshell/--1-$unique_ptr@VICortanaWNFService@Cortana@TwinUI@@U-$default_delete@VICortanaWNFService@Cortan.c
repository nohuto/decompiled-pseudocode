/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x18027617C
 * Callers:
 *     _ShellFeedsDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1800C5970 (_ShellFeedsDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1802778AA (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180277A4F (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18028053F (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180280845 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        __int64 a1)
{
  return wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
           a1,
           0LL);
}
