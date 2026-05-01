/*
 * XREFs of _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1803B6FAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor_12(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)&a2[8].lpVtbl[13], a2, a3);
}
