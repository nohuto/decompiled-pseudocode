/*
 * XREFs of ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x1800B5C08
 * Callers:
 *     ??_ECAccentTransition@@W7EAAPEAXI@Z @ 0x180058260 (--_ECAccentTransition@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CAccentTransition *__fastcall CAccentTransition::`vector deleting destructor'(CAccentTransition *this, char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAccentTransition::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAccentTransition::`vftable'{for `CBaseObject'};
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAccentTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
