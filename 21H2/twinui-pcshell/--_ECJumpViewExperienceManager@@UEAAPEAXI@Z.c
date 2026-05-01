/*
 * XREFs of ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1802463B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180245EB0 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::`vector deleting destructor'(
        CJumpViewExperienceManager *this,
        char a2)
{
  CJumpViewExperienceManager::~CJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x350);
  return this;
}
