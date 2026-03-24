/*
 * XREFs of RIMIsLegacyDevice @ 0x1C00AC894
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC634 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC7AC (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int16 a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = 1;
  if ( a1 != 1 )
    goto LABEL_2;
  if ( a2 == 2 || a2 == 6 )
    v2 = 1;
  if ( a2 != 6 && a2 != 2 )
LABEL_2:
    v3 = 0;
  if ( v2 != v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
  return v2;
}
