/*
 * XREFs of ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x18024BD10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18024B6D8 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 */

CQuickConnectExperienceManager *__fastcall CQuickConnectExperienceManager::`vector deleting destructor'(
        CQuickConnectExperienceManager *this,
        char a2)
{
  CQuickConnectExperienceManager::~CQuickConnectExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A8);
  return this;
}
