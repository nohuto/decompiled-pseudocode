/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140775B74
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     PopTransitionTelemetryOsState @ 0x140798C44 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d
  char v8; // r9
  int v9; // r11d
  unsigned int v11; // r10d
  __int64 v12; // rcx

  v5 = 0;
  if ( dword_140C02228 && tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) )
  {
    if ( (unsigned int)(v9 - 4) <= 2 )
    {
      v12 = 2LL;
      LOBYTE(v5) = v9 == 5;
      v11 = v5 + 1;
    }
    else
    {
      if ( (unsigned int)(v9 - 2) > 1 )
        return v5;
      v11 = 4;
      v12 = 4 - (unsigned int)(a5 != 0);
      if ( v9 == 3 || a3 == 5 )
      {
        if ( (v8 & 8) != 0 )
        {
          v11 = 3;
        }
        else
        {
          v11 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v11 = 8;
        }
      }
    }
    return (unsigned int)PopTransitionTelemetryOsState(v12, v11);
  }
  return v5;
}
