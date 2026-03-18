/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C01A82F4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RimInputTypeToDeviceType @ 0x1C00483D0 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 21));
  v5 = RIMCreateDev(Object, v4, a2, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v9);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v9, v6, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v9);
  }
  return (unsigned int)v5;
}
