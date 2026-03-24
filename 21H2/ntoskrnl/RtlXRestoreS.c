/*
 * XREFs of RtlXRestoreS @ 0x140381D18
 * Callers:
 *     KxContextToKframes @ 0x140279000 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1402C2C98 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x140519E60 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x14064A390 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x1402C2DBC (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140408B10 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
