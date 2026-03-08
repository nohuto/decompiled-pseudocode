/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x140396EE0
 * Callers:
 *     HalpFlushTLB @ 0x14037B0FC (HalpFlushTLB.c)
 *     KiSetPageAttributesTable @ 0x140A89A00 (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x140A8C4C0 (KeLoadMTRR.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
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
