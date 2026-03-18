/*
 * XREFs of PnpIsLegacyDriver @ 0x14068F830
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140AC28F8 (IovpBuildDriverObjectList.c)
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
