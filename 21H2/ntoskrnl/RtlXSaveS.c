/*
 * XREFs of RtlXSaveS @ 0x14023F5CC
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14023F3FC (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x140261AA0 (KeContextFromKframes.c)
 *     KeSaveSupervisorState @ 0x14051A138 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x14063EDE4 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14023F600 (RtlXSave.c)
 *     XSaveSHelper @ 0x140408CD0 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
