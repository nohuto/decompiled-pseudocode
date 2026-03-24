/*
 * XREFs of RtlXSaveS @ 0x1402C112C
 * Callers:
 *     KeContextFromKframes @ 0x140273B00 (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1402C0F5C (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x140519EF8 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x140649FC4 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x1402C1160 (RtlXSave.c)
 *     XSaveSHelper @ 0x140408AF0 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
