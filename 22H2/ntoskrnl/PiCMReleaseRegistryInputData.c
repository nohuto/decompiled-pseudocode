/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1406ACC40
 * Callers:
 *     PiCMOpenClassKey @ 0x1406A693C (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A8AF8 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406AC6C0 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0BA4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14032D940 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
