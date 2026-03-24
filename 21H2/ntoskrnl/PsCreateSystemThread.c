/*
 * XREFs of PsCreateSystemThread @ 0x1406D0140
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1402D2870 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     SmKmStoreHelperStart @ 0x1402E2BCC (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402E2C64 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1402E2D60 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x1403A5238 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403C2964 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403C2F70 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405B3130 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x140997CEC (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D579C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E0220 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140A4BA3C (SeRmInitPhase1.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6BC0C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6DC48 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A71A20 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406D0190 (PsCreateSystemThreadEx.c)
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
           (int)ThreadHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
