/*
 * XREFs of KiSegmentNotPresentFaultShadow @ 0x140AF36C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn KiSegmentNotPresentFaultShadow(__int64 a1)
{
  unsigned __int64 v1; // rsi
  _KIDTENTRY64 *v4; // rsi
  _KIDTENTRY64 v5; // [rsp-30h] [rbp-30h] BYREF
  _KIDTENTRY64 v6; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v7; // [rsp-10h] [rbp-10h]

  if ( (v6.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 40984LL), 1u) )
      __writecr3((unsigned __int64)&v5);
    __writegsqword(0x10u, v1);
    v4 = KeGetPcr()->IdtBase + 1056;
    v7 = v4[-1];
    v6 = v4[-2];
    v5 = v4[-3];
    __writegsqword(0x10u, 0LL);
    KiSegmentNotPresentFault(a1);
  }
  _mm_lfence();
  KiSegmentNotPresentFault(a1);
}
