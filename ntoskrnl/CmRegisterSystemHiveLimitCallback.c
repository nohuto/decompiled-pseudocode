/*
 * XREFs of CmRegisterSystemHiveLimitCallback @ 0x14081D478
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0CE68 (CmpDoQueueSystemHiveHysteresis.c)
 */

__int64 __fastcall CmRegisterSystemHiveLimitCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  unsigned int v4; // ebx

  if ( qword_140C028D0 )
  {
    HIDWORD(a2) = 0;
    v3 = *(_DWORD *)(*(_QWORD *)(qword_140C028D0 + 64) + 40LL) + 4096;
    LODWORD(a2) = 100 * v3 % (unsigned int)CmSystemHiveLimitSize;
    v4 = 100 * v3 / (unsigned int)CmSystemHiveLimitSize;
  }
  else
  {
    v4 = 0;
  }
  if ( !CmpSystemHiveHysteresisCallback )
  {
    CmpSystemHiveHysteresisLow = 80;
    CmpSystemHiveHysteresisCallback = (__int64)PpSystemHiveLimitCallback;
    CmpSystemHiveHysteresisHigh = 90;
    CmpSystemHiveHysteresisContext = a3;
    CmpSystemHiveHysteresisLowSeen = 1;
    if ( v4 >= 0x5A && (CmpSystemHiveHysteresisHighSeen = 1, (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v4, a2)) )
      CmpSystemHiveHysteresisLowSeen = 0;
    else
      CmpSystemHiveHysteresisHighSeen = 0;
  }
  return v4;
}
