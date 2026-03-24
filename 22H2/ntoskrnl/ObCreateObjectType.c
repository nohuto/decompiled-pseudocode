/*
 * XREFs of ObCreateObjectType @ 0x140790760
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A3BFF4 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A3C164 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A3CB08 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A3CE48 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     EtwpInitializeCoverageSampler @ 0x140A41F18 (EtwpInitializeCoverageSampler.c)
 *     SepTokenInitialization @ 0x140A48AAC (SepTokenInitialization.c)
 *     MiInitializeSessionIds @ 0x140A54D74 (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     CmpCreateObjectTypes @ 0x140A57F98 (CmpCreateObjectTypes.c)
 *     HalpDmaInitializeDomain @ 0x140A65CEC (HalpDmaInitializeDomain.c)
 *     WmipInitializeSecurity @ 0x140A69C2C (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140A6D4E0 (DbgkpInitializePhase0.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A6F2EC (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A704D4 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140A71A20 (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140A72644 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140A72734 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A72CB4 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A73310 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140A734FC (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A735A0 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140790780 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
