/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14024F664
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14024F59C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x140630EF0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x14081B500 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140861D70 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E52D0 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E54B0 (EtwpCoverageResetCP.c)
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
