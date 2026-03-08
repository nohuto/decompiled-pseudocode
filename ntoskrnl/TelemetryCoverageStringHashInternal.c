/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1402F9F5C
 * Callers:
 *     EtwpCoverageValidateCP @ 0x1402F9EFC (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405FD380 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x14067FC50 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     PopTransitionTelemetryOsState @ 0x140855C64 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x14085DE70 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E566C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E5850 (EtwpCoverageResetCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
