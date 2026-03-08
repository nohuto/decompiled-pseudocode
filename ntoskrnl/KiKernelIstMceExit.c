/*
 * XREFs of KiKernelIstMceExit @ 0x140AF4CC0
 * Callers:
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void KiKernelIstMceExit()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+28h] [rbp-18h]
  __int16 v7; // [rsp+38h] [rbp-8h]
  unsigned __int64 v8; // [rsp+50h] [rbp+10h]
  unsigned __int64 v9; // [rsp+58h] [rbp+18h]

  v0 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( !_interlockedbittestandreset(MK_FP(__GS__, 40984LL), 0) )
    {
      v4 = __readcr3();
      if ( v4 == v9 )
        goto LABEL_8;
      v0 = v9 | 0x8000000000000000uLL;
    }
  }
  else
  {
    v1 = __readcr3();
    if ( v1 == v9 )
      goto LABEL_8;
  }
  __writecr3(v0);
LABEL_8:
  __writemsr(0xC0000101, v8);
  if ( (v7 & 4) == 0 )
  {
    __writemsr(0x17Au, 0LL);
    __asm
    {
      verw    [rsp+arg_18]
      iretq
    }
  }
  __writeeflags(v6);
  __writemsr(0x17Au, 0LL);
  __asm
  {
    verw    word ptr [rsp+arg_0]
    retfq
  }
}
