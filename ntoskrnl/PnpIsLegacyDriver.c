/*
 * XREFs of PnpIsLegacyDriver @ 0x1407976A8
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140ABE8F8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 16) >> 1) & 1;
}
