/*
 * XREFs of ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x1804E65C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1804E656C (--1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ.c)
 */

DesktopSingleViewShellExperiencePersonality *__fastcall DesktopSingleViewShellExperiencePersonality::`vector deleting destructor'(
        DesktopSingleViewShellExperiencePersonality *this,
        char a2)
{
  DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
