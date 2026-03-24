/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x140641440
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406413E8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406A0450 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406B0B88 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406BCD54 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14097C15C (_NtPlugPlayGetDeviceRelationsList.c)
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
