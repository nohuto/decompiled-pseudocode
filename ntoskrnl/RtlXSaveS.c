/*
 * XREFs of RtlXSaveS @ 0x140302524
 * Callers:
 *     KeContextFromKframes @ 0x1403620F0 (KeContextFromKframes.c)
 *     KeSaveSupervisorState @ 0x14036A078 (KeSaveSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14036A62C (KeSaveExtendedAndSupervisorState.c)
 *     PspGetContext @ 0x1407ED060 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14036A800 (RtlXSave.c)
 *     XSaveSHelper @ 0x140421760 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave(_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return XSaveSHelper(_RCX, *(_QWORD *)(_RCX + 520) & a2);
}
