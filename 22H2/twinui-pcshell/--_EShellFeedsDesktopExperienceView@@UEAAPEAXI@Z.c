/*
 * XREFs of ??_EShellFeedsDesktopExperienceView@@UEAAPEAXI@Z @ 0x1800C1EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800C1D70 (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 */

ShellFeedsDesktopExperienceView *__fastcall ShellFeedsDesktopExperienceView::`vector deleting destructor'(
        ShellFeedsDesktopExperienceView *this,
        char a2)
{
  ShellFeedsDesktopExperienceView::~ShellFeedsDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
