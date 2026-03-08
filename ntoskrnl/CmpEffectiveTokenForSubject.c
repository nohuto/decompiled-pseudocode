/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x140768D98
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x140768D48 (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x140A1709C (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A18BC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( !*a1 )
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
