/*
 * XREFs of PsCreateSystemThread @ 0x1406FDA10
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14032BAF0 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     SmKmStoreHelperStart @ 0x14035412C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403541C4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1403542C0 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x1403A4B38 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403B46F0 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403C25C4 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403C2BD0 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405B3070 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x140997CDC (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D57AC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E0230 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140A4BA3C (SeRmInitPhase1.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6BC0C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6DC48 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A71A20 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406FDA60 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
