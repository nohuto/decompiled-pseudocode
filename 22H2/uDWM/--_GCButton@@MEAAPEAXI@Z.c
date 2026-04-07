/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x1800283F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x180027074 (--1CButton@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CBaseObject **__fastcall CButton::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CButton::~CButton(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
