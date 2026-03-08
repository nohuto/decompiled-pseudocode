/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00067DC
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00062F0 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0184854 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C01A05AC (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) != 255LL )
  {
    if ( v2 >= *((_QWORD *)this + 10) )
      WdLogSingleEntry0(1LL);
    --*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2);
  }
  if ( v2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) )
    ProtectableFromChange::DisallowModifyingAction(this, v2);
}
