/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1406C891C
 * Callers:
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406C81CC (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C8898 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x140786A08 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14084ED50 (_NtPlugPlayGetDeviceRelationsList.c)
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
