/*
 * XREFs of HUBDSM_CheckingIfDeviceSupportsContainerId @ 0x1C0021690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceSupportsContainerId(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 2097LL) & 2) != 0 ? 4089 : 4061;
}
