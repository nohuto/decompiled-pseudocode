/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C00C1E80
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0044B20 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     IsKeyboardIVEnabled @ 0x1C0006EF4 (IsKeyboardIVEnabled.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01F0D34 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01F0DB4 (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !isChildPartition() )
    return 0;
  if ( (dword_1C02A0630 & 1) == 0 )
  {
    dword_1C02A0630 |= 1u;
    dword_1C029E4B8 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C029E4BC = 1;
    dword_1C029E4C0 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C029E4C4 = 2;
    dword_1C029E4C8 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C029E4CC = 16;
    dword_1C029E4D0 = (unsigned __int8)IsPenIVEnabled();
    dword_1C029E4D4 = 4;
    dword_1C029E4D8 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C029E4DC = 8;
  }
  v3 = &dword_1C029E4B8;
  while ( (a1 & v3[1]) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == (int *)&Feature_PenTapped__private_reporting )
      return 0;
  }
  return 1;
}
