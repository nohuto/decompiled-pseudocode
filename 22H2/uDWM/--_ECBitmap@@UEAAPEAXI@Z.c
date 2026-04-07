/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x1800C04C0
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x180058130 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x180050930 (--1CBitmap@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
