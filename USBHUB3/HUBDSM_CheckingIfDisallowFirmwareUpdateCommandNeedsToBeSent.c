/*
 * XREFs of HUBDSM_CheckingIfDisallowFirmwareUpdateCommandNeedsToBeSent @ 0x1C0022460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDisallowFirmwareUpdateCommandNeedsToBeSent(__int64 a1)
{
  return *(_BYTE *)(*(_QWORD *)(a1 + 960) + 2713LL) != 0 ? 4089 : 4061;
}
