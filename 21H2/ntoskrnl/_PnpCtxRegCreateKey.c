/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140772A24
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CEA04 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x14076CA78 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140772E98 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1407829F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14095C804 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140A27B38 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140772D80 (_RegRtlCreateKeyTransacted.c)
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
