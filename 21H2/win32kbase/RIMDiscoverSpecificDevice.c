/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C017305C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     RimInputTypeToDeviceType @ 0x1C00A6530 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C00B39F8 (RIMDoOnPnpNotification.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 21));
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = v9;
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification(Object, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v6);
  }
  return (unsigned int)v5;
}
