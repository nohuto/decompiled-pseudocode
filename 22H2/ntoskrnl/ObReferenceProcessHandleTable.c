/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405F57B4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140506E50 (IoRevokeHandlesForProcess.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140607AA4 (ObInitProcess.c)
 *     ObpCloseHandle @ 0x14061B020 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ObCompleteObjectDuplication @ 0x140664680 (ObCompleteObjectDuplication.c)
 *     ObQueryObjectAuditingByHandle @ 0x140664CA0 (ObQueryObjectAuditingByHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406650C8 (ObCaptureObjectStateForDuplication.c)
 *     ObFindHandleForObject @ 0x140665680 (ObFindHandleForObject.c)
 *     ObGetProcessHandleCount @ 0x1406976DC (ObGetProcessHandleCount.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 *     PspApplyMitigationOptions @ 0x1407062EC (PspApplyMitigationOptions.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895A58 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A139C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409079C8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E17C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( ExAcquireRundownProtection(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      ExReleaseRundownProtection(v1);
  }
  return Count;
}
