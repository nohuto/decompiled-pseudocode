/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1C017FA80
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x1C0183840 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 216), *(unsigned __int16 *)(a2 + 208));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  a1[1] = 92;
  result = 0LL;
  a1[a3 - 1] = 0;
  return result;
}
