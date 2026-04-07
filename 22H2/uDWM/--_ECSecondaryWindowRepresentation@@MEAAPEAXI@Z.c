/*
 * XREFs of ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180027370
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026D24 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::`vector deleting destructor'(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CSecondaryWindowRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
