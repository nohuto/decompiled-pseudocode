/*
 * XREFs of ??_ECPerMonitorWindowRepresentation@@MEAAPEAXI@Z @ 0x1800BE8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1CPerMonitorWindowRepresentation@@MEAA@XZ @ 0x1800BE7C8 (--1CPerMonitorWindowRepresentation@@MEAA@XZ.c)
 */

CPerMonitorWindowRepresentation *__fastcall CPerMonitorWindowRepresentation::`vector deleting destructor'(
        CPerMonitorWindowRepresentation *this,
        char a2)
{
  CPerMonitorWindowRepresentation::~CPerMonitorWindowRepresentation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CPerMonitorWindowRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
