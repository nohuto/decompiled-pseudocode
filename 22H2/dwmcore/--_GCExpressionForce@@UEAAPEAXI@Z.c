/*
 * XREFs of ??_GCExpressionForce@@UEAAPEAXI@Z @ 0x180214BF4
 * Callers:
 *     ??_ECExpressionForce@@WBA@EAAPEAXI@Z @ 0x1800F64B0 (--_ECExpressionForce@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

CExpressionForce *__fastcall CExpressionForce::`scalar deleting destructor'(CExpressionForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
