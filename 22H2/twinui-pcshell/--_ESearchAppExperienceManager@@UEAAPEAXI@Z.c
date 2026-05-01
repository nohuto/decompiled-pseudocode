/*
 * XREFs of ??_ESearchAppExperienceManager@@UEAAPEAXI@Z @ 0x180265460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x180265104 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 */

SearchAppExperienceManager *__fastcall SearchAppExperienceManager::`vector deleting destructor'(
        SearchAppExperienceManager *this,
        char a2)
{
  SearchAppExperienceManager::~SearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2B0);
  return this;
}
