/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1403A0380
 * Callers:
 *     HalpFlushTLB @ 0x1403BB550 (HalpFlushTLB.c)
 *     PopHandleNextState @ 0x1409938B0 (PopHandleNextState.c)
 *     KiSetPageAttributesTable @ 0x14099965C (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x140999750 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
