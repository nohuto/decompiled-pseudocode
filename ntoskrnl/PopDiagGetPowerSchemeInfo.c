/*
 * XREFs of PopDiagGetPowerSchemeInfo @ 0x1403C2BA4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagGetPowerSchemeInfo(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax

  v3 = *a1 - *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1 )
    v3 = a1[1] - *(_QWORD *)GUID_MAX_POWER_SAVINGS.Data4;
  if ( v3 )
  {
    v4 = *a1 - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
    if ( *a1 == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
      v4 = a1[1] - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
    if ( v4 )
    {
      v8 = *a1 - *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1;
      if ( *a1 == *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1 )
        v8 = a1[1] - *(_QWORD *)GUID_TYPICAL_POWER_SAVINGS.Data4;
      if ( v8 )
        *a3 |= 0x10u;
    }
  }
  v5 = *a2 - *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_MAX_POWER_SAVINGS.Data4;
  if ( !v5 )
  {
    result = *a3 & 0xFFFFFFF0 | 1;
    goto LABEL_14;
  }
  v6 = *a2 - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
    v6 = a2[1] - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
  if ( !v6 )
  {
    result = *a3 & 0xFFFFFFF0 | 2;
LABEL_14:
    *a3 = result;
    return result;
  }
  result = *a2 - *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1 )
    result = a2[1] - *(_QWORD *)GUID_TYPICAL_POWER_SAVINGS.Data4;
  if ( !result )
  {
    result = *a3 & 0xFFFFFFF0 | 4;
    goto LABEL_14;
  }
  return result;
}
