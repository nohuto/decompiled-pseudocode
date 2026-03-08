/*
 * XREFs of ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x180272A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CExpressionForce *__fastcall CExpressionForce::`vector deleting destructor'(CExpressionForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
