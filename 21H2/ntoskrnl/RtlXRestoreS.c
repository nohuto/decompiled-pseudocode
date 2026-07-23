/*
 * XREFs of RtlXRestoreS @ 0x140381868
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1402411B8 (KeRestoreExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140266FA0 (KxContextToKframes.c)
 *     KeRestoreSupervisorState @ 0x14051A0A0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x14063F1B0 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x1402412DC (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140408CF0 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
