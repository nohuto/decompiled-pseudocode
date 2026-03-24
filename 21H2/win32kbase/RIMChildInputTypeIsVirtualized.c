/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C0055848
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0052D04 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0053E80 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0041518 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A9640 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA704 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA73C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA78C (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !isChildPartition() )
    return 0;
  if ( (dword_1C0259698 & 1) == 0 )
  {
    dword_1C0259698 |= 1u;
    dword_1C0259548 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C025954C = 1;
    dword_1C0259550 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C0259554 = 2;
    dword_1C0259558 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C025955C = 16;
    dword_1C0259560 = (unsigned __int8)IsPenIVEnabled();
    dword_1C0259564 = 4;
    dword_1C0259568 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C025956C = 8;
  }
  v3 = &dword_1C0259548;
  while ( (a1 & v3[1]) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == (int *)&gullTouchInjectionMaxTimeOffset )
      return 0;
  }
  return 1;
}
