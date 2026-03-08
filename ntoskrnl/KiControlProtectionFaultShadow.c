/*
 * XREFs of KiControlProtectionFaultShadow @ 0x140AF3BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiControlProtectionFaultShadow(int a1, int a2, int a3, int a4, __int16 a5)
{
  unsigned __int64 v5; // rsi
  _KIDTENTRY64 *v8; // rsi
  _KIDTENTRY64 v10; // [rsp-30h] [rbp-30h] BYREF
  _KIDTENTRY64 v11; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v12; // [rsp-10h] [rbp-10h]

  if ( (v11.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 40984LL), 1u) )
      __writecr3((unsigned __int64)&v10);
    __writegsqword(0x10u, v5);
    v8 = KeGetPcr()->IdtBase + 1056;
    v12 = v8[-1];
    v11 = v8[-2];
    v10 = v8[-3];
    __writegsqword(0x10u, 0LL);
    return KiControlProtectionFault(a1, a2, a3, a4, a5);
  }
  else
  {
    _mm_lfence();
    return KiControlProtectionFault(a1, a2, a3, a4, a5);
  }
}
