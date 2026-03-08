/*
 * XREFs of rimIsHidInputDevice @ 0x1C00EFBB2
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2454);
  LOBYTE(v2) = *(_WORD *)(a2 + 44) != 0;
  return v2;
}
