/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x140379B70
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140517908 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140517A94 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140517DEC (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1405180D0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14080BECC (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x14085E574 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x140517B78 (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( (_BYTE)a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1, a2, 0LL);
      }
    }
  }
  return result;
}
