/*
 * XREFs of RtlXSaveS @ 0x14024215C
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x1402421DC (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x140298BF0 (KeContextFromKframes.c)
 *     KeSaveSupervisorState @ 0x14029B8E8 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x140703C00 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x1402423D0 (RtlXSave.c)
 *     XSaveSHelper @ 0x14042AB70 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave(_RCX, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return XSaveSHelper(_RCX, a2 & *(_QWORD *)(_RCX + 520));
}
