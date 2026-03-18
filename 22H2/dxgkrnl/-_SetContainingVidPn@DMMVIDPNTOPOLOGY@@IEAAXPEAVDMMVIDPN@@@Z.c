/*
 * XREFs of ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00069FC
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01993D0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C01ACDD8 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0006A58 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0006A98 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0006DCC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::_SetContainingVidPn(DMMVIDPNTOPOLOGY *this, struct DMMVIDPN *a2)
{
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0) )
    WdLogSingleEntry0(1LL);
  ContainedBy<DMMVIDPN>::SetContainer((char *)this + 160, a2);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0);
}
