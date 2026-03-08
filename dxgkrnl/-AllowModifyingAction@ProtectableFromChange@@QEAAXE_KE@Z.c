/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C03B4524
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C0069CB0 (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0069E80 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(ProtectableFromChange *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  _BYTE *v6; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
    WdLogSingleEntry0(1LL);
  LOBYTE(a2) = v3;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 24LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( (_BYTE)v3 == 0xFF )
  {
    if ( a3 != 255 )
      WdLogSingleEntry0(1LL);
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    *((_WORD *)this + 11) |= 1 << v3;
    v6 = (_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 24, v3);
    *v6 &= 0xF0u;
    *(_QWORD *)Vector<unsigned __int64>::operator[]((__int64)this + 64, v3) = a3;
  }
}
