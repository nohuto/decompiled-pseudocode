/*
 * XREFs of ??_GTabletModePositioner@@UEAAPEAXI@Z @ 0x1804639BC
 * Callers:
 *     ??_ETabletModePositioner@@WBI@EAAPEAXI@Z @ 0x1801704A0 (--_ETabletModePositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x180463578 (--1TabletModePositioner@@UEAA@XZ.c)
 */

TabletModePositioner *__fastcall TabletModePositioner::`scalar deleting destructor'(
        TabletModePositioner *this,
        char a2)
{
  TabletModePositioner::~TabletModePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
