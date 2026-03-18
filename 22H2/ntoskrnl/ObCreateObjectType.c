/*
 * XREFs of ObCreateObjectType @ 0x140821750
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14039BEFC (HalpDmaInitializeObjectType.c)
 *     CmpCreateObjectTypes @ 0x140B3A2E0 (CmpCreateObjectTypes.c)
 *     WmipInitializeSecurity @ 0x140B3C860 (WmipInitializeSecurity.c)
 *     PspInitializeSiloStructures @ 0x140B4CF10 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140B4D070 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140B4D9FC (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140B4DD44 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     SepTokenInitialization @ 0x140B57E58 (SepTokenInitialization.c)
 *     PopPowerRequestInitialize @ 0x140B66098 (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140B6B730 (PopEtInit.c)
 *     DbgkpInitializePhase0 @ 0x140B6C29C (DbgkpInitializePhase0.c)
 *     ExpInitializeCallbacks @ 0x140B6C95C (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140B6ECCC (ExpKeyedEventInitialization.c)
 *     MiSectionInitialization @ 0x140B71584 (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140B73578 (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140B741D4 (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x140B74B08 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74D28 (EtwpInitializeCoverageSampler.c)
 *     ExpMutantInitialization @ 0x140B74E10 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140B754F4 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B75BE8 (EtwpInitializeRealTimeConnection.c)
 *     IopCreateIoRingObjectType @ 0x140B75CA4 (IopCreateIoRingObjectType.c)
 *     ExpSemaphoreInitialization @ 0x140B75E30 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140B75ED4 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
