/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C01D1704
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RimInputTypeToDeviceType @ 0x1C0039D00 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = RimInputTypeToDeviceType(*(_DWORD *)(a1 + 84));
  v5 = RIMCreateDev(a1, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification(a1, v9, v6, v7);
    if ( v5 < 0 )
      RIMFreeDev(a1, v9);
  }
  return (unsigned int)v5;
}
