/*
 * XREFs of PsCreateSystemThread @ 0x1406A7420
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140250C60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     SmKmStoreHelperStart @ 0x140293F1C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140293FB4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x1403A5388 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403B4EC0 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403C2D94 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403C33A0 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405B3360 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x140998CEC (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D679C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E1220 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140A4CA3C (SeRmInitPhase1.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6CC0C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6EC48 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A72A20 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
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
