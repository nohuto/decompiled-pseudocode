/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x1403479EC
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1406D8908 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1406D8FF8 (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x14070FAF0 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1408DD4C8 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
