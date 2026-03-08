/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C01E25C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceTerminalId @ 0x1C01BFC18 (RIMSetDeviceTerminalId.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, int a2)
{
  return RIMSetDeviceTerminalId(a1, a2);
}
