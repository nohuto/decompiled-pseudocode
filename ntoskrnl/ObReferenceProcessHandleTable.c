/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140711794
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140707D3C (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x14070A66C (PspApplyMitigationOptions.c)
 *     ObFindHandleForObject @ 0x14070F7D0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407111A4 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 *     ObGetProcessHandleCount @ 0x14071172C (ObGetProcessHandleCount.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407D7FB0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409481C8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140955108 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AB674 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1409EC598 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}
