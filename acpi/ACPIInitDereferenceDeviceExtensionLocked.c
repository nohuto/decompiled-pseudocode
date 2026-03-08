/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C002D060
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002D7B0 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C003F540 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD08 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 732), 0xFFFFFFFF) != 1 )
    return 0;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x39u) )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      KeBugCheckEx(0xA3u, 2uLL, 0x90354uLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((volatile signed __int32 *)BugCheckParameter4);
  return 1;
}
