/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140630370
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406354A8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpOpenPropertiesKey @ 0x14063A2D4 (_PnpOpenPropertiesKey.c)
 *     _PnpSetPropertyWorker @ 0x1407469A0 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140759440 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1407664E4 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407693E8 (_CmCreateOrdinalInstanceKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6278 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B6818 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140977A70 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A91B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A91D50 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x14063336C (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11; // [rsp+28h] [rbp-30h]

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  v11 = 0;
  return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, v11, a7, a8, v9);
}
