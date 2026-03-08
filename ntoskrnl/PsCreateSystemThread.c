/*
 * XREFs of PsCreateSystemThread @ 0x1407DE2E0
 * Callers:
 *     PopCreatePowerThread @ 0x140300AA4 (PopCreatePowerThread.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403595E8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403596E4 (SmKmStoreHelperStart.c)
 *     EtwpStartLoggerThread @ 0x14035980C (EtwpStartLoggerThread.c)
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A14B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     DisplayBootBitmap @ 0x1403A4B48 (DisplayBootBitmap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403B90D0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403BAB18 (CcInitializePrivateVolumeCacheMap.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1405E81D0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x1406070D0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140ACE860 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140AD7118 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140B65C4C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B698FC (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140B6F290 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
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
