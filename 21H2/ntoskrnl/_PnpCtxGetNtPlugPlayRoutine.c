/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x140636250
 * Callers:
 *     _NtPlugPlayGetDeviceStatus @ 0x1405FF790 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14060FB38 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14061BED0 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406361F8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14097C33C (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
