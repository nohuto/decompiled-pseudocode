/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140687FD0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140687D54 (_PnpSetPropertyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1408658F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087B610 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14087C668 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14096D7B8 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140A62D10 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x14068804C (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, __int64 a2)
{
  return RegRtlCreateKeyTransacted(a2);
}
