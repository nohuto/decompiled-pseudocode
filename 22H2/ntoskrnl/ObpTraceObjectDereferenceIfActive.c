/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140249AE0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x14024BF80 (ObDereferenceObjectEx.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140277500 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     ExTimerRundown @ 0x140342758 (ExTimerRundown.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     IopDropIrp @ 0x14035A9A4 (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
