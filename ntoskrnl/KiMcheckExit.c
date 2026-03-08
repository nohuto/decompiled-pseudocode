/*
 * XREFs of KiMcheckExit @ 0x140417270
 * Callers:
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void KiMcheckExit()
{
  unsigned __int64 retaddr; // [rsp+10h] [rbp+0h]
  __int16 v2; // [rsp+20h] [rbp+10h]

  if ( (v2 & 4) == 0 )
  {
    __writemsr(0x17Au, 0LL);
    __asm
    {
      verw    [rsp+arg_18]
      iretq
    }
  }
  __writeeflags(retaddr);
  __writemsr(0x17Au, 0LL);
  __asm
  {
    verw    [rsp+arg_0]
    retfq
  }
}
