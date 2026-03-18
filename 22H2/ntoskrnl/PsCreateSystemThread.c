/*
 * XREFs of PsCreateSystemThread @ 0x1407B86B0
 * Callers:
 *     PopCreatePowerThread @ 0x1403425EC (PopCreatePowerThread.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403432C0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403433BC (SmKmStoreHelperStart.c)
 *     EtwpStartLoggerThread @ 0x140343454 (EtwpStartLoggerThread.c)
 *     CcInitializePartition @ 0x1403A00A0 (CcInitializePartition.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A622C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     DisplayBootBitmap @ 0x1403A9958 (DisplayBootBitmap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BEA00 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0448 (CcInitializePrivateVolumeCacheMap.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1405EA680 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x140609520 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140AD2860 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140ADB118 (VfPoolInitPhase1.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B37AB8 (PopDirectedDripsInitializePhase3.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140B647DC (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140B69528 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x140B73578 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140772B10 (PsCreateSystemThreadEx.c)
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
           (__int64)ThreadHandle,
           DesiredAccess,
           (__int128 *)ObjectAttributes,
           (ULONG_PTR)ProcessHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
