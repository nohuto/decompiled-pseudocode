/*
 * XREFs of HalpTimerClockActivate @ 0x140378000
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140379B9C (HalpTimerPrepareClockInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerClockActivate(char a1)
{
  int v1; // r8d
  int v2; // r9d
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int16 v6; // [rsp+30h] [rbp-8h]

  if ( a1 )
  {
    HalpTimerPrepareClockInterrupt();
    _disable();
    LOBYTE(v1) = 13;
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, v1, v2, -3LL);
    if ( (v6 & 0x200) != 0 )
      _enable();
  }
  else
  {
    result = *(unsigned int *)(HalpClockTimer + 224);
    if ( (result & 1) != 0 && (result & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(HalpClockTimer);
      return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 168))(InternalData, 209LL);
    }
  }
  return result;
}
