/*
 * XREFs of ??1?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D910
 * Callers:
 *     _CWRLImpWndProc_CExperienceManagerAnimationHelper::DummyWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180177122 (_CWRLImpWndProc_CExperienceManagerAnimationHelper--DummyWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExperienceManagerAnimationHelper::DummyWindow_CExperienceManagerAnimationHelper::DummyWindow_IDWMStoryboardListener___&__::_1_::dtor$2 @ 0x1804E59E9 (_Microsoft--WRL--Details--MakeAndInitialize_CExperienceManagerAnimationHelper--Dumm_ea_1804E59E9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::~ComPtr<CExperienceManagerAnimationHelper::DummyWindow>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(a1);
}
