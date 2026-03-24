/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1C0152D2C
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x1C0156330 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 216), *(unsigned __int16 *)(a2 + 208));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3786);
  a1[1] = 92;
  result = (unsigned int)(a3 - 1);
  a1[result] = 0;
  return result;
}
