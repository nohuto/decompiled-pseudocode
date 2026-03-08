/*
 * XREFs of ExNotifyBootDeviceRemoval @ 0x140607080
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

char __fastcall ExNotifyBootDeviceRemoval(__int64 a1)
{
  if ( *(_DWORD *)a1 != 1347306562 )
    return 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 4)) == 1
    && _InterlockedIncrement(&ExNumMissingBootDevices) == 1 )
  {
    KeSetEvent(&ExBootDevicesRemovedEvent, 0, 0);
  }
  return 1;
}
