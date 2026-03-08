/*
 * XREFs of MmLowPowerEpochCallback @ 0x1403AADE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmLowPowerEpochCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v3 && a3 == 4 && a2 )
    byte_140C67AC1 = *a2 != 0;
  return 0LL;
}
