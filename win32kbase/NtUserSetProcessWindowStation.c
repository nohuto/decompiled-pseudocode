/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00C19A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetProcessWindowStationEntryPoint @ 0x1C00C19B8 (ApiSetEditionSetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserSetProcessWindowStation()
{
  return (int)ApiSetEditionSetProcessWindowStationEntryPoint();
}
