/*
 * XREFs of ?GetTrustLevel@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x14001C3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetTrustLevel(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
