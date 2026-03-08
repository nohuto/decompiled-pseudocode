/*
 * XREFs of PiRebalanceOptOut @ 0x140562990
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x14096B8B8 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

bool __fastcall PiRebalanceOptOut(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // bl
  struct _DEVICE_OBJECT *v4; // rcx
  _BYTE v6[4]; // [rsp+68h] [rbp-29h] BYREF
  int v7; // [rsp+6Ch] [rbp-25h] BYREF
  int v8; // [rsp+70h] [rbp-21h] BYREF
  int v9; // [rsp+74h] [rbp-1Dh] BYREF
  ULONG ResultLength[4]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE PropertyBuffer[80]; // [rsp+88h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  v6[0] = 0;
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              v1,
              1,
              0,
              0LL,
              (__int64)&DEVPKEY_Device_DHP_Rebalance_Policy,
              (__int64)&v7,
              (__int64)&v8,
              4,
              (__int64)&v9,
              0) >= 0
    && v7 == 7 )
  {
    if ( v8 == 1 )
      return 1;
    if ( v8 == 2 )
      return v2;
  }
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  ResultLength[0] = 0;
  if ( IoGetDeviceProperty(v4, DevicePropertyClassGuid, 0x4Eu, PropertyBuffer, ResultLength) >= 0
    && (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              (unsigned int)PropertyBuffer,
              2,
              0,
              0LL,
              (__int64)&DEVPKEY_DeviceClass_DHPRebalanceOptOut,
              (__int64)&v7,
              (__int64)v6,
              1,
              (__int64)&v9,
              0) >= 0
    && v7 == 17
    && v9 == 1 )
  {
    return v6[0] == 0xFF;
  }
  return v2;
}
