/*
 * XREFs of ?Globals@Base@Gre@@YAAEAUSESSION_GLOBALS@12@XZ @ 0x1C00441B0
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D71F0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall Gre::Base::Globals(Gre::Base *this)
{
  return *(struct Gre::Base::SESSION_GLOBALS **)(SGDGetSessionState(this) + 24);
}
