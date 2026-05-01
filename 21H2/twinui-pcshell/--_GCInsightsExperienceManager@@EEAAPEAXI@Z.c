/*
 * XREFs of ??_GCInsightsExperienceManager@@EEAAPEAXI@Z @ 0x18025E500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18025E33C (--1CInsightsExperienceManager@@EEAA@XZ.c)
 */

CInsightsExperienceManager *__fastcall CInsightsExperienceManager::`scalar deleting destructor'(
        CInsightsExperienceManager *this,
        char a2)
{
  CInsightsExperienceManager::~CInsightsExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x150);
  return this;
}
