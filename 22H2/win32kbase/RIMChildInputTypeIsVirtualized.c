/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C0056848
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0053D04 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0054E80 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A9B40 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA634 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA66C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA6BC (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !isChildPartition() )
    return 0;
  if ( (dword_1C02586A8 & 1) == 0 )
  {
    dword_1C02586A8 |= 1u;
    dword_1C0258558 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C025855C = 1;
    dword_1C0258560 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C0258564 = 2;
    dword_1C0258568 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C025856C = 16;
    dword_1C0258570 = (unsigned __int8)IsPenIVEnabled();
    dword_1C0258574 = 4;
    dword_1C0258578 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C025857C = 8;
  }
  v3 = &dword_1C0258558;
  while ( (a1 & v3[1]) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == &dword_1C0258580 )
      return 0;
  }
  return 1;
}
