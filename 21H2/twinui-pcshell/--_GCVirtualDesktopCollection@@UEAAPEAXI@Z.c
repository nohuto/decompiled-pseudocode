/*
 * XREFs of ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x1804A6490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopCollection@@UEAA@XZ @ 0x1804A63EC (--1CVirtualDesktopCollection@@UEAA@XZ.c)
 */

CVirtualDesktopCollection *__fastcall CVirtualDesktopCollection::`scalar deleting destructor'(
        CVirtualDesktopCollection *this,
        char a2)
{
  CVirtualDesktopCollection::~CVirtualDesktopCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
