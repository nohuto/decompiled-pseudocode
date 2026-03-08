/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406C4454
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x14067E994 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1407FB7F4 (PiDqIrpPropertySet.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140965C20 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140965DBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140966230 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096656C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140967714 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1409679A8 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1406CBD38 (PiAuVerifyAccessToObject.c)
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
