/*
 * XREFs of PnpIsLegacyDriver @ 0x14073C78C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14073E9B8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C5420 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
