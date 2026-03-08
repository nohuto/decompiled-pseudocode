/*
 * XREFs of ACPISystemPowerGetDeviceWake @ 0x1C0094F08
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C003E7C8 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C003EAE0 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 * Callees:
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 */

__int64 __fastcall ACPISystemPowerGetDeviceWake(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned __int8 v5; // di
  int v6; // ecx
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( (*(_QWORD *)(a1 + 8) & 0xA000000000000LL) != 0 )
    return 3221225524LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = ACPIGet(a1, *(_DWORD *)&aS3wS4wS1wS2wSw[4 * v5], 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v8, 0LL);
    if ( v6 >= 0 )
      break;
    if ( ++v5 >= 5u )
      return (unsigned int)v6;
  }
  if ( v8 < 5 )
    v3 = v8 + 1;
  *a2 = v3;
  return (unsigned int)v6;
}
