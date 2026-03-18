/*
 * XREFs of RtlXRestoreS @ 0x14033FAB8
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x14020E048 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x14020E510 (KeRestoreSupervisorState.c)
 *     KxContextToKframes @ 0x14033F640 (KxContextToKframes.c)
 *     PspSetContext @ 0x1407242B0 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14020E160 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140429B10 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
