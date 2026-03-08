/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x1406F6EFC
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14068DA78 (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406F6F58 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rcx

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
