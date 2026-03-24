/*
 * XREFs of IoIsDeviceEjectable @ 0x14035AC1C
 * Callers:
 *     MiCreateImageFileMap @ 0x140700CC4 (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
