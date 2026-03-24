/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1406BA220
 * Callers:
 *     _NtPlugPlayGetDeviceStatus @ 0x140684D10 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140693D48 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14069FB60 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406BA1C8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14097C1AC (_NtPlugPlayGetDeviceRelationsList.c)
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
