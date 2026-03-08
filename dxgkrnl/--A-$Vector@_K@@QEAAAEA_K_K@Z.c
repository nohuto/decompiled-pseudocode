/*
 * XREFs of ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C0069CB0
 * Callers:
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C03B4524 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Vector<unsigned __int64>::operator[](__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 16) )
    WdLogSingleEntry0(1LL);
  return *(_QWORD *)(a1 + 24) + 8 * a2;
}
