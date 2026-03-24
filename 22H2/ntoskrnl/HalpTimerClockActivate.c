/*
 * XREFs of HalpTimerClockActivate @ 0x1403A1D70
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     HalpTimerPrepareClockInterrupt @ 0x1403A1DEC (HalpTimerPrepareClockInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A1FAC (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerClockActivate(char a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // [rsp+30h] [rbp-8h]

  if ( a1 )
  {
    HalpTimerPrepareClockInterrupt();
    _disable();
    LOBYTE(v4) = 13;
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, v4, v5, -3LL);
    if ( (v6 & 0x200) != 0 )
      _enable();
  }
  else
  {
    result = *(unsigned int *)(HalpClockTimer + 224);
    if ( (result & 1) != 0 && (result & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(HalpClockTimer);
      return (*(__int64 (__fastcall **)(__int64, __int64))(v3 + 168))(InternalData, 209LL);
    }
  }
  return result;
}
