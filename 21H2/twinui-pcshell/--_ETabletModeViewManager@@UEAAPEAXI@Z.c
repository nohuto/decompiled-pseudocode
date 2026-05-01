/*
 * XREFs of ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x18047121C
 * Callers:
 *     ??_ETabletModeViewManager@@WBI@EAAPEAXI@Z @ 0x180170820 (--_ETabletModeViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModeViewManager@@UEAA@XZ @ 0x1804710C8 (--1TabletModeViewManager@@UEAA@XZ.c)
 */

TabletModeViewManager *__fastcall TabletModeViewManager::`vector deleting destructor'(
        TabletModeViewManager *this,
        char a2)
{
  TabletModeViewManager::~TabletModeViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
