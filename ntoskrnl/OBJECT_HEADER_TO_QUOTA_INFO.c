/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x140206AE0
 * Callers:
 *     ObpChargeQuotaForObject @ 0x140696054 (ObpChargeQuotaForObject.c)
 *     SeDefaultObjectMethod @ 0x1406961E0 (SeDefaultObjectMethod.c)
 *     NtQueryObject @ 0x14071EA20 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x140751258 (ObAdjustSecurityQuota.c)
 *     ObGetObjectInformation @ 0x140978914 (ObGetObjectInformation.c)
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
