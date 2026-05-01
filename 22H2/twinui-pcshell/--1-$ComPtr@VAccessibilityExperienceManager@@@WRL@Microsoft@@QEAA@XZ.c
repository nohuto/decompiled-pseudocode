/*
 * XREFs of ??1?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803DE57C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AccessibilityExperienceManager_AccessibilityExperienceManager__::_1_::dtor$2 @ 0x1803DD9DA (_Microsoft--WRL--Details--MakeAndInitialize_AccessibilityExperienceManager_Accessib_ea_1803DD9DA.c)
 *     _AccessibilityExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1803DEEFF (_AccessibilityExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::~ComPtr<AccessibilityExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(a1);
}
