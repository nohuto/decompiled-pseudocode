/*
 * XREFs of ??_ETabViewManager@@UEAAPEAXI@Z @ 0x1802DB428
 * Callers:
 *     ??_ETabViewManager@@WDA@EAAPEAXI@Z @ 0x180167AF0 (--_ETabViewManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabViewManager@@UEAA@XZ @ 0x1802D9E2C (--1TabViewManager@@UEAA@XZ.c)
 */

TabViewManager *__fastcall TabViewManager::`vector deleting destructor'(TabViewManager *this, char a2)
{
  TabViewManager::~TabViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x5A0);
  return this;
}
