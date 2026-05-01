/*
 * XREFs of ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x180246200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180245D00 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
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
