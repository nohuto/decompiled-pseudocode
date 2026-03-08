/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x140731F58
 * Callers:
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0CE68 (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx

  if ( a1 == qword_140C028D0 && CmpSystemHiveHysteresisCallback )
  {
    v4 = a2 + 4096;
    v6 = 100 * (a2 + 4096) % CmSystemHiveLimitSize;
    v5 = 100 * v4 / CmSystemHiveLimitSize;
    if ( a2 <= a3 )
    {
      if ( !CmpSystemHiveHysteresisLowSeen && v5 < CmpSystemHiveHysteresisLow )
      {
        CmpSystemHiveHysteresisLowSeen = 1;
        if ( CmpSystemHiveHysteresisHighSeen == 1 )
        {
          if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) != 1 )
            goto LABEL_9;
LABEL_14:
          CmpSystemHiveHysteresisHighSeen = 0;
        }
      }
    }
    else if ( v5 > CmpSystemHiveHysteresisHigh && !CmpSystemHiveHysteresisHighSeen )
    {
      CmpSystemHiveHysteresisHighSeen = 1;
      if ( CmpSystemHiveHysteresisLowSeen == 1 )
      {
        if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) == 1 )
        {
LABEL_9:
          CmpSystemHiveHysteresisLowSeen = 0;
          return;
        }
        goto LABEL_14;
      }
    }
  }
}
