/*
 * XREFs of PiUEventDeviceNeedsInstall @ 0x14078BA10
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiUEventDeviceNeedsInstall(__int64 a1, _BYTE *a2)
{
  int ObjectProperty; // ecx
  int v6; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v7[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v8; // [rsp+98h] [rbp+28h] BYREF
  int v9; // [rsp+A0h] [rbp+30h] BYREF
  int v10; // [rsp+A8h] [rbp+38h] BYREF

  *a2 = 0;
  v8 = 0;
  v6 = 0;
  v7[0] = 0;
  v10 = 0;
  v9 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_DevNodeStatus,
                     (__int64)&v10,
                     (__int64)&v8,
                     4,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty < 0 )
    return (unsigned int)ObjectProperty;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ProblemCode,
                     (__int64)&v10,
                     (__int64)&v6,
                     4,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty < 0 )
    return (unsigned int)ObjectProperty;
  if ( (v8 & 0x40000) != 0 )
    goto LABEL_13;
  if ( (v8 & 0x400) == 0 )
    goto LABEL_5;
  if ( v6 == 22 )
  {
LABEL_13:
    *a2 = 0;
    return (unsigned int)ObjectProperty;
  }
  if ( v6 == 18 || v6 == 1 )
    goto LABEL_7;
LABEL_5:
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ConfigFlags,
                     (__int64)&v10,
                     (__int64)v7,
                     4,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty >= 0 && (v7[0] & 0x420) != 0 )
LABEL_7:
    *a2 = 1;
  return (unsigned int)ObjectProperty;
}
