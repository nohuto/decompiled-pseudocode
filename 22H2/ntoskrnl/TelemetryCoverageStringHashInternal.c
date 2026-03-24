/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x140321B48
 * Callers:
 *     EtwpCoverageValidateCP @ 0x140321A80 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405A6740 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x1407729F0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1407938D4 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1407C9F5C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140935160 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409352C4 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409354A4 (EtwpCoverageResetCP.c)
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
