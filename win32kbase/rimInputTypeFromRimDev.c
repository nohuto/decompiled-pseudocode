/*
 * XREFs of rimInputTypeFromRimDev @ 0x1C01A10C0
 * Callers:
 *     RIMIDEIsCompatibleDevice @ 0x1C01C4D48 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimInputTypeFromRimDev(__int64 a1)
{
  char v1; // al
  int v3; // edx

  v1 = *(_BYTE *)(a1 + 48);
  switch ( v1 )
  {
    case 0:
      return 1LL;
    case 1:
      return 2LL;
    case 2:
      if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
        return 32LL;
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
      if ( (unsigned int)(v3 - 5) <= 1 )
        return 4LL;
      if ( v3 == 7 )
        return 8LL;
      if ( (unsigned int)(v3 - 1) <= 3 )
        return 16LL;
      break;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 659);
  return 0LL;
}
