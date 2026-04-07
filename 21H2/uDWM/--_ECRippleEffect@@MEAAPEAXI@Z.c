/*
 * XREFs of ??_ECRippleEffect@@MEAAPEAXI@Z @ 0x18009C040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18009BFCC (--1CRippleEffect@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CRippleEffect::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CRippleEffect::~CRippleEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
