/*
 * XREFs of KeInitializeMutex @ 0x14035FBE0
 * Callers:
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1407800A0 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7DA8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  KiInitializeMutant((ULONG_PTR)Mutex);
}
