/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0069E80
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C03B4524 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 16) )
    WdLogSingleEntry0(1LL);
  return a2 + *(_QWORD *)(a1 + 24);
}
