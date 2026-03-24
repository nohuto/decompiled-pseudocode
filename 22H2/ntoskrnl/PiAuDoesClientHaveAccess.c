/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x140684D94
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x140684800 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceIdList @ 0x140689BD4 (PiCMGetDeviceIdList.c)
 *     PiCMOpenClassKey @ 0x1406A693C (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A8AF8 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406AC6C0 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x14072653C (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072F0C4 (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072F1D0 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072F428 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x140743858 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14074DB30 (PiSwDispatch.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408AFBF4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFDAC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFEC8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408AFFB8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B01F4 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0BA4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0D6C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408B0F90 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1148 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x140684DD8 (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
