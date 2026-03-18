/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1407983D0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDCF0 (_PnpOpenPropertiesKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407956A8 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140798154 (_PnpSetPropertyWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140877328 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140880440 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140881418 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1409707D8 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140A65A10 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B95B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B95D90 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x14079844C (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, __int64 a2)
{
  return RegRtlCreateKeyTransacted(a2);
}
