/*
 * XREFs of ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x18024BB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18024B528 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
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
