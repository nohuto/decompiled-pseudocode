/*
 * XREFs of PiCMReturnBasicResultData @ 0x1406C7AF0
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140965C20 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140965DBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140966230 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096656C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1409679A8 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
