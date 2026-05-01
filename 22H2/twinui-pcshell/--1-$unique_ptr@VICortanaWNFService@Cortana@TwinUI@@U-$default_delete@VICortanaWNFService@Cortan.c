/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x180275FCC
 * Callers:
 *     _ShellFeedsDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1800C5950 (_ShellFeedsDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1802776FA (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18027789F (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18028038F (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180280695 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
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
