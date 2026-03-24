/*
 * XREFs of RtlXSaveS @ 0x14031A7EC
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14031A61C (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x14033CB10 (KeContextFromKframes.c)
 *     KeSaveSupervisorState @ 0x140519E38 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1406C2D84 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14031A820 (RtlXSave.c)
 *     XSaveSHelper @ 0x140408170 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
