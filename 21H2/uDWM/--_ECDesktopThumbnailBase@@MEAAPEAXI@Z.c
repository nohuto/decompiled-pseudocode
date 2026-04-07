/*
 * XREFs of ??_ECDesktopThumbnailBase@@MEAAPEAXI@Z @ 0x1800963B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800B6198 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::`vector deleting destructor'(
        CDesktopThumbnailBase *this,
        char a2)
{
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDesktopThumbnailBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
