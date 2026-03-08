/*
 * XREFs of ACPIDockIntfDereference @ 0x1C00093E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

LONG_PTR __fastcall ACPIDockIntfDereference(PVOID Object)
{
  ULONG_PTR DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  if ( *(char *)(DeviceExtension + 8) >= 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 196), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 192) = 4;
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  return ObfDereferenceObject(Object);
}
