/*
 * XREFs of HalpTimerInitializeClockPn @ 0x140379D5C
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerInitializeClockPn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r9d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  HalpInterruptSetIdtEntry(210, (unsigned int)HalpTimerClockIpiRoutine, 13, a4, -3LL);
  v5 = HalpClockTimer;
  result = *(unsigned int *)(HalpClockTimer + 224);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, 13, v4, -3LL);
    if ( (*(_DWORD *)(v5 + 224) & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(v5);
      result = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 168))(InternalData, 209LL);
    }
  }
  v8 = HalpAlwaysOnTimer;
  if ( HalpAlwaysOnTimer )
  {
    result = *(unsigned int *)(HalpAlwaysOnTimer + 224);
    if ( (result & 1) != 0 )
    {
      result = HalpInterruptSetIdtEntry(211, (unsigned int)HalpTimerAlwaysOnClockInterrupt, 13, v4, -3LL);
      if ( (*(_DWORD *)(v8 + 224) & 0x800) != 0 )
      {
        v9 = HalpTimerGetInternalData(v8);
        return (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 168))(v9, 211LL);
      }
    }
  }
  return result;
}
