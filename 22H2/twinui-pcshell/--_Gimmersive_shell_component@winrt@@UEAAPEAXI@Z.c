/*
 * XREFs of ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x1804D1884
 * Callers:
 *     ??_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z @ 0x1801713D0 (--_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1804D1598 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 */

winrt::immersive_shell_component *__fastcall winrt::immersive_shell_component::`scalar deleting destructor'(
        winrt::immersive_shell_component *this,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
