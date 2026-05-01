/*
 * XREFs of ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x180276340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x180276034 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 */

SearchAppDesktopExperienceView *__fastcall SearchAppDesktopExperienceView::`scalar deleting destructor'(
        SearchAppDesktopExperienceView *this,
        char a2)
{
  SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x168);
  return this;
}
