/*
 * XREFs of ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C006838C
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0066C2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00670B0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoTargetRemote::UnregisterForPnpNotification(FxIoTargetRemote *this, void *Handle)
{
  if ( Handle )
  {
    if ( FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx )
      FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx(Handle);
    else
      IoUnregisterPlugPlayNotification(Handle);
  }
}
