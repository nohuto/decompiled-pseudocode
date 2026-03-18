/*
 * XREFs of PsCreateSystemThread @ 0x1406F0310
 * Callers:
 *     EtwpStartLoggerThread @ 0x140261C40 (EtwpStartLoggerThread.c)
 *     SmKmStoreHelperStart @ 0x140262118 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402621B0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403898C4 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x1403B5088 (PopCreatePowerThread.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403D0750 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePartition @ 0x1403D0FE0 (CcInitializePartition.c)
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x14053C908 (CcInitializePrivateVolumeCacheMap.c)
 *     DifPsCreateSystemThreadWrapper @ 0x14061A490 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     MiEnablePartitionMappedWrites @ 0x1406F9808 (MiEnablePartitionMappedWrites.c)
 *     PopFlushVolumes @ 0x140A51CA4 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140A90ED8 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140A9A2E8 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B21F30 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140B25E30 (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B270C4 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140B2DEA8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
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
           (_DWORD)ThreadHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
