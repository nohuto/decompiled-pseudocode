/*
 * XREFs of ??_GRetailDemoExperienceManager@@EEAAPEAXI@Z @ 0x18025B0F8
 * Callers:
 *     ??_ERetailDemoExperienceManager@@GDA@EAAPEAXI@Z @ 0x180165130 (--_ERetailDemoExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RetailDemoExperienceManager@@EEAA@XZ @ 0x18025AF88 (--1RetailDemoExperienceManager@@EEAA@XZ.c)
 */

RetailDemoExperienceManager *__fastcall RetailDemoExperienceManager::`scalar deleting destructor'(
        RetailDemoExperienceManager *this,
        char a2)
{
  RetailDemoExperienceManager::~RetailDemoExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F8);
  return this;
}
