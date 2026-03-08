/*
 * XREFs of HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr @ 0x1C0030E2C
 * Callers:
 *     HUBDSM_Setting30Speed @ 0x1C0020F70 (HUBDSM_Setting30Speed.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r8

  switch ( (*(_DWORD *)a1 >> 4) & 3 )
  {
    case 1:
      v2 = 1000LL;
      break;
    case 2:
      v2 = 1000000LL;
      break;
    case 3:
      v2 = 1000000000LL;
      break;
    default:
      v2 = 1LL;
      break;
  }
  v3 = (unsigned int)(a2 + 1) * (unsigned __int64)*(unsigned __int16 *)(a1 + 2) * v2;
  if ( v3 >= 0x2FAF080 )
    return 0x2E90EDD000LL / v3;
  else
    return 0xFFFFLL;
}
