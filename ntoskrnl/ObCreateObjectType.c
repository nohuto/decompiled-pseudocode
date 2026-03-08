/*
 * XREFs of ObCreateObjectType @ 0x14080CB00
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x1403982FC (HalpDmaInitializeObjectType.c)
 *     PspInitializeSiloStructures @ 0x140B3E8CC (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140B3EA2C (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140B3F3D0 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140B3F718 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     DbgkpInitializePhase0 @ 0x140B44E78 (DbgkpInitializePhase0.c)
 *     SepTokenInitialization @ 0x140B49514 (SepTokenInitialization.c)
 *     CmpCreateObjectTypes @ 0x140B51E7C (CmpCreateObjectTypes.c)
 *     WmipInitializeSecurity @ 0x140B54220 (WmipInitializeSecurity.c)
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140B68930 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140B6A590 (ExpKeyedEventInitialization.c)
 *     MiSectionInitialization @ 0x140B6D268 (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140B6F290 (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140B70248 (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x140B70A04 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x140B70C24 (EtwpInitializeCoverageSampler.c)
 *     ExpMutantInitialization @ 0x140B70D0C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140B71264 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B718B4 (EtwpInitializeRealTimeConnection.c)
 *     IopCreateIoRingObjectType @ 0x140B71970 (IopCreateIoRingObjectType.c)
 *     ExpSemaphoreInitialization @ 0x140B71AB0 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140B71B54 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
