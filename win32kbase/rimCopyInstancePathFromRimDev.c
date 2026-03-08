/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1C01A14E8
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x1C01A55D0 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 216), *(unsigned __int16 *)(a2 + 208));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3961);
  a1[1] = 92;
  result = (unsigned int)(a3 - 1);
  a1[result] = 0;
  return result;
}
