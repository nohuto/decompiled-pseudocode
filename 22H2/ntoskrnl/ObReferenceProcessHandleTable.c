/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140742B50
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558380 (IoRevokeHandlesForProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406B362C (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x14073FE00 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140740010 (ObQueryObjectAuditingByHandle.c)
 *     ObGetProcessHandleCount @ 0x140742AE8 (ObGetProcessHandleCount.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     ObFindHandleForObject @ 0x1407AE470 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407BD74C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1407BFAC4 (ObCompleteObjectDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x14094B1E8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140958128 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AE6F4 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1409EF428 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
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
