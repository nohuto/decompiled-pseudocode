/*
 * XREFs of RtlXRestoreS @ 0x1402D8238
 * Callers:
 *     KxContextToKframes @ 0x1402D7DC0 (KxContextToKframes.c)
 *     KeRestoreSupervisorState @ 0x14036A0E0 (KeRestoreSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14036A3E8 (KeRestoreExtendedAndSupervisorState.c)
 *     PspSetContext @ 0x1407603A0 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14036A500 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140421780 (XRestoreSHelper.c)
 */

__int64 __fastcall RtlXRestoreS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2, a2);
}
