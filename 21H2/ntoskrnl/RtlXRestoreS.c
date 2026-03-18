/*
 * XREFs of RtlXRestoreS @ 0x14022E800
 * Callers:
 *     KxContextToKframes @ 0x14022E3B0 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14022E848 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x14029B210 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x140703FB0 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14022E984 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x14042AB90 (XRestoreSHelper.c)
 */

__int64 __fastcall RtlXRestoreS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2, a2);
}
