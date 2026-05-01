/*
 * XREFs of ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x18023F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18023F82C (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 */

CShoulderTapExperienceManager *__fastcall CShoulderTapExperienceManager::`scalar deleting destructor'(
        CShoulderTapExperienceManager *this,
        char a2)
{
  CShoulderTapExperienceManager::~CShoulderTapExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x150);
  return this;
}
