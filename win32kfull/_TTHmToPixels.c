/*
 * XREFs of _TTHmToPixels @ 0x1C014AE1A
 * Callers:
 *     TouchTargetingDownrank @ 0x1C014ADB2 (TouchTargetingDownrank.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E5B20 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C02503A0 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C025076C (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  plResult = 0;
  if ( LongLongToLong(1000LL * a1 / a2, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
