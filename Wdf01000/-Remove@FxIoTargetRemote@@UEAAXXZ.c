/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0055620
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this, __int64 a2, unsigned __int8 a3)
{
  FxIoTargetRemote::Close(this, 3, a3);
}
