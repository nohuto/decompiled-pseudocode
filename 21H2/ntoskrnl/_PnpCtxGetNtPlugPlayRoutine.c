/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1407817E8
 * Callers:
 *     _NtPlugPlayGetDeviceProperty @ 0x1406D4FE0 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1406E5E80 (_NtPlugPlayGetDeviceRelationsList.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x140781790 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140784C2C (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140789084 (_NtPlugPlayGetDeviceRelatedDevice.c)
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
