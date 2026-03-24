/*
 * XREFs of RtlXRestoreS @ 0x140381658
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x14031C008 (KeRestoreExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140342010 (KxContextToKframes.c)
 *     KeRestoreSupervisorState @ 0x140519DA0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x1406C3150 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14031C12C (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140408190 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
