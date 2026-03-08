/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C01BF788
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01B10CC (RIMVirtCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C01BF13C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C01DD4D4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsLegacyDevice @ 0x1C01BF718 (RIMIsLegacyDevice.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  __int16 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *i; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = a2;
  v5 = a1;
  for ( i = *(__int64 **)(SGDGetUserSessionState(a1, a2, a3, a4) + 376); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(SGDGetUserSessionState(v7, v6, v9, v10) + 376) )
      return 0LL;
    if ( (unsigned int)RIMIsLegacyDevice(*((_WORD *)i + 8), *((_WORD *)i + 9)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 124);
    if ( *((_WORD *)i + 8) == v5 && *((_WORD *)i + 9) == v4 )
      break;
  }
  return i;
}
