/*
 * XREFs of EtwEventActivityIdControl @ 0x18005CBE0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x18008A3D0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  ULONG v2; // ebx
  ULONG result; // eax
  ULONG v4; // ecx
  ULONG v5; // ecx
  NTSTATUS v6; // eax
  ULONG v7; // ecx
  _GUID v8; // xmm1
  LONG v9; // eax
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  if ( !ActivityId )
    return 87;
  if ( ControlCode == 2 )
  {
    NtCurrentTeb()->ActivityId = *ActivityId;
    return 0;
  }
  v4 = ControlCode - 1;
  if ( !v4 )
  {
    result = 0;
    *ActivityId = NtCurrentTeb()->ActivityId;
    return result;
  }
  v5 = v4 - 2;
  if ( !v5 )
    goto LABEL_9;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_17;
    }
    *ActivityId = NtCurrentTeb()->ActivityId;
    ActivityId = &NtCurrentTeb()->ActivityId;
LABEL_9:
    v6 = NtTraceControl(EtwActivityIdCreate, 0LL, 0, ActivityId, 0x10u, &ReturnLength);
    if ( !v6 )
      return 0;
LABEL_17:
    v9 = RtlNtStatusToDosError(v6);
    v2 = v9;
    if ( v9 )
      RtlSetLastWin32Error(v9);
    return v2;
  }
  v8 = NtCurrentTeb()->ActivityId;
  NtCurrentTeb()->ActivityId = *ActivityId;
  result = 0;
  *ActivityId = v8;
  return result;
}
