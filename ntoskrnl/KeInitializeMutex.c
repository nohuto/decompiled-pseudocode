/*
 * XREFs of KeInitializeMutex @ 0x1402D97E0
 * Callers:
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     EtwpPreInitializeSiloState @ 0x14084497C (EtwpPreInitializeSiloState.c)
 *     PdcRwLockInitialize2 @ 0x1408576A8 (PdcRwLockInitialize2.c)
 *     KeAllocateCalloutStackEx @ 0x14086F550 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A8EB74 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2, 0LL);
}
