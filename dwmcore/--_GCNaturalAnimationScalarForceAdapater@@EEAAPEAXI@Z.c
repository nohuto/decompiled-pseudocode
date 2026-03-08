/*
 * XREFs of ??_GCNaturalAnimationScalarForceAdapater@@EEAAPEAXI@Z @ 0x180238980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CNaturalAnimationScalarForceAdapater *__fastcall CNaturalAnimationScalarForceAdapater::`scalar deleting destructor'(
        CNaturalAnimationScalarForceAdapater *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CNaturalAnimationScalarForceAdapater::`vftable';
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
